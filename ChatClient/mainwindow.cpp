#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHostAddress>
#include <QJsonObject>
#include <QJsonValue>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->loginPage);
    m_chatClient = new ChatClient();

    connect(m_chatClient, &ChatClient::connected, this, &MainWindow::connectedToServer);
    connect(m_chatClient, &ChatClient::jsonReceived, this, &MainWindow::jsonReceived);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginButton_clicked()
{
    m_chatClient->connectToServer(QHostAddress(ui->lineEdit->text()),1967);
}





void MainWindow::on_logoutButton_clicked()
{
    m_chatClient->disconnectFromHost();
    ui->stackedWidget->setCurrentWidget(ui->loginPage);

    for (auto aitem : ui->userListWidget->findItems(ui->lineEdit_2->text(), Qt::MatchExactly)) {
        qDebug("remove");
        ui->userListWidget->removeItemWidget(aitem);
        delete aitem;
    }


}

void MainWindow::connectedToServer()
{
    ui->stackedWidget->setCurrentWidget(ui->chatPage);
    m_chatClient->sendMessage(ui->lineEdit_2->text(),"login");
}

void MainWindow::messageReceived(const QString &sender,const QString &text)
{
    // ui->roomTextEdit->append(QString("%1 : %2").arg(sender).arg(text));
    ui->roomTextEdit->append(QString("%1 : %2").arg(sender, text));
}

void MainWindow::jsonReceived(const QJsonObject &docObj)
{
    const QJsonValue typeVal = docObj.value("type");

    if (typeVal.isNull() || !typeVal.isString())
        return;

    if (typeVal.toString().compare("message", Qt::CaseInsensitive) == 0) {
        const QJsonValue textVal = docObj.value("text");
        const QJsonValue senderVal = docObj.value("sender");

        if (textVal.isNull() || !textVal.isString())
            return;

        if (senderVal.isNull() || !senderVal.isString())
            return;

        messageReceived(senderVal.toString(),textVal.toString());
    } else if (typeVal.toString().compare("newuser", Qt::CaseInsensitive) == 0) {
        const QJsonValue usernameVal = docObj.value("username");
        if (usernameVal.isNull() || !usernameVal.isString())
            return;

        userJoined(usernameVal.toString());

    }else if (typeVal.toString().compare("userdisconnected", Qt::CaseInsensitive) == 0) {
        const QJsonValue usernameVal = docObj.value("username");
        if (usernameVal.isNull() || !usernameVal.isString())
            return;

        userLeft(usernameVal.toString());

    }else if (typeVal.toString().compare("userlist", Qt::CaseInsensitive) == 0) {
        const QJsonValue userlistVal = docObj.value("userlist");
        if (userlistVal.isNull() || !userlistVal.isArray())
            return;

        qDebug() << userlistVal.toVariant().toStringList();
        userListReceived(userlistVal.toVariant().toStringList());

    }
}

void MainWindow::userJoined(const QString &user)
{
    qDebug() << "user add";
    ui->userListWidget->addItem(user);
}

void MainWindow::userLeft(const QString &user)
{
    for (auto aitem : ui->userListWidget->findItems(user, Qt::MatchExactly)) {
        qDebug("remove");
        ui->userListWidget->removeItemWidget(aitem);
        delete aitem;
    }

}

void MainWindow::userListReceived(const QStringList &userlist)
{
    qDebug() << "userList add";
    ui->userListWidget->clear();
    ui->userListWidget->addItems(userlist);
}





void MainWindow::on_sayButton_clicked()
{
    if (!ui->sayLineEdit->text().isEmpty())
        m_chatClient->sendMessage(ui->sayLineEdit->text());
}

