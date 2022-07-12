#ifndef WYPOZYCZENIA_H
#define WYPOZYCZENIA_H

#include <QDialog>

namespace Ui {
class Wypozyczenia;
}

class Wypozyczenia : public QDialog
{
    Q_OBJECT
    
public:
    explicit Wypozyczenia(QWidget *parent = 0);
    ~Wypozyczenia();
    
private:
    Ui::Wypozyczenia *ui;
};

#endif // WYPOZYCZENIA_H
