#include "search.h"
#include "ui_search.h"
#include "hhomepage.h"
Search::Search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Search)
{
    ui->setupUi(this);
}

Search::~Search()
{
    delete ui;
}

void Search::on_OK_clicked()
{
    Hhomepage *B = new Hhomepage;
    this->hide();
    B->show();
}

void Search::on_Cancel_clicked()
{
    Hhomepage *BA = new Hhomepage;
    this->hide();
    BA->show();
}
