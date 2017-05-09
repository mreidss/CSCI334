#include <QProcess>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QByteArray>

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>

#include "searchcommit.h"
#include "ui_searchcommit.h"
#include "Hhomepage.h"

searchCommit::searchCommit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::searchCommit)
{
    ui->setupUi(this);
}

searchCommit::~searchCommit()
{
    delete ui;
}

void searchCommit::on_buttonBox_accepted()
{
    QString link = this->ui->gitWebsite->text();

    QString curlCommand = splitWebsiteGit(link);
    QString curl = "curl " + curlCommand;
    qDebug() << "curl: " << curl ;

    QString filename = "tempJson.json";

    // Runs Curl Command and outputs it into a JSON file
    QProcess process;
    process.setStandardOutputFile(filename);
    process.start(curl);
    process.waitForFinished(); // will wait forever until finished
    //QString jsonOutput(process.readAllStandardOutput());


    QJsonDocument jsonDoc = loadJson(filename);
    //QJsonObject jsonObj = jsonDoc.object();

    Hhomepage *home = new Hhomepage(this);
    home->addCommitsToList(jsonDoc);
}


// Splits the website into api to retrieve info
QString searchCommit::splitWebsiteGit(QString link)
{
    QString ownerRepos;
    ownerRepos = link.mid(19); // 19 because that's where the owner and repos name of the website is located
    QString curlCommand;
    curlCommand = "https://api.github.com/repos/" + ownerRepos + "/commits";
    return curlCommand;
}

// Inserts a JSON file into a QJsonDocument
QJsonDocument searchCommit::loadJson(QString fileName)
{
    QFile jsonFile(fileName);
    jsonFile.open(QFile::ReadOnly);
    return QJsonDocument().fromJson(jsonFile.readAll());
}

