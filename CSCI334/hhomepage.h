#ifndef HHOMEPAGE_H
#define HHOMEPAGE_H

#include <QDialog>
#include <QListWidgetItem>

namespace Ui {
class Hhomepage;
}

class Hhomepage : public QDialog
{
    Q_OBJECT

public:
    explicit Hhomepage(QWidget *parent = 0);
    ~Hhomepage();

    static QString gitFileName;
    static QString JiraFileName;

    QString splitWebsiteGit(QString);
    QString getApiJira(QString projName);
    QJsonDocument loadJson(QString fileName);

    void addCommitsToList();
    void addIssuesToList();

    void rePrintCommits();
    void rePrintIssues();

private slots:
    void on_Log_out_clicked();

    void on_search_clicked();

    void on_Vissue_clicked();

    void on_commitButton_clicked();

    void on_issuebButton_clicked();

    void on_issue_itemDoubleClicked(QListWidgetItem *item);

    void on_code_itemDoubleClicked(QListWidgetItem *item);

    void on_radioButton_clicked();

private:
    Ui::Hhomepage *ui;
};

#endif // HHOMEPAGE_H
