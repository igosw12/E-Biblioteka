#ifndef WYSWIETL_KSIAZKI_H
#define WYSWIETL_KSIAZKI_H

#include <QDialog>
#include <QDebug>
#include <QtGui>
#include <QtSql>
#include <QtCore>
#include <QFileInfo>


namespace Ui {
class Wyswietl_ksiazki;
}

class Wyswietl_ksiazki : public QDialog
{
    Q_OBJECT
    QWidget *centralWidget;
    
public:
    explicit Wyswietl_ksiazki(QWidget *parent = 0);
    ~Wyswietl_ksiazki();
    
private slots:
    void on_tableView_activated(const QModelIndex &index);

private:
    Ui::Wyswietl_ksiazki *ui;
    QSqlTableModel  *model;
};

#endif // WYSWIETL_KSIAZKI_H
