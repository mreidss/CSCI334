#include "register.h"
#include "ui_register.h"
#include<QMessageBox>
#include<iostream>
#include"log_in.h"




Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    Log_in conn;
    if(!conn.connOpen())
    {
        ui->statu->setText("failed to open the database!");
    }
    else
        ui->statu->setText("Connected...");
}

Register::~Register()
{
    delete ui;
}

void Register::on_Ok_clicked()
{
    Log_in conn;
    QString Username,Password,Email,role;
    Username = ui->txt_User -> text();
    Password = ui->txt_Pass -> text();
    Email = ui ->txt_Email ->text();
    role = "None";
    if(!conn.connOpen())
    {
        qDebug()<<"Failed to open the database";
        return;
    }
    conn.connOpen();

    QSqlQuery qry;
    qry.prepare("insert into account (Username,password,Email,role) values('"+Username+"','"+Password+"','"+Email+"','"+role+"')");

    if(qry.exec())
    {
       QMessageBox::information(this,tr("Save"),tr("Create success"));
       conn.connClose();
       Log_in * back = new Log_in(this);
       this -> hide();
       back ->show();
    }
    else
    {
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }

}

void Register::on_Cancel_clicked()
{

    Log_in * back = new Log_in(this);
    this -> hide();
    back ->show();

}
