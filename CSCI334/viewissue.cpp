#include "viewissue.h"
#include "ui_viewissue.h"
#include "hhomepage.h"
#include "showcommit.h"

#include <QInputDialog>
#include <QProcess>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QByteArray>
#include <QJsonArray>

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>

QString id;
QString File;

ViewIssue::ViewIssue(QWidget *parent, QString issueID, QString JiraFileName) :
    QDialog(parent),
    ui(new Ui::ViewIssue)
{
    ui->setupUi(this);

    id = issueID;
    File = JiraFileName;

    QFile jsonFile(JiraFileName);
    jsonFile.open(QFile::ReadOnly);

    QJsonDocument Allissues = QJsonDocument().fromJson(jsonFile.readAll());

    // Json array of the whole json doc
    QJsonObject JsonObject = Allissues.object();
    QJsonValue temp = JsonObject.value("issues");
    QJsonArray issueArray = temp.toArray();
    QJsonValue value;

    QJsonObject thisIssue;

    for(int i = 0; i < 30; i++)
    {
        value = issueArray.first();
        QJsonObject master = value.toObject();

        if(master["id"].toString() == issueID)
        {
            thisIssue = master;
        }

        issueArray.removeFirst();
    }

    QString Username = thisIssue["fields"].toObject()["creator"].toObject()["displayName"].toString();
    QString description = thisIssue["fields"].toObject()["description"].toString();
    QString type;
    QString id = thisIssue["id"].toString();
    QString key = thisIssue["key"].toString();

    ui->name->addItem(Username);
    ui->description->addItem(description);
    //ui->type->addItem(type);
    ui->id->addItem(id);
    ui->key->addItem(key);
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

    BA->addCommitsToList();
    BA->addIssuesToList();
}

void ViewIssue::on_Show_clicked()
{
    ShowCommit *S = new ShowCommit(this, id, File);
    this->hide();
    S->show();
}
