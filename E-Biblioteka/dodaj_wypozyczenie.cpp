#include "dodaj_wypozyczenie.h"
#include "ui_dodaj_wypozyczenie.h"

Dodaj_wypozyczenie::Dodaj_wypozyczenie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dodaj_wypozyczenie)
{
    ui->setupUi(this);
}

Dodaj_wypozyczenie::~Dodaj_wypozyczenie()
{
    delete ui;
}
