#include "baza_ksiazek.h"
#include "ui_baza_ksiazek.h"
#include "dodaj_ksiazke.h"
#include "usun_ksiazke.h"
#include "edytuj_ksiazke.h"
#include "wyswietl_ksiazki.h"

Baza_Ksiazek::Baza_Ksiazek(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Baza_Ksiazek)
{
    ui->setupUi(this);
}

Baza_Ksiazek::~Baza_Ksiazek()
{
    delete ui;
}

void Baza_Ksiazek::on_pushButton_clicked()
{
    Dodaj_ksiazke dodajk;
    dodajk.setModal(true);
    dodajk.exec();
}

void Baza_Ksiazek::on_pushButton_2_clicked()
{
    Usun_ksiazke usunk;
    usunk.setModal(true);
    usunk.exec();
}

void Baza_Ksiazek::on_pushButton_3_clicked()
{
    Edytuj_ksiazke edyk;
    edyk.setModal(true);
    edyk.exec();
}

void Baza_Ksiazek::on_pushButton_4_clicked()
{
    Wyswietl_ksiazki wysk;
    wysk.setModal(true);
    wysk.exec();
}
