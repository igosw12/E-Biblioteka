#include "baza_czytlenikow.h"
#include "ui_baza_czytlenikow.h"

Baza_Czytlenikow::Baza_Czytlenikow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Baza_Czytlenikow)
{
    ui->setupUi(this);
}

Baza_Czytlenikow::~Baza_Czytlenikow()
{
    delete ui;
}
