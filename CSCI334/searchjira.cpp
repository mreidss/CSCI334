#include <QProcess>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QByteArray>

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>

#include "Hhomepage.h"
#include "searchjira.h"
#include "ui_searchjira.h"

searchJIRA::searchJIRA(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::searchJIRA)
{
    ui->setupUi(this);
}

searchJIRA::~searchJIRA()
{
    delete ui;
}

void searchJIRA::on_buttonBox_accepted()
{
   /* QString projName = this->ui->projName->text();

    QString curlCommand = getApiJira(projName);
    QString curl = "curl " + curlCommand;
    qDebug() << "curl: " << curl ;

    QString filename = "Jira.json";

    // Runs Curl Command and outputs it into a JSON file
    QProcess process;
    process.setStandardOutputFile(filename);
    process.start(curl);
    process.waitForFinished(); // will wait forever until finished
    //QString jsonOutput(process.readAllStandardOutput());

    QJsonDocument jsonDoc = loadJsonJIRA(filename);
    //QJsonObject jsonObj = jsonDoc.object();

    Hhomepage *home = new Hhomepage(this);
    home->addIssuesToList(jsonDoc);*/
}

// Splits the website into api to retrieve info
QString searchJIRA::getApiJira(QString projName)
{ 
    QString curlCommand;
    curlCommand = "https://jira.atlassian.com//rest/api/2/search?jql=project=%22" + projName + "%22";
    return curlCommand;
}

// Inserts a JSON file into a QJsonDocument
QJsonDocument searchJIRA::loadJsonJIRA(QString fileName)
{
    QFile jsonFile(fileName);
    jsonFile.open(QFile::ReadOnly);
    return QJsonDocument().fromJson(jsonFile.readAll());
}

