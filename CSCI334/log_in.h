#ifndef LOG_IN_H
#define LOG_IN_H

#include <QMainWindow>
#include"register.h"
#include<QtSql>
namespace Ui {
class Log_in;
}

class Log_in : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase db;
    void connClose()
    {
        db.close();
        db.removeDatabase(QSqlDatabase::defaultConnection);
    }

    bool connOpen()
    {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("C:/CSCI334.db");
        db.open();
        if(!db.isOpen())
        {
            qDebug()<<("failed to open the database!");
            return false;
        }
        else
        {
            qDebug()<<("Connected...");
            return true;
        }
    }

public:
    explicit Log_in(QWidget *parent = 0);
    ~Log_in();

private slots:
    void on_Login_clicked();

    void on_close_clicked();

    void on_register_2_clicked();

private:
    Ui::Log_in *ui;
};

#endif // LOG_IN_H
