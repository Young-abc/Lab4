/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *chatPage;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QTextEdit *roomTextEdit;
    QListWidget *userListWidget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *sayLineEdit;
    QPushButton *sayButton;
    QPushButton *logoutButton;
    QWidget *loginPage;
    QGridLayout *gridLayout_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *username;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer;
    QPushButton *loginButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(654, 391);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        chatPage = new QWidget();
        chatPage->setObjectName("chatPage");
        gridLayout = new QGridLayout(chatPage);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        roomTextEdit = new QTextEdit(chatPage);
        roomTextEdit->setObjectName("roomTextEdit");

        horizontalLayout->addWidget(roomTextEdit);

        userListWidget = new QListWidget(chatPage);
        userListWidget->setObjectName("userListWidget");
        userListWidget->setMinimumSize(QSize(120, 0));
        userListWidget->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(userListWidget);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        sayLineEdit = new QLineEdit(chatPage);
        sayLineEdit->setObjectName("sayLineEdit");

        horizontalLayout_2->addWidget(sayLineEdit);

        sayButton = new QPushButton(chatPage);
        sayButton->setObjectName("sayButton");

        horizontalLayout_2->addWidget(sayButton);

        logoutButton = new QPushButton(chatPage);
        logoutButton->setObjectName("logoutButton");

        horizontalLayout_2->addWidget(logoutButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        stackedWidget->addWidget(chatPage);
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        gridLayout_4 = new QGridLayout(loginPage);
        gridLayout_4->setObjectName("gridLayout_4");
        frame = new QFrame(loginPage);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        username = new QLabel(frame);
        username->setObjectName("username");

        gridLayout_2->addWidget(username, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout_2->addWidget(lineEdit_2, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        loginButton = new QPushButton(frame);
        loginButton->setObjectName("loginButton");

        verticalLayout_2->addWidget(loginButton);


        gridLayout_4->addWidget(frame, 1, 1, 2, 1);

        horizontalSpacer_2 = new QSpacerItem(160, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 1, 2, 2, 1);

        horizontalSpacer = new QSpacerItem(171, 132, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 0, 2, 1);

        verticalSpacer_2 = new QSpacerItem(607, 58, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 3, 0, 1, 3);

        verticalSpacer_3 = new QSpacerItem(607, 59, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 0, 0, 1, 3);

        stackedWidget->addWidget(loginPage);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 654, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\201\212\345\244\251\345\256\244\345\256\242\346\210\267\347\253\257", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "yang\350\201\212\345\244\251\345\256\244", nullptr));
        sayButton->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        logoutButton->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200\357\274\232", nullptr));
        username->setText(QCoreApplication::translate("MainWindow", "\346\230\265\347\247\260\357\274\232", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225\350\201\212\345\244\251\345\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
