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
    void addIssuesToList(QJsonDocument issues);

private slots:
    void on_Log_out_clicked();

    void on_search_clicked();

    void on_Vissue_clicked();

    void on_commitButton_clicked();

    void on_issuebButton_clicked();

    QString splitWebsiteGit(QString);
    QString getApiJira(QString projName);
    QJsonDocument loadJson(QString fileName);

    void addCommitsToList(QJsonDocument commits);



    void on_issue_doubleClicked(const QModelIndex &index);
    void on_issue_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::Hhomepage *ui;
};

#endif // HHOMEPAGE_H
