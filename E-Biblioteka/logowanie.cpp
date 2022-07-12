#include "logowanie.h"
#include "rejestracja.h"
#include "ui_logowanie.h"
#include "menu.h"

Logowanie::Logowanie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Logowanie)
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

Logowanie::~Logowanie()
{
    delete ui;
}

void Logowanie::on_pushButton_clicked()
{


    QString username,password;
    username=ui->lineEdit_username->text();
    password=ui->lineEdit_password->text();

   if(!db.isOpen()){
       qDebug()<<"Blad logowania";
       return;
   }

   QSqlQuery qry;

   if(qry.exec("select * from Pracownik where Login='"+username+"' and Haslo='"+password+"'" ))
   {
       int count=0;
       while(qry.next())
       {
           count++;
       }
       if(count==1){
           ui->label_3->setText("dziala");
           menu = new Menu(this);
           menu->show();
           }
       if(count>1)
           ui->label_3->setText("duplicate username and password");
       if(count<1)
           ui->label_3->setText("blad");

   }
}


void Logowanie::on_pushButton_2_clicked()
{
    hide();
    Rejestracja reje;
    reje.setModal(true);
    reje.exec();
}


