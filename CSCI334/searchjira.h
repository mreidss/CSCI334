#ifndef SEARCHJIRA_H
#define SEARCHJIRA_H

#include <QDialog>

namespace Ui {
class searchJIRA;
}

class searchJIRA : public QDialog
{
    Q_OBJECT

public:
    explicit searchJIRA(QWidget *parent = 0);
    ~searchJIRA();

private slots:
    void on_buttonBox_accepted();
    QString getApiJira(QString);
    QJsonDocument loadJsonJIRA(QString fileName);

private:
    Ui::searchJIRA *ui;
};

#endif // SEARCHJIRA_H
