#ifndef VIEWCOMMIT_H
#define VIEWCOMMIT_H

#include <QDialog>

namespace Ui {
class viewCommit;
}

class viewCommit : public QDialog
{
    Q_OBJECT

public:
    explicit viewCommit(QWidget *parent, QString url);
    ~viewCommit();

    void printCommitInfo();
    QJsonDocument loadFile(QString fileName);

private slots:
    void on_Back_clicked();

private:
    Ui::viewCommit *ui;
};

#endif // VIEWCOMMIT_H
