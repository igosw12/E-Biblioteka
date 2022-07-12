#ifndef DODAJ_WYPOZYCZENIE_H
#define DODAJ_WYPOZYCZENIE_H

#include <QDialog>

namespace Ui {
class Dodaj_wypozyczenie;
}

class Dodaj_wypozyczenie : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dodaj_wypozyczenie(QWidget *parent = 0);
    ~Dodaj_wypozyczenie();
    
private:
    Ui::Dodaj_wypozyczenie *ui;
};

#endif // DODAJ_WYPOZYCZENIE_H
