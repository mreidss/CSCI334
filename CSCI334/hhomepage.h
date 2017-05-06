#ifndef HHOMEPAGE_H
#define HHOMEPAGE_H

#include <QDialog>

namespace Ui {
class Hhomepage;
}

class Hhomepage : public QDialog
{
    Q_OBJECT

public:
    explicit Hhomepage(QWidget *parent = 0);
    ~Hhomepage();

private slots:
    void on_Log_out_clicked();

    void on_search_clicked();

    void on_Vissue_clicked();

private:
    Ui::Hhomepage *ui;
};

#endif // HHOMEPAGE_H
