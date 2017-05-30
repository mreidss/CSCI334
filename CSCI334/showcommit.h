#ifndef SHOWCOMMIT_H
#define SHOWCOMMIT_H

#include <QDialog>
#include <QListWidgetItem>

namespace Ui {
class ShowCommit;
}

class ShowCommit : public QDialog
{
    Q_OBJECT

public:
    explicit ShowCommit(QWidget *parent, QString key, QString JiraFileName);
    ~ShowCommit();

private slots:
    void on_Back_clicked();

    QJsonObject getIssue(QString filename);

    void on_commitList_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::ShowCommit *ui;
};

#endif // SHOWCOMMIT_H
