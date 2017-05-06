#ifndef SHOWCOMMIT_H
#define SHOWCOMMIT_H

#include <QDialog>

namespace Ui {
class ShowCommit;
}

class ShowCommit : public QDialog
{
    Q_OBJECT

public:
    explicit ShowCommit(QWidget *parent = 0);
    ~ShowCommit();

private slots:
    void on_Back_clicked();

private:
    Ui::ShowCommit *ui;
};

#endif // SHOWCOMMIT_H
