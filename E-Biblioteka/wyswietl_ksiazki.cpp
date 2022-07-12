#include "wyswietl_ksiazki.h"
#include "ui_wyswietl_ksiazki.h"

Wyswietl_ksiazki::Wyswietl_ksiazki(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Wyswietl_ksiazki)
{
    ui->setupUi(this);

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    QString connectString = "Driver={SQL Server};";
    connectString.append("Server=IGORPC\\MSSQLSERVER10;");
    connectString.append("Database=Projekt;");
    connectString.append("Uid=admin;");
    connectString.append("Pwd=admin;");
    db.setDatabaseName(connectString);


    /*db.setHostName("IGORPC\\MSSQLSERVER10");
    db.setUserName("admin");
    db.setPassword("admin");
    db.setDatabaseName("IGORPC\\MSSQLSERVER10");
    */

    db.open();

    model = new QSqlTableModel(this);
    model->setTable("ksiazki");
    model->select();

    qDebug() << db.databaseName();
    qDebug() << model->lastError().text();
    ui->tableView->setModel(model);
}

Wyswietl_ksiazki::~Wyswietl_ksiazki()
{
    delete ui;
}

void Wyswietl_ksiazki::on_tableView_activated(const QModelIndex &index)
{

}
