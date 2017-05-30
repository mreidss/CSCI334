#include "search.h"
#include "ui_search.h"
#include "hhomepage.h"
#include "viewissue.h"
#include "viewcommit.h"

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

Search::Search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Search)
{
    ui->setupUi(this);
}

Search::~Search()
{
    delete ui;
}

void Search::on_OK_clicked()
{
    Hhomepage *B = new Hhomepage;
    this->hide();
    B->show();
}

void Search::on_Cancel_clicked()
{
    Hhomepage *BA = new Hhomepage;
    this->hide();
    BA->show();

    // Repopulates the homepage with the files
    BA->addCommitsToList();
    BA->addIssuesToList();
}

void Search::on_searchIssueID_clicked()
{
    QString key = ui->issueKey->text();

    ViewIssue *V = new ViewIssue(this, key, "Jira.json");
    this->hide();
    V->show();
}

void Search::on_searchcommitID_clicked()
{
    QString commitSha = ui->commitSha->text();


    QFile commits("github.json");
    commits.open(QFile::ReadOnly);

    QJsonDocument Allcommits = QJsonDocument().fromJson(commits.readAll());

    // Json array of the whole json doc
    QJsonArray JsonArray = Allcommits.array();
    QJsonValue value;

    // Holds commit information
    QString sha;

    for(int i = 0; i < JsonArray.size(); i++)
    {
        value = JsonArray.first();
        QJsonObject master = value.toObject();

        sha = master["sha"].toString();

        qDebug() << "Commitsha: " << commitSha;
        qDebug() << "sha: " << sha;

        if(commitSha == sha)
        {
            QString url = master["url"].toString();

            qDebug() << "url: " << url;

            viewCommit *VC = new viewCommit(this, url);
            this->hide();
            VC->show();

            break;
        }
        JsonArray.removeFirst();
    }
}
