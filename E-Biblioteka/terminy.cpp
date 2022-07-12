#include "terminy.h"
#include "ui_terminy.h"

Terminy::Terminy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Terminy)
{
    ui->setupUi(this);
}

Terminy::~Terminy()
{
    delete ui;
}
