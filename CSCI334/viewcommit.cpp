#include "hhomepage.h"
#include "viewcommit.h"
#include "ui_viewcommit.h"

#include <QInputDialog>
#include <QProcess>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QByteArray>

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonArray>

viewCommit::viewCommit(QWidget *parent, QString url) :
    QDialog(parent),
    ui(new Ui::viewCommit)
{
    ui->setupUi(this);

    QString curl = "curl " + url;

    // Runs Curl Command and outputs it into a JSON file
    QProcess process;
    process.setStandardOutputFile("commit.jira");
    process.start(curl);
    process.waitForFinished(); // will wait forever until finished

    printCommitInfo();
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

void viewCommit::printCommitInfo()
{
    QJsonDocument fullFile = loadFile("commit.jira");

    QJsonObject master = fullFile.object();

    // User Name
    QString usrName = master["commit"].toObject()["author"].toObject()["name"].toString();
    qDebug() << "name: " << usrName;

    // html url
    QString htmlUrl = master["html_url"].toString();

    // Message and description
    QString message  = master["commit"].toObject()["message"].toString();

    ui->name->addItem(usrName);
    ui->url->addItem(htmlUrl);
    ui->message->addItem(message);




    QJsonValue files = master.value("files");
    QJsonArray tempFiles = files.toArray();


    // Will be in for loop for many file changes
    QJsonValue tempFiles2 = tempFiles.first();
    QJsonObject filesChanged = tempFiles2.toObject();

    QString test = filesChanged["patch"].toString();

    ui->changes->addItem(test);
}\

QJsonDocument viewCommit::loadFile(QString fileName)
{
    QFile jsonFile(fileName);
    jsonFile.open(QFile::ReadOnly);
    return QJsonDocument().fromJson(jsonFile.readAll());
}
