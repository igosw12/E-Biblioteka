#include "wypozyczenia.h"
#include "ui_wypozyczenia.h"

Wypozyczenia::Wypozyczenia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Wypozyczenia)
{
    ui->setupUi(this);
}

Wypozyczenia::~Wypozyczenia()
{
    delete ui;
}
