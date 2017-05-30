#include "log_in.h"
#include "ui_log_in.h"
#include "hhomepage.h"
#include <QtSql>
#include <Qsqlquery>
#include<iostream>


Log_in::Log_in(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Log_in)
{
    ui->setupUi(this);

    if(!connOpen())
    {
        ui->lblresult->setText("failed to open the database!");
    }
    else
        ui->lblresult->setText("Connected...");

}

Log_in::~Log_in()
{
    delete ui;
}

void Log_in::on_Login_clicked()
{

    ui->lblresult -> setText("Valid Username and Password");
    connClose();

    /*Hhomepage * home = new Hhomepage(this);
    this -> hide();
    home ->show();*/

    // Commented this block out to allow me to get to the homepage without having to login for now

    QString Username,Password;
    Username = ui->txtUser -> text();
    Password = ui->txtPass -> text();

    if(!connOpen())
    {
        qDebug()<<"Failed to open the database";
        return;
    }
    connOpen();
    QSqlQuery qry;

    qry.exec("create table account(Username string primary key,""password string,""Email string,""role string)");
    qry.exec("insert into account VALUES('aaaaaa','abcd1234','11@asd.com','admin')");
    qry.exec("insert into account VALUES('bbbbbb','abcd1235','22@wq.com','None')");
    qry.exec("insert into account VALUES('cccccc','abcd1236','12312@qw.com','None')");
    qry.prepare("SELECT Username,Password, Role From account Where Username =\'"+Username + "\' AND Password=\'" + Password + "\'");


    if(qry.exec())
    {
        int count=0;
        while(qry.next())
        {
            count++;
        }
        if(count == 1)
        {
            ui->lblresult -> setText("Valid Username and Password");
            connClose();
            Hhomepage * home = new Hhomepage(this);
            this -> hide();
            home ->show();
        }
        else if(count>1)
        {
            ui->lblresult -> setText("Duplicate Username and Password");
        }
        else if(count <1)
        {
            ui->lblresult -> setText("Username and Password is not correct");

        }
    }
}



void Log_in::on_close_clicked()
{
    close();
}

void Log_in::on_register_2_clicked()
{

    Register * R = new Register(this);
    this -> hide();
    R->show();
}
