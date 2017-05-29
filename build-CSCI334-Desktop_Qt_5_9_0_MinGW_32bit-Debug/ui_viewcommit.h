/********************************************************************************
** Form generated from reading UI file 'viewcommit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWCOMMIT_H
#define UI_VIEWCOMMIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewCommit
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QListWidget *listWidget_3;
    QListWidget *listWidget_4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Show;
    QPushButton *Back;

    void setupUi(QWidget *viewCommit)
    {
        if (viewCommit->objectName().isEmpty())
            viewCommit->setObjectName(QStringLiteral("viewCommit"));
        viewCommit->resize(649, 320);
        label = new QLabel(viewCommit);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 121, 41));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setTextFormat(Qt::AutoText);
        label->setMargin(4);
        label_2 = new QLabel(viewCommit);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 80, 61, 16));
        label_3 = new QLabel(viewCommit);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 110, 71, 16));
        label_4 = new QLabel(viewCommit);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(360, 80, 47, 13));
        label_5 = new QLabel(viewCommit);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 250, 61, 16));
        listWidget = new QListWidget(viewCommit);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(100, 80, 241, 21));
        listWidget_2 = new QListWidget(viewCommit);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(380, 80, 241, 21));
        listWidget_3 = new QListWidget(viewCommit);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setGeometry(QRect(100, 110, 521, 131));
        listWidget_4 = new QListWidget(viewCommit);
        listWidget_4->setObjectName(QStringLiteral("listWidget_4"));
        listWidget_4->setGeometry(QRect(100, 250, 201, 20));
        layoutWidget = new QWidget(viewCommit);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(310, 240, 311, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Show = new QPushButton(layoutWidget);
        Show->setObjectName(QStringLiteral("Show"));

        horizontalLayout->addWidget(Show);

        Back = new QPushButton(layoutWidget);
        Back->setObjectName(QStringLiteral("Back"));

        horizontalLayout->addWidget(Back);


        retranslateUi(viewCommit);

        QMetaObject::connectSlotsByName(viewCommit);
    } // setupUi

    void retranslateUi(QWidget *viewCommit)
    {
        viewCommit->setWindowTitle(QApplication::translate("viewCommit", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("viewCommit", "View Commit", Q_NULLPTR));
        label_2->setText(QApplication::translate("viewCommit", "User Name:", Q_NULLPTR));
        label_3->setText(QApplication::translate("viewCommit", "Description:", Q_NULLPTR));
        label_4->setText(QApplication::translate("viewCommit", "ID:", Q_NULLPTR));
        label_5->setText(QApplication::translate("viewCommit", "key:", Q_NULLPTR));
        Show->setText(QApplication::translate("viewCommit", "ShowCommits", Q_NULLPTR));
        Back->setText(QApplication::translate("viewCommit", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class viewCommit: public Ui_viewCommit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWCOMMIT_H
