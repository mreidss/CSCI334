#include "viewissue.h"
#include "ui_viewissue.h"
#include "hhomepage.h"
#include "showcommit.h"

ViewIssue::ViewIssue(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewIssue)
{
    ui->setupUi(this);
}

ViewIssue::~ViewIssue()
{
    delete ui;
}

void ViewIssue::on_Back_clicked()
{
    Hhomepage *BA = new Hhomepage(this);
    this->hide();
    BA->show();
}

void ViewIssue::on_Show_clicked()
{
    ShowCommit *S = new ShowCommit(this);
    this->hide();
    S->show();
}
