/********************************************************************************
** Form generated from reading UI file 'viewissue.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewIssue
{
public:
    QLabel *label;
    QListWidget *name;
    QListWidget *description;
    QListWidget *id;
    QListWidget *key;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Show;
    QPushButton *Back;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_4;
    QListWidget *summary;

    void setupUi(QDialog *ViewIssue)
    {
        if (ViewIssue->objectName().isEmpty())
            ViewIssue->setObjectName(QStringLiteral("ViewIssue"));
        ViewIssue->resize(649, 366);
        label = new QLabel(ViewIssue);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 231, 51));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAutoFillBackground(true);
        label->setIndent(20);
        name = new QListWidget(ViewIssue);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(90, 90, 191, 21));
        description = new QListWidget(ViewIssue);
        description->setObjectName(QStringLiteral("description"));
        description->setGeometry(QRect(90, 150, 531, 141));
        description->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        description->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        description->setProperty("isWrapping", QVariant(false));
        description->setWordWrap(true);
        id = new QListWidget(ViewIssue);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(310, 90, 311, 21));
        key = new QListWidget(ViewIssue);
        key->setObjectName(QStringLiteral("key"));
        key->setGeometry(QRect(90, 310, 201, 21));
        layoutWidget = new QWidget(ViewIssue);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(310, 300, 311, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Show = new QPushButton(layoutWidget);
        Show->setObjectName(QStringLiteral("Show"));

        horizontalLayout->addWidget(Show);

        Back = new QPushButton(layoutWidget);
        Back->setObjectName(QStringLiteral("Back"));

        horizontalLayout->addWidget(Back);

        label_2 = new QLabel(ViewIssue);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 90, 55, 16));
        label_5 = new QLabel(ViewIssue);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(290, 90, 16, 16));
        label_3 = new QLabel(ViewIssue);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 150, 57, 16));
        label_6 = new QLabel(ViewIssue);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 310, 21, 16));
        label_4 = new QLabel(ViewIssue);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 120, 47, 13));
        summary = new QListWidget(ViewIssue);
        summary->setObjectName(QStringLiteral("summary"));
        summary->setGeometry(QRect(90, 120, 531, 21));
        label_2->raise();
        label_5->raise();
        label_3->raise();
        label_6->raise();
        label->raise();
        name->raise();
        description->raise();
        id->raise();
        key->raise();
        layoutWidget->raise();
        label_4->raise();
        summary->raise();

        retranslateUi(ViewIssue);

        QMetaObject::connectSlotsByName(ViewIssue);
    } // setupUi

    void retranslateUi(QDialog *ViewIssue)
    {
        ViewIssue->setWindowTitle(QApplication::translate("ViewIssue", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ViewIssue", "View Issue", Q_NULLPTR));
        Show->setText(QApplication::translate("ViewIssue", "ShowCommits", Q_NULLPTR));
        Back->setText(QApplication::translate("ViewIssue", "Back", Q_NULLPTR));
        label_2->setText(QApplication::translate("ViewIssue", "User name:", Q_NULLPTR));
        label_5->setText(QApplication::translate("ViewIssue", "ID:", Q_NULLPTR));
        label_3->setText(QApplication::translate("ViewIssue", "Description:", Q_NULLPTR));
        label_6->setText(QApplication::translate("ViewIssue", "key:", Q_NULLPTR));
        label_4->setText(QApplication::translate("ViewIssue", "Summary:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ViewIssue: public Ui_ViewIssue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWISSUE_H
