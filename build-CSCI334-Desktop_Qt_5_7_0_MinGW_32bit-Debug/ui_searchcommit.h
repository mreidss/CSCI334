/********************************************************************************
** Form generated from reading UI file 'searchcommit.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHCOMMIT_H
#define UI_SEARCHCOMMIT_H

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

class Ui_searchCommit
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *gitWebsite;
    QLabel *label;

    void setupUi(QDialog *searchCommit)
    {
        if (searchCommit->objectName().isEmpty())
            searchCommit->setObjectName(QStringLiteral("searchCommit"));
        searchCommit->resize(343, 108);
        buttonBox = new QDialogButtonBox(searchCommit);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(250, 20, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        gitWebsite = new QLineEdit(searchCommit);
        gitWebsite->setObjectName(QStringLiteral("gitWebsite"));
        gitWebsite->setGeometry(QRect(20, 50, 201, 20));
        label = new QLabel(searchCommit);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 121, 16));

        retranslateUi(searchCommit);
        QObject::connect(buttonBox, SIGNAL(accepted()), searchCommit, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), searchCommit, SLOT(reject()));

        QMetaObject::connectSlotsByName(searchCommit);
    } // setupUi

    void retranslateUi(QDialog *searchCommit)
    {
        searchCommit->setWindowTitle(QApplication::translate("searchCommit", "Dialog", 0));
        label->setText(QApplication::translate("searchCommit", "Git Repository Website", 0));
    } // retranslateUi

};

namespace Ui {
    class searchCommit: public Ui_searchCommit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHCOMMIT_H
