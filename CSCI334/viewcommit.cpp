#include "hhomepage.h"
#include "viewcommit.h"
#include "ui_viewcommit.h"

viewCommit::viewCommit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewCommit)
{
    ui->setupUi(this);
}

viewCommit::~viewCommit()
{
    delete ui;
}

void viewCommit::on_Back_clicked()
{
    Hhomepage *BA = new Hhomepage(this);
    this->hide();
    BA->show();

    BA->addCommitsToList();
    BA->addIssuesToList();
}
