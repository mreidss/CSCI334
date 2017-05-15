/********************************************************************************
** Form generated from reading UI file 'viewissue.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWISSUE_H
#define UI_VIEWISSUE_H

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

class Ui_ViewIssue
{
public:
    QLabel *label;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QListWidget *listWidget_3;
    QListWidget *listWidget_4;
    QListWidget *listWidget_5;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *Show;
    QPushButton *Back;

    void setupUi(QDialog *ViewIssue)
    {
        if (ViewIssue->objectName().isEmpty())
            ViewIssue->setObjectName(QStringLiteral("ViewIssue"));
        ViewIssue->resize(299, 283);
        label = new QLabel(ViewIssue);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 91, 31));
        listWidget = new QListWidget(ViewIssue);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(90, 60, 191, 21));
        listWidget_2 = new QListWidget(ViewIssue);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(90, 90, 191, 21));
        listWidget_3 = new QListWidget(ViewIssue);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setGeometry(QRect(90, 120, 191, 21));
        listWidget_4 = new QListWidget(ViewIssue);
        listWidget_4->setObjectName(QStringLiteral("listWidget_4"));
        listWidget_4->setGeometry(QRect(90, 150, 191, 21));
        listWidget_5 = new QListWidget(ViewIssue);
        listWidget_5->setObjectName(QStringLiteral("listWidget_5"));
        listWidget_5->setGeometry(QRect(90, 180, 191, 21));
        widget = new QWidget(ViewIssue);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 61, 61, 141));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        widget1 = new QWidget(ViewIssue);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 230, 261, 25));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Show = new QPushButton(widget1);
        Show->setObjectName(QStringLiteral("Show"));

        horizontalLayout->addWidget(Show);

        Back = new QPushButton(widget1);
        Back->setObjectName(QStringLiteral("Back"));

        horizontalLayout->addWidget(Back);


        retranslateUi(ViewIssue);

        QMetaObject::connectSlotsByName(ViewIssue);
    } // setupUi

    void retranslateUi(QDialog *ViewIssue)
    {
        ViewIssue->setWindowTitle(QApplication::translate("ViewIssue", "Dialog", 0));
        label->setText(QApplication::translate("ViewIssue", "View Issue", 0));
        label_2->setText(QApplication::translate("ViewIssue", "Issue name:", 0));
        label_3->setText(QApplication::translate("ViewIssue", "Description:", 0));
        label_4->setText(QApplication::translate("ViewIssue", "Type:", 0));
        label_5->setText(QApplication::translate("ViewIssue", "Status:", 0));
        label_6->setText(QApplication::translate("ViewIssue", "Resolution:", 0));
        Show->setText(QApplication::translate("ViewIssue", "ShowCommits", 0));
        Back->setText(QApplication::translate("ViewIssue", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewIssue: public Ui_ViewIssue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWISSUE_H
