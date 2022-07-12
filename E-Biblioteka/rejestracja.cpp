#include "rejestracja.h"
#include "logowanie.h"
#include "ui_rejestracja.h"

Rejestracja::Rejestracja(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Rejestracja)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QODBC");
    QString connectString = "Driver={SQL Server};";
    connectString.append("Server=IGORPC\\MSSQLSERVER10;");
    connectString.append("Database=Projekt;");
    connectString.append("Uid=admin;");
    connectString.append("Pwd=admin;");
    db.setDatabaseName(connectString);

    db.open();
}

Rejestracja::~Rejestracja()
{
    delete ui;
}

void Rejestracja::on_pushButton_clicked()
{

    QString imie,nazwisko,wiek,login,haslo;
    imie=ui->lineEdit_imie->text();
    nazwisko=ui->lineEdit_nazwisko->text();
    wiek=ui->lineEdit_wiek->text();
    login=ui->lineEdit_login->text();
    haslo=ui->lineEdit_haslo->text();

   if(!db.isOpen()){
       qDebug()<<"Blad logowania";
       return;
   }
   QSqlQuery qry;
   qry.prepare("insert into Pracownik (Imię,Nazwisko,Login,Haslo,Wiek) values ('"+imie+"','"+nazwisko+"','"+login+"','"+haslo+"','"+wiek+"')");
   {
       if(qry.exec()){
           hide();
           Logowanie logo1;
           logo1.setModal(true);
           logo1.exec();
       }
   }
}

