#include "dodaj_ksiazke.h"
#include "ui_dodaj_ksiazke.h"

Dodaj_ksiazke::Dodaj_ksiazke(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dodaj_ksiazke)
{
    ui->setupUi(this);
}

Dodaj_ksiazke::~Dodaj_ksiazke()
{
    delete ui;
}
