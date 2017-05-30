/********************************************************************************
** Form generated from reading UI file 'hhomepage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HHOMEPAGE_H
#define UI_HHOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
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
    QPushButton *search;
    QPushButton *Log_out;
    QListWidget *code;
    QLabel *label;
    QLabel *label_2;
    QRadioButton *radioButton;
    QComboBox *comboBox;
    QLabel *label_3;

    void setupUi(QDialog *Hhomepage)
    {
        if (Hhomepage->objectName().isEmpty())
            Hhomepage->setObjectName(QStringLiteral("Hhomepage"));
        Hhomepage->resize(980, 616);
        Hhomepage->setAcceptDrops(false);
        layoutWidget = new QWidget(Hhomepage);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 50, 981, 561));
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
        label->setGeometry(QRect(0, 30, 101, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(Hhomepage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(560, 30, 91, 16));
        label_2->setFont(font);
        radioButton = new QRadioButton(Hhomepage);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(90, 20, 82, 17));
        comboBox = new QComboBox(Hhomepage);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(240, 20, 181, 22));
        label_3 = new QLabel(Hhomepage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 20, 61, 16));

        retranslateUi(Hhomepage);

        QMetaObject::connectSlotsByName(Hhomepage);
    } // setupUi

    void retranslateUi(QDialog *Hhomepage)
    {
        Hhomepage->setWindowTitle(QApplication::translate("Hhomepage", "Dialog", Q_NULLPTR));
        commitButton->setText(QApplication::translate("Hhomepage", "Search for commits", Q_NULLPTR));
        issuebButton->setText(QApplication::translate("Hhomepage", "Search for JIRA Issues", Q_NULLPTR));
        search->setText(QApplication::translate("Hhomepage", "search ID", Q_NULLPTR));
        Log_out->setText(QApplication::translate("Hhomepage", "log out", Q_NULLPTR));
        label->setText(QApplication::translate("Hhomepage", "Jira Issues", Q_NULLPTR));
        label_2->setText(QApplication::translate("Hhomepage", "Github Commits", Q_NULLPTR));
        radioButton->setText(QApplication::translate("Hhomepage", "Resolved?", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Hhomepage", "Key", Q_NULLPTR)
         << QApplication::translate("Hhomepage", "Username", Q_NULLPTR)
         << QApplication::translate("Hhomepage", "Date", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("Hhomepage", "sort Issues:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Hhomepage: public Ui_Hhomepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HHOMEPAGE_H
