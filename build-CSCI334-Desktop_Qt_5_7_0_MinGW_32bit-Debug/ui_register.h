/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QLabel *statu;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *Ok;
    QPushButton *Cancel;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_User;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_Pass;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *txt_PassC;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *txt_Email;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(400, 300);
        statu = new QLabel(Register);
        statu->setObjectName(QStringLiteral("statu"));
        statu->setGeometry(QRect(40, 270, 331, 20));
        widget = new QWidget(Register);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 230, 351, 25));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        Ok = new QPushButton(widget);
        Ok->setObjectName(QStringLiteral("Ok"));

        horizontalLayout_5->addWidget(Ok);

        Cancel = new QPushButton(widget);
        Cancel->setObjectName(QStringLiteral("Cancel"));

        horizontalLayout_5->addWidget(Cancel);

        widget1 = new QWidget(Register);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(32, 10, 351, 211));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        txt_User = new QLineEdit(widget1);
        txt_User->setObjectName(QStringLiteral("txt_User"));

        horizontalLayout->addWidget(txt_User);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        txt_Pass = new QLineEdit(widget1);
        txt_Pass->setObjectName(QStringLiteral("txt_Pass"));
        txt_Pass->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(txt_Pass);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        txt_PassC = new QLineEdit(widget1);
        txt_PassC->setObjectName(QStringLiteral("txt_PassC"));
        txt_PassC->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(txt_PassC);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        txt_Email = new QLineEdit(widget1);
        txt_Email->setObjectName(QStringLiteral("txt_Email"));

        horizontalLayout_4->addWidget(txt_Email);


        verticalLayout->addLayout(horizontalLayout_4);

        label->raise();
        label_2->raise();
        label_3->raise();
        txt_Email->raise();
        txt_User->raise();
        txt_Pass->raise();
        txt_PassC->raise();
        label_4->raise();
        Ok->raise();
        Cancel->raise();
        statu->raise();

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Dialog", 0));
        statu->setText(QApplication::translate("Register", "Status", 0));
        Ok->setText(QApplication::translate("Register", "Ok", 0));
        Cancel->setText(QApplication::translate("Register", "Cancel", 0));
        label->setText(QApplication::translate("Register", "Username:", 0));
        label_2->setText(QApplication::translate("Register", "Password:", 0));
        label_3->setText(QApplication::translate("Register", "ConfirmPassword:", 0));
        label_4->setText(QApplication::translate("Register", "Email:", 0));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
