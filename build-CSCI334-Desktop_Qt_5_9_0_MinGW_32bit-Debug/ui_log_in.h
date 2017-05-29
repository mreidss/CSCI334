/********************************************************************************
** Form generated from reading UI file 'log_in.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_IN_H
#define UI_LOG_IN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Log_in
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_4;
    QLabel *lblresult;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Login;
    QPushButton *register_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *txtUser;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *txtPass;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Log_in)
    {
        if (Log_in->objectName().isEmpty())
            Log_in->setObjectName(QStringLiteral("Log_in"));
        Log_in->resize(365, 227);
        centralWidget = new QWidget(Log_in);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(220, 90, 81, 51));
        lblresult = new QLabel(centralWidget);
        lblresult->setObjectName(QStringLiteral("lblresult"));
        lblresult->setGeometry(QRect(30, 90, 181, 61));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(220, 20, 77, 61));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Login = new QPushButton(widget);
        Login->setObjectName(QStringLiteral("Login"));

        verticalLayout_2->addWidget(Login);

        register_2 = new QPushButton(widget);
        register_2->setObjectName(QStringLiteral("register_2"));

        verticalLayout_2->addWidget(register_2);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 20, 191, 24));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        txtUser = new QLineEdit(widget1);
        txtUser->setObjectName(QStringLiteral("txtUser"));

        horizontalLayout_2->addWidget(txtUser);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(20, 60, 191, 22));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        txtPass = new QLineEdit(widget2);
        txtPass->setObjectName(QStringLiteral("txtPass"));
        txtPass->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(txtPass);

        Log_in->setCentralWidget(centralWidget);
        label->raise();
        txtUser->raise();
        label_2->raise();
        txtPass->raise();
        lblresult->raise();
        lblresult->raise();
        lblresult->raise();
        Login->raise();
        register_2->raise();
        pushButton_4->raise();
        label_2->raise();
        txtPass->raise();
        menuBar = new QMenuBar(Log_in);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 365, 21));
        Log_in->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Log_in);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Log_in->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Log_in);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Log_in->setStatusBar(statusBar);

        retranslateUi(Log_in);

        QMetaObject::connectSlotsByName(Log_in);
    } // setupUi

    void retranslateUi(QMainWindow *Log_in)
    {
        Log_in->setWindowTitle(QApplication::translate("Log_in", "Log_in", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Log_in", "Exit", Q_NULLPTR));
        lblresult->setText(QApplication::translate("Log_in", "[+]Status", Q_NULLPTR));
        Login->setText(QApplication::translate("Log_in", "Login", Q_NULLPTR));
        register_2->setText(QApplication::translate("Log_in", "Register", Q_NULLPTR));
        label->setText(QApplication::translate("Log_in", "Username:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Log_in", "Password:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Log_in: public Ui_Log_in {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_IN_H
