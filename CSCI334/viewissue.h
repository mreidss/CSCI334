#ifndef VIEWISSUE_H
#define VIEWISSUE_H

#include <QDialog>

namespace Ui {
class ViewIssue;
}

class ViewIssue : public QDialog
{
    Q_OBJECT

public:
    explicit ViewIssue(QWidget *parent = 0);
    ~ViewIssue();

private slots:
    void on_Back_clicked();

    void on_Show_clicked();

private:
    Ui::ViewIssue *ui;
};

#endif // VIEWISSUE_H
