#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHostAddress>
#include "chatclient.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->loginPage);
    m_chatClient = new ChatClient();

    connect(m_chatClient, &ChatClient::connected, this, &MainWindow::connectedToserver);
    connect(m_chatClient, &ChatClient::messageReceived, this, &MainWindow::messageReceived);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginButton_clicked()
{
    m_chatClient->connectToServer(QHostAddress(ui->lineEdit->text()),1967);
}


void MainWindow::on_sayButton_clicked()
{
    if (ui->sayLineEdit->text().isEmpty())
        m_chatClient->sendMessage(ui->sayLineEdit->text());
}


void MainWindow::on_logoutButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->loginPage);

}

void MainWindow::connectedToserver()
{
    ui->stackedWidget->setCurrentWidget(ui->chatPage);
    m_chatClient->sendMessage(ui->lineEdit_2->text(),"login");
}

void MainWindow::messageReceived(const QString &text)
{
    ui->roomTextEdit->append(text);
}

