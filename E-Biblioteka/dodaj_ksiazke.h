#ifndef DODAJ_KSIAZKE_H
#define DODAJ_KSIAZKE_H

#include <QDialog>

namespace Ui {
class Dodaj_ksiazke;
}

class Dodaj_ksiazke : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dodaj_ksiazke(QWidget *parent = 0);
    ~Dodaj_ksiazke();
    
private:
    Ui::Dodaj_ksiazke *ui;
};

#endif // DODAJ_KSIAZKE_H
