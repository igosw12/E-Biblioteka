#include "ui_menu.h"
#include "menu.h"
#include "wypozyczenia.h"
#include "baza_czytlenikow.h"
#include "baza_ksiazek.h"
#include "terminy.h"

Menu::Menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_clicked()
{
    Wypozyczenia wypo;
    wypo.setModal(true);
    wypo.exec();
}

void Menu::on_pushButton_2_clicked()
{
    Baza_Czytlenikow b_c;
    b_c.setModal(true);
    b_c.exec();
}

void Menu::on_pushButton_3_clicked()
{
    Baza_Ksiazek b_k;
    b_k.setModal(true);
    b_k.exec();
}

void Menu::on_pushButton_4_clicked()
{
    Terminy terminy;
    terminy.setModal(true);
    terminy.exec();
}
