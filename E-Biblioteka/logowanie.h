#ifndef LOGOWANIE_H
#define LOGOWANIE_H

#include <QDialog>
#include <QDebug>
#include <QtGui>
#include <QtSql>
#include <QtCore>
#include <QFileInfo>
#include "menu.h"


namespace Ui {
class Logowanie;
}

class Logowanie : public QDialog
{
    Q_OBJECT

public:
    explicit Logowanie(QWidget *parent = nullptr);
    ~Logowanie();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Logowanie *ui;
    Menu *menu;
    QSqlDatabase db;
};

#endif // LOGOWANIE_H
