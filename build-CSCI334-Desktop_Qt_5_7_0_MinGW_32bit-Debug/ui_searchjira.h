/********************************************************************************
** Form generated from reading UI file 'searchjira.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHJIRA_H
#define UI_SEARCHJIRA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_searchJIRA
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *projName;

    void setupUi(QDialog *searchJIRA)
    {
        if (searchJIRA->objectName().isEmpty())
            searchJIRA->setObjectName(QStringLiteral("searchJIRA"));
        searchJIRA->resize(390, 86);
        buttonBox = new QDialogButtonBox(searchJIRA);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(290, 20, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(searchJIRA);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 141, 16));
        projName = new QLineEdit(searchJIRA);
        projName->setObjectName(QStringLiteral("projName"));
        projName->setGeometry(QRect(30, 40, 231, 20));

        retranslateUi(searchJIRA);
        QObject::connect(buttonBox, SIGNAL(accepted()), searchJIRA, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), searchJIRA, SLOT(reject()));

        QMetaObject::connectSlotsByName(searchJIRA);
    } // setupUi

    void retranslateUi(QDialog *searchJIRA)
    {
        searchJIRA->setWindowTitle(QApplication::translate("searchJIRA", "Dialog", 0));
        label->setText(QApplication::translate("searchJIRA", "Search JIRA Project Name", 0));
    } // retranslateUi

};

namespace Ui {
    class searchJIRA: public Ui_searchJIRA {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHJIRA_H
