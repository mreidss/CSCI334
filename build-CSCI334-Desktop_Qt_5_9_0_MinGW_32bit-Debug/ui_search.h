/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Search
{
public:
    QLineEdit *issueKey;
    QLabel *label_3;
    QPushButton *searchIssueID;
    QLabel *label_4;
    QLineEdit *commitSha;
    QPushButton *searchcommitID;
    QPushButton *Cancel;

    void setupUi(QDialog *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName(QStringLiteral("Search"));
        Search->resize(412, 148);
        issueKey = new QLineEdit(Search);
        issueKey->setObjectName(QStringLiteral("issueKey"));
        issueKey->setGeometry(QRect(100, 20, 191, 20));
        label_3 = new QLabel(Search);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 20, 51, 16));
        searchIssueID = new QPushButton(Search);
        searchIssueID->setObjectName(QStringLiteral("searchIssueID"));
        searchIssueID->setGeometry(QRect(300, 20, 101, 23));
        label_4 = new QLabel(Search);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 60, 81, 16));
        commitSha = new QLineEdit(Search);
        commitSha->setObjectName(QStringLiteral("commitSha"));
        commitSha->setGeometry(QRect(100, 60, 191, 20));
        searchcommitID = new QPushButton(Search);
        searchcommitID->setObjectName(QStringLiteral("searchcommitID"));
        searchcommitID->setGeometry(QRect(300, 60, 101, 23));
        Cancel = new QPushButton(Search);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setGeometry(QRect(300, 100, 101, 23));

        retranslateUi(Search);

        QMetaObject::connectSlotsByName(Search);
    } // setupUi

    void retranslateUi(QDialog *Search)
    {
        Search->setWindowTitle(QApplication::translate("Search", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("Search", "Issue Key", Q_NULLPTR));
        searchIssueID->setText(QApplication::translate("Search", "Search Issues", Q_NULLPTR));
        label_4->setText(QApplication::translate("Search", "Commit ID/ sha", Q_NULLPTR));
        searchcommitID->setText(QApplication::translate("Search", "Search Commits", Q_NULLPTR));
        Cancel->setText(QApplication::translate("Search", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
