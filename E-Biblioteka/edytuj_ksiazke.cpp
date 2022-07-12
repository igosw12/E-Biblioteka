#include "edytuj_ksiazke.h"
#include "ui_edytuj_ksiazke.h"

Edytuj_ksiazke::Edytuj_ksiazke(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Edytuj_ksiazke)
{
    ui->setupUi(this);
}

Edytuj_ksiazke::~Edytuj_ksiazke()
{
    delete ui;
}
