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

    qDebug() << curl;

    // Runs Curl Command and outputs it into a JSON file
    QProcess process;
    process.setStandardOutputFile("commit.json");
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
    QJsonDocument fullFile = loadFile("commit.json");

    QJsonObject master = fullFile.object();

    // Commit Basic Info
    QString usrName = master["commit"].toObject()["author"].toObject()["name"].toString();
    QString htmlUrl = master["html_url"].toString();
    QString message  = master["commit"].toObject()["message"].toString();
    QString date = master["commit"].toObject()["author"].toObject()["date"].toString();

    ui->name->addItem(usrName);
    ui->url->insert(htmlUrl);
    ui->message->addItem(message);
    ui->date->addItem(date);

    // All records of changes
    QJsonValue files = master.value("files");
    QJsonArray tempFiles = files.toArray();

    int numFilesChanged = tempFiles.size();

    for(int i = 0; i < numFilesChanged; i++)
    {
        QJsonValue tempFiles2 = tempFiles.first();
        QJsonObject filesChanged = tempFiles2.toObject();

        QString fileName = filesChanged["filename"].toString();
        QString changes = filesChanged["patch"].toString();

        ui->changes->addItem("Filename: " + fileName + "\n\n" + changes);

        tempFiles.removeFirst();
    }
}\

QJsonDocument viewCommit::loadFile(QString fileName)
{
    QFile jsonFile(fileName);
    jsonFile.open(QFile::ReadOnly);
    return QJsonDocument().fromJson(jsonFile.readAll());
}
