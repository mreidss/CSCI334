#include "hhomepage.h"
#include "ui_hhomepage.h"
#include "log_in.h"
#include "search.h"
#include "viewissue.h"
#include "searchcommit.h"

Hhomepage::Hhomepage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Hhomepage)
{
    ui->setupUi(this);
}

Hhomepage::~Hhomepage()
{
    delete ui;
}

void Hhomepage::on_Log_out_clicked()
{
    Log_in * homepage = new Log_in(this);
        this -> hide();
        homepage -> show();
}

void Hhomepage::on_search_clicked()
{
    Search * S = new Search(this);
    this -> hide();
    S ->show();
}

void Hhomepage::on_Vissue_clicked()
{
    ViewIssue *V = new ViewIssue(this);
    this ->hide();
    V ->show();
}

void Hhomepage::on_commitButton_clicked()
{
    searchCommit *s = new searchCommit(this);
    s->show();

    /*
        QString link = this->ui->gitLink->text();

        QString curl = "curl https://api.github.com/repos/apache/cordova-js/commits";

        QProcess process;
        process.start(curl);
        process.waitForFinished(-1); // will wait forever until finished


        QString temp = process.readAllStandardOutput();

        // Opens a file and saves contents of command response in the file
        QString filename = "commits.txt";
        QFile file(filename);
        if ( file.open(QIODevice::ReadWrite) )
        {
            QTextStream stream( &file );
            stream << temp << endl;
        }
    */
}
