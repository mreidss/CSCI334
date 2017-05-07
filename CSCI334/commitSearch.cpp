#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtCore>
#include <QtGui>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Naming The Window
    this->setWindowTitle("JIRA/GITHUB Connection Tool");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString link = this->ui->gitLink->text();

    QString curl = "curl https://api.github.com/repos/apache/cordova-js/commits";

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
