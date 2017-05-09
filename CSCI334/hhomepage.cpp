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
    this->hide();
    s->show();
}

void Hhomepage::on_issuebButton_clicked()
{

}

void Hhomepage::addCommitsToList(QJsonDocument Allcommits)
{
    this->show();

    // Json array of the whole json doc
    QJsonArray JsonArray = Allcommits.array();
    QJsonValue value;

    // Holds commit information
    QString html_url[30];
    QString message[30];
    QString name[30];
    QString dateCommited[30];

    for(int i = 0; i < JsonArray.size(); i++)
    {
        value = JsonArray.first();
        QJsonObject master = value.toObject();

        // Retrieves info of 1 commit
        html_url[i] = master["html_url"].toString();
        message[i] = master["commit"].toObject()["message"].toString();
        name[i] = master["commit"].toObject()["author"].toObject()["name"].toString();
        dateCommited[i] = master["commit"].toObject()["author"].toObject()["date"].toString();

        //ui->code = new QListWidget();

        ui->code->addItem("Name: " + name[i]);
        ui->code->addItem("Message: " + message[i]);
        ui->code->addItem("Date Commited: " + dateCommited[i]);
        ui->code->addItem("Url: " + html_url[i]);
        ui->code->addItem("--------------");

        qDebug() << "name: " << name[i];
        qDebug() << "message: " << message[i];
        qDebug() << "dateCommited: " << dateCommited[i];
        qDebug() << "html_url: " << html_url[i];

        JsonArray.removeFirst();
    }
}
