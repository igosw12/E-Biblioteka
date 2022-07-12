#ifndef USUN_KSIAZKE_H
#define USUN_KSIAZKE_H

#include <QDialog>

namespace Ui {
class Usun_ksiazke;
}

class Usun_ksiazke : public QDialog
{
    Q_OBJECT
    
public:
    explicit Usun_ksiazke(QWidget *parent = 0);
    ~Usun_ksiazke();
    
private:
    Ui::Usun_ksiazke *ui;
};

#endif // USUN_KSIAZKE_H
