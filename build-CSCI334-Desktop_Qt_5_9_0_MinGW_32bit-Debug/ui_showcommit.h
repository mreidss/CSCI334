/********************************************************************************
** Form generated from reading UI file 'showcommit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWCOMMIT_H
#define UI_SHOWCOMMIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowCommit
{
public:
    QLabel *label;
    QPushButton *Back;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QListWidget *commitList;
    QListWidget *summary;
    QLabel *label_5;
    QLabel *label_3;
    QListWidget *description;
    QListWidget *key;
    QLabel *label_6;
    QListWidget *id;
    QLabel *label_4;
    QLabel *label_7;
    QListWidget *name;
    QLabel *label_8;

    void setupUi(QDialog *ShowCommit)
    {
        if (ShowCommit->objectName().isEmpty())
            ShowCommit->setObjectName(QStringLiteral("ShowCommit"));
        ShowCommit->resize(1076, 312);
        label = new QLabel(ShowCommit);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 161, 41));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        Back = new QPushButton(ShowCommit);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setGeometry(QRect(350, 270, 261, 21));
        layoutWidget = new QWidget(ShowCommit);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(620, 10, 441, 281));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        commitList = new QListWidget(layoutWidget);
        commitList->setObjectName(QStringLiteral("commitList"));

        verticalLayout->addWidget(commitList);

        summary = new QListWidget(ShowCommit);
        summary->setObjectName(QStringLiteral("summary"));
        summary->setGeometry(QRect(80, 90, 531, 21));
        label_5 = new QLabel(ShowCommit);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(280, 60, 16, 16));
        label_3 = new QLabel(ShowCommit);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 60, 55, 16));
        description = new QListWidget(ShowCommit);
        description->setObjectName(QStringLiteral("description"));
        description->setGeometry(QRect(80, 120, 531, 141));
        description->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        description->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        description->setProperty("isWrapping", QVariant(false));
        description->setWordWrap(true);
        key = new QListWidget(ShowCommit);
        key->setObjectName(QStringLiteral("key"));
        key->setGeometry(QRect(80, 270, 261, 21));
        label_6 = new QLabel(ShowCommit);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 270, 21, 16));
        id = new QListWidget(ShowCommit);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(300, 60, 311, 21));
        label_4 = new QLabel(ShowCommit);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 90, 47, 13));
        label_7 = new QLabel(ShowCommit);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 120, 57, 16));
        name = new QListWidget(ShowCommit);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(80, 60, 191, 21));
        label_8 = new QLabel(ShowCommit);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 30, 61, 16));
        label_8->setFont(font1);

        retranslateUi(ShowCommit);

        QMetaObject::connectSlotsByName(ShowCommit);
    } // setupUi

    void retranslateUi(QDialog *ShowCommit)
    {
        ShowCommit->setWindowTitle(QApplication::translate("ShowCommit", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ShowCommit", "View related commits:", Q_NULLPTR));
        Back->setText(QApplication::translate("ShowCommit", "Back", Q_NULLPTR));
        label_2->setText(QApplication::translate("ShowCommit", "Commit list:", Q_NULLPTR));
        label_5->setText(QApplication::translate("ShowCommit", "ID:", Q_NULLPTR));
        label_3->setText(QApplication::translate("ShowCommit", "User name:", Q_NULLPTR));
        label_6->setText(QApplication::translate("ShowCommit", "key:", Q_NULLPTR));
        label_4->setText(QApplication::translate("ShowCommit", "Summary:", Q_NULLPTR));
        label_7->setText(QApplication::translate("ShowCommit", "Description:", Q_NULLPTR));
        label_8->setText(QApplication::translate("ShowCommit", "issue Info:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShowCommit: public Ui_ShowCommit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWCOMMIT_H
