#ifndef SEARCHCOMMIT_H
#define SEARCHCOMMIT_H

#include <QDialog>
#include <QJsonDocument>

namespace Ui {
class searchCommit;
}

class searchCommit : public QDialog
{
    Q_OBJECT

public:
    explicit searchCommit(QWidget *parent = 0);
    ~searchCommit();

private slots:
    void on_buttonBox_accepted();
    QString splitWebsiteGit(QString);
    QJsonDocument loadJson(QString fileName);

private:
    Ui::searchCommit *ui;
};

#endif // SEARCHCOMMIT_H
