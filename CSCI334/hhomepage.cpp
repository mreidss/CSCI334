#include "hhomepage.h"
#include "ui_hhomepage.h"
#include "log_in.h"
#include "search.h"
#include "viewissue.h"
#include "searchcommit.h"
#include "searchjira.h"

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
    searchJIRA *j = new searchJIRA(this);
    this->hide();
    j->show();
}

void Hhomepage::addIssuesToList(QJsonDocument Allissues)
{
    this->show();

    // Json array of the whole json doc
    QJsonObject JsonObject = Allissues.object();
    QJsonValue temp = JsonObject.value("issues");
    QJsonValue total = JsonObject.value("total");
    QJsonArray array = temp.toArray();
    QJsonValue value;

    // Holds commit information
    QString usrName[30];
    QString description[30];
    QString id[30];
    QString key[30];

    for(int i = 0; i < 30; i++)
    {
        value = array.first();
        QJsonObject master = value.toObject();

        //value = JsonArray.first();
        usrName[i] = master["fields"].toObject()["creator"].toObject()["displayName"].toString();
        description[i] = master["fields"].toObject()["description"].toString();
        id[i] = master["id"].toString();
        key[i] = master["key"].toString();

        ui->issue->addItem("User Name: " + usrName[i]);
        ui->issue->addItem("Issue ID: " + id[i]);
        ui->issue->addItem("Issue key: " + key[i]);
        ui->issue->addItem("Description: " + description[i]);
        ui->issue->addItem("--------------------------------------------------------------------------------------------");

        qDebug() << "name: " << usrName[i];
        qDebug() << "description: " << description[i];
        qDebug() << "id: " << id[i];
        qDebug() << "key: " << key[i];

        array.removeFirst();
    }
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
        ui->code->addItem("--------------------------------------------------------------------------------------------");

        qDebug() << "name: " << name[i];
        qDebug() << "message: " << message[i];
        qDebug() << "dateCommited: " << dateCommited[i];
        qDebug() << "html_url: " << html_url[i];

        JsonArray.removeFirst();
    }
}
