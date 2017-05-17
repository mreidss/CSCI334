#include "showcommit.h"
#include "ui_showcommit.h"
#include "viewissue.h"
ShowCommit::ShowCommit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowCommit)
{
    ui->setupUi(this);
}

ShowCommit::~ShowCommit()
{
    delete ui;
}

void ShowCommit::on_Back_clicked()
{
    //ViewIssue *Back = new ViewIssue(this);
    //this ->hide();
    //Back ->show();
}
