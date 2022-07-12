#include "logowanie.h"
#include <QApplication>
#include <QtSql>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    QString connectString = "Driver={SQL Server};";
    connectString.append("Server=IGORPC\\MSSQLSERVER10;");
    connectString.append("Database=Projekt;");
    connectString.append("Uid=admin;");
    connectString.append("Pwd=admin;");
    db.setDatabaseName(connectString);

    db.open();
    Logowanie w;
    w.show();
    
    return a.exec();
}
