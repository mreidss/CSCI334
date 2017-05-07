#include <iostream>
#include <QProcess>
#include <QFile>
#include <QTextStream>

#include "searchcommit.h"
#include "ui_searchcommit.h"

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

    // This splits the website into api to retrieve info
    QString ownerRepos;
    ownerRepos = link.mid(19); // 19 because that's where the owner and repos name of the website is located
    QString curlCommand;
    curlCommand = "https://api.github.com/repos/" + ownerRepos + "/commits";
    QString curl = "curl " + curlCommand;

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
}

// This splits the website into api to retrieve info
QString splitWebsiteGit(QString link)
{
    QString ownerRepos;

    ownerRepos = link.mid(19); // 19 because that's where the owner and repos name of the website is located

    QString curlCommand;
    curlCommand = "https://api.github.com/repos/" + ownerRepos + "/commits";

    return curlCommand;
}
