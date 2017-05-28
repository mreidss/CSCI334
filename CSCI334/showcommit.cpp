#include "showcommit.h"
#include "ui_showcommit.h"
#include "viewissue.h"

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

QString id1;
QString File1;

ShowCommit::ShowCommit(QWidget *parent, QString issueID, QString JiraFileName) :
    QDialog(parent),
    ui(new Ui::ShowCommit)
{
    ui->setupUi(this);

    id1 = issueID;
    File1 = JiraFileName;


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
           // QJsonValue fieldVal = master.value("fields");
            //QJsonArray fields = fieldVal.toArray;

            //QJsonObject linkObj = fields.toObject();
            //QJsonValue linksVal = linkObj.toValue();
            //QJsonArray links = linksVal.toArray();

            //QString
        }

        issueArray.removeFirst();
    }


}

ShowCommit::~ShowCommit()
{
    delete ui;
}

void ShowCommit::on_Back_clicked()
{
    ViewIssue *Back = new ViewIssue(this, id1, File1);
    this ->hide();
    Back ->show();
}
