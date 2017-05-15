/********************************************************************************
** Form generated from reading UI file 'hhomepage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HHOMEPAGE_H
#define UI_HHOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hhomepage
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QListWidget *issue;
    QVBoxLayout *verticalLayout;
    QPushButton *commitButton;
    QPushButton *issuebButton;
    QPushButton *Vissue;
    QPushButton *Vcode;
    QPushButton *search;
    QPushButton *Log_out;
    QListWidget *code;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Hhomepage)
    {
        if (Hhomepage->objectName().isEmpty())
            Hhomepage->setObjectName(QStringLiteral("Hhomepage"));
        Hhomepage->resize(980, 600);
        Hhomepage->setAcceptDrops(false);
        layoutWidget = new QWidget(Hhomepage);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(1, 30, 981, 561));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        issue = new QListWidget(layoutWidget);
        issue->setObjectName(QStringLiteral("issue"));

        horizontalLayout->addWidget(issue);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        commitButton = new QPushButton(layoutWidget);
        commitButton->setObjectName(QStringLiteral("commitButton"));

        verticalLayout->addWidget(commitButton);

        issuebButton = new QPushButton(layoutWidget);
        issuebButton->setObjectName(QStringLiteral("issuebButton"));

        verticalLayout->addWidget(issuebButton);

        Vissue = new QPushButton(layoutWidget);
        Vissue->setObjectName(QStringLiteral("Vissue"));

        verticalLayout->addWidget(Vissue);

        Vcode = new QPushButton(layoutWidget);
        Vcode->setObjectName(QStringLiteral("Vcode"));

        verticalLayout->addWidget(Vcode);

        search = new QPushButton(layoutWidget);
        search->setObjectName(QStringLiteral("search"));

        verticalLayout->addWidget(search);

        Log_out = new QPushButton(layoutWidget);
        Log_out->setObjectName(QStringLiteral("Log_out"));

        verticalLayout->addWidget(Log_out);


        horizontalLayout->addLayout(verticalLayout);

        code = new QListWidget(layoutWidget);
        code->setObjectName(QStringLiteral("code"));

        horizontalLayout->addWidget(code);

        label = new QLabel(Hhomepage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 101, 16));
        label_2 = new QLabel(Hhomepage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(570, 10, 81, 16));

        retranslateUi(Hhomepage);

        QMetaObject::connectSlotsByName(Hhomepage);
    } // setupUi

    void retranslateUi(QDialog *Hhomepage)
    {
        Hhomepage->setWindowTitle(QApplication::translate("Hhomepage", "Dialog", 0));
        commitButton->setText(QApplication::translate("Hhomepage", "Search for commits", 0));
        issuebButton->setText(QApplication::translate("Hhomepage", "Search for JIRA Issues", 0));
        Vissue->setText(QApplication::translate("Hhomepage", "view issue", 0));
        Vcode->setText(QApplication::translate("Hhomepage", "view code", 0));
        search->setText(QApplication::translate("Hhomepage", "search", 0));
        Log_out->setText(QApplication::translate("Hhomepage", "log out", 0));
        label->setText(QApplication::translate("Hhomepage", "Jira Issues", 0));
        label_2->setText(QApplication::translate("Hhomepage", "Github Commits", 0));
    } // retranslateUi

};

namespace Ui {
    class Hhomepage: public Ui_Hhomepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HHOMEPAGE_H
