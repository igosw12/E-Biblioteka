#ifndef EDYTUJ_KSIAZKE_H
#define EDYTUJ_KSIAZKE_H

#include <QDialog>

namespace Ui {
class Edytuj_ksiazke;
}

class Edytuj_ksiazke : public QDialog
{
    Q_OBJECT
    
public:
    explicit Edytuj_ksiazke(QWidget *parent = 0);
    ~Edytuj_ksiazke();
    
private:
    Ui::Edytuj_ksiazke *ui;
};

#endif // EDYTUJ_KSIAZKE_H
