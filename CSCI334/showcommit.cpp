#include "showcommit.h"
#include "ui_showcommit.h"
#include "viewissue.h"
#include "viewcommit.h"

#include <QListWidgetItem>
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

#include <QMessageBox>

QString key1;
QString File1;

// Shows commits that relate to a specific issue
ShowCommit::ShowCommit(QWidget *parent, QString key, QString JiraFileName) :
    QDialog(parent),
    ui(new Ui::ShowCommit)
{
    ui->setupUi(this);

    key1 = key;
    File1 = JiraFileName;


    // finding the remote links/ issue links
    QString remoteLinkURL = "https://issues.apache.org/jira/rest/api/latest/issue/" + key1 + "/remotelink";
    QString getConnectionCurl = "curl " + remoteLinkURL;

    // Runs Curl Command and outputs it into a JSON file
    QProcess process;
    process.setStandardOutputFile("connection.json");
    process.start(getConnectionCurl);
    process.waitForFinished(); // will wait forever until finished


    // finding the github link that will direct us to the related commits
    QFile connectionfile("connection.json");
    connectionfile.open(QFile::ReadOnly);

    QJsonDocument connection = QJsonDocument().fromJson(connectionfile.readAll());
    QJsonArray connectionArray = connection.array();
    QJsonValue connectionValue = connectionArray.first();
    QJsonObject connectionObject = connectionValue.toObject();
    QString commitsUrl = connectionObject["object"].toObject()["url"].toString();
    qDebug() << "next curl: " << commitsUrl;

    // stops here if there is no commits
    if(commitsUrl.isEmpty())
    {
        QMessageBox::information(this, tr("Error"), tr("This issue has no related commits"));

        return;
    }

    // Configuring api from website
    QStringList splitWebsite = commitsUrl.split("/");
    QString importantParts[4];

    for(int i = 0; i < 4; i++)
    {
        importantParts[i] = splitWebsite.last();
        splitWebsite.removeLast();
    }

    QString relatedCommitsApi = "https://api.github.com/repos/" + importantParts[3] + "/" + importantParts[2] + "/pulls/" + importantParts[0] + "/commits";

    qDebug() << relatedCommitsApi;

    // Running second curl to get commits
    QString getRelatedCommits = "curl " + relatedCommitsApi;

    // Runs Curl Command and outputs it into a JSON file
    QProcess process2;
    process2.setStandardOutputFile("connectionCommits.json");
    process2.start(getRelatedCommits);
    process2.waitForFinished(); // will wait forever until finished

    // Getting commit info from files
    QFile commitlistFile("connectionCommits.json");
    commitlistFile.open(QFile::ReadOnly);

    QJsonDocument commitsDoc = QJsonDocument().fromJson(commitlistFile.readAll());

    // Json array of the whole json doc
    QJsonArray JsonArray = commitsDoc.array();
    QJsonValue value;

    // Holds commit information
    QString html_url;
    QString message;
    QString name;
    QString dateCommited;
    QString commitFilesURL;

    qDebug() << JsonArray;

    if(!JsonArray.isEmpty())
    {
        for(int i = 0; i < JsonArray.size(); i++)
        {
            value = JsonArray.first();
            QJsonObject master = value.toObject();

            // Retrieves info of 1 commit
            html_url = master["html_url"].toString();
            message = master["commit"].toObject()["message"].toString();
            name = master["commit"].toObject()["author"].toObject()["name"].toString();
            dateCommited = master["commit"].toObject()["author"].toObject()["date"].toString();
            commitFilesURL = master["url"].toString();

            ui->commitList->addItem(commitFilesURL + "\n" +
                              "Name: " + name + "\n" +
                              "Message: " + message + "\n" +
                              "Date Commited: " + dateCommited + "\n" +
                              "Url: " + html_url
                              );
            ui->commitList->addItem("--------------------------------------------------------------------------------------------");

            JsonArray.removeFirst();
        }
    }
    else{
        ui->commitList->addItem("Error: Unable to load Commits");
    }

    QJsonObject thisIssue = getIssue(JiraFileName);

    QString Username = thisIssue["fields"].toObject()["creator"].toObject()["displayName"].toString();
    QString description = thisIssue["fields"].toObject()["description"].toString();
    QString summary = thisIssue["fields"].toObject()["summary"].toString();
    QString id = thisIssue["id"].toString();
    QString key2 = thisIssue["key"].toString();

    ui->name->addItem(Username);
    ui->description->addItem(description);
    ui->summary->addItem(summary);
    ui->id->addItem(id);
    ui->key->addItem(key);
}

QJsonObject ShowCommit::getIssue(QString filename)
{
    QFile issueFile(filename);
    issueFile.open(QFile::ReadOnly);

    QJsonDocument Allissues = QJsonDocument().fromJson(issueFile.readAll());

    QJsonObject allIssuesAsObject = Allissues.object();
    QJsonValue issues = allIssuesAsObject.value("issues");
    QJsonArray issueArray = issues.toArray();

    QJsonValue value;
    QJsonObject thisIssue;

    // Finds the issue in question and saves it as a Json Object
    for(int i = 0; i < 2000; i++) // Should be a better variable than 2000
    {
        value = issueArray.first();
        QJsonObject master = value.toObject();

        if(master["key"].toString() == key1)
        {
            thisIssue = value.toObject();
            break;
        }

        issueArray.removeFirst();
    }

    return thisIssue;
}

ShowCommit::~ShowCommit()
{
    delete ui;
}

void ShowCommit::on_Back_clicked()
{
    ViewIssue *Back = new ViewIssue(this, key1, File1);
    this ->hide();
    Back ->show();
}


void ShowCommit::on_commitList_itemDoubleClicked(QListWidgetItem *item)
{
    QString temp = item->text();
    QString url = temp.split("\n").first();

    viewCommit *VC = new viewCommit(this, url);
    this->hide();
    VC->show();
}
