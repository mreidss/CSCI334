#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>
#include "log_in.h"

namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:

    explicit Register(QWidget *parent = 0);
    ~Register();

private slots:
    void on_Ok_clicked();

    void on_Cancel_clicked();

private:
    Ui::Register *ui;
};

#endif // REGISTER_H
