#include "usun_ksiazke.h"
#include "ui_usun_ksiazke.h"

Usun_ksiazke::Usun_ksiazke(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Usun_ksiazke)
{
    ui->setupUi(this);
}

Usun_ksiazke::~Usun_ksiazke()
{
    delete ui;
}
