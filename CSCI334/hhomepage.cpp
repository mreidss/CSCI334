#include "hhomepage.h"
#include "ui_hhomepage.h"
#include "log_in.h"
#include "search.h"
#include "viewissue.h"
#include "viewcommit.h"
#include "searchcommit.h"
#include "searchjira.h"

#include <QInputDialog>
#include <QProcess>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QByteArray>

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>

QString Hhomepage::gitFileName = "github.json";
QString Hhomepage::JiraFileName = "Jira.json";

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
    //ViewIssue *V = new ViewIssue(this);
    //this ->hide();
    //V ->show();
}

void Hhomepage::on_commitButton_clicked()
{
    QString link = QInputDialog::getText(this, "GitHub Website", "Input a Github Website:");

    QString curlCommand = splitWebsiteGit(link);
    QString curl = "curl " + curlCommand;
    qDebug() << "curl: " << curl ;

    // Runs Curl Command and outputs it into a JSON file
    QProcess process;
    process.setStandardOutputFile(gitFileName);
    process.start(curl);
    process.waitForFinished(); // will wait forever until finished

    addCommitsToList();
}


void Hhomepage::on_issuebButton_clicked()
{
    QString projName = QInputDialog::getText(this, "Jira Project", "Input a JIRA Project:");

    QString curlCommand = getApiJira(projName);
    QString curl = "curl " + curlCommand;
    qDebug() << "curl: " << curl ;

    // Runs Curl Command and outputs it into a JSON file
    QProcess process;
    process.setStandardOutputFile(JiraFileName);
    process.start(curl);
    process.waitForFinished(); // will wait forever until finished

    addIssuesToList();
}

void Hhomepage::addIssuesToList()
{
    QJsonDocument Allissues = loadJson(JiraFileName);

    // Json array of the whole json doc
    QJsonObject JsonObject = Allissues.object();
    QJsonValue temp = JsonObject.value("issues");
    QJsonValue total = JsonObject.value("total");
    QJsonArray array = temp.toArray();
    QJsonValue value;

    // Holds commit information
    QString usrName[30];
    //QString description[30];
    QString id[30];
    QString key[30];
    //QString issueLinks[30];

    if(!array.isEmpty())
    {
        for(int i = 0; i < 30; i++)
        {
            value = array.first();
            QJsonObject master = value.toObject();

            //value = JsonArray.first();
            usrName[i] = master["fields"].toObject()["creator"].toObject()["displayName"].toString();
            //description[i] = master["fields"].toObject()["description"].toString();
            //issueLinks[i] = master["fields"].toObject()["issueLinks"].toString();
            id[i] = master["id"].toString();
            key[i] = master["key"].toString();

            ui->issue->addItem("ID:" + id[i] + "\n" +
                               "User Name: " + usrName[i] + "\n" +
                               "Issue key: " + key[i]
                               );
            ui->issue->addItem("--------------------------------------------------------------------------------------------");

            array.removeFirst();
        }
    }
    else
    {
        ui->issue->addItem("Error: unable to load issues");
    }
}

void Hhomepage::addCommitsToList()
{
    QJsonDocument Allcommits = loadJson(gitFileName);

    // Json array of the whole json doc
    QJsonArray JsonArray = Allcommits.array();
    QJsonValue value;

    // Holds commit information
    QString html_url[30];
    QString message[30];
    QString name[30];
    QString dateCommited[30];

    if(!JsonArray.isEmpty())
    {
        for(int i = 0; i < JsonArray.size(); i++)
        {
            value = JsonArray.first();
            QJsonObject master = value.toObject();

            // Retrieves info of 1 commit
            html_url[i] = master["html_url"].toString();
            message[i] = master["commit"].toObject()["message"].toString();
            name[i] = master["commit"].toObject()["author"].toObject()["name"].toString();
            dateCommited[i] = master["commit"].toObject()["author"].toObject()["date"].toString();

            ui->code->addItem("Name: " + name[i] + "\n" +
                              "Message: " + message[i] + "\n" +
                              "Date Commited: " + dateCommited[i] + "\n" +
                              "Url: " + html_url[i]
                              );
            ui->code->addItem("--------------------------------------------------------------------------------------------");

            JsonArray.removeFirst();
        }
    }
    else{
        ui->code->addItem("Error: Unable to load Commits");
    }
}

// Splits the website into api to retrieve info
QString Hhomepage::splitWebsiteGit(QString link)
{
    QString ownerRepos;
    ownerRepos = link.mid(19); // 19 because that's where the owner and repos name of the website is located
    QString curlCommand;
    curlCommand = "https://api.github.com/repos/" + ownerRepos + "/commits";
    return curlCommand;
}

// Splits the website into api to retrieve info
QString Hhomepage::getApiJira(QString projName)
{
    QString curlCommand;
    curlCommand = "https://issues.apache.org/jira/rest/api/2/search?jql=project=%22" + projName + "%22";
    //  https://issues.apache.org/jira/rest/api/2/search?jql=project=%22OPENNLP%22
    // "https://jira.atlassian.com//rest/api/2/search?jql=project=%22" + projName + "%22";
    return curlCommand;
}

// Inserts a JSON file into a QJsonDocument
QJsonDocument Hhomepage::loadJson(QString fileName)
{
    QFile jsonFile(fileName);
    jsonFile.open(QFile::ReadOnly);
    return QJsonDocument().fromJson(jsonFile.readAll());
}

void Hhomepage::on_issue_itemDoubleClicked(QListWidgetItem *item)
{
    QString temp = item->text();
    QString id = temp.mid(3,8);

    qDebug() << "temp: " << temp;
    qDebug() << "id: " << id;

    ViewIssue *V = new ViewIssue(this, id, JiraFileName);
    this->hide();
    V->show();
}

void Hhomepage::on_code_itemDoubleClicked(QListWidgetItem *item)
{
    QString temp = item->text();
    //QString id = temp.mid(3,8);

    //qDebug() << "temp: " << temp;
    //qDebug() << "id: " << id;

    qDebug() << "test ";

    viewCommit *VC = new viewCommit(this);
    this->hide();
    VC->show();

    qDebug() << "test 2";
}
