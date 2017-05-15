/********************************************************************************
** Form generated from reading UI file 'showcommit.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
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
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowCommit
{
public:
    QLabel *label;
    QPushButton *Back;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QListView *listView;

    void setupUi(QDialog *ShowCommit)
    {
        if (ShowCommit->objectName().isEmpty())
            ShowCommit->setObjectName(QStringLiteral("ShowCommit"));
        ShowCommit->resize(400, 300);
        label = new QLabel(ShowCommit);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 141, 31));
        Back = new QPushButton(ShowCommit);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setGeometry(QRect(300, 30, 75, 23));
        widget = new QWidget(ShowCommit);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 60, 351, 231));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        listView = new QListView(widget);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);


        retranslateUi(ShowCommit);

        QMetaObject::connectSlotsByName(ShowCommit);
    } // setupUi

    void retranslateUi(QDialog *ShowCommit)
    {
        ShowCommit->setWindowTitle(QApplication::translate("ShowCommit", "Dialog", 0));
        label->setText(QApplication::translate("ShowCommit", "View related commits:", 0));
        Back->setText(QApplication::translate("ShowCommit", "Back", 0));
        label_2->setText(QApplication::translate("ShowCommit", "Commit list:", 0));
    } // retranslateUi

};

namespace Ui {
    class ShowCommit: public Ui_ShowCommit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWCOMMIT_H
