#ifndef REJESTRACJA_H
#define REJESTRACJA_H

#include <QDialog>
#include <QDebug>
#include <QtGui>
#include <QtSql>
#include <QtCore>
#include <QFileInfo>
#include <logowanie.h>

namespace Ui {
class Rejestracja;
}

class Rejestracja : public QDialog
{
    Q_OBJECT

public:
    explicit Rejestracja(QWidget *parent = nullptr);
    ~Rejestracja();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Rejestracja *ui;
    QSqlDatabase db;
};

#endif // REJESTRACJA_H
