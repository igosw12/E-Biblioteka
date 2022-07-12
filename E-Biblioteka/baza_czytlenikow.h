#ifndef BAZA_CZYTLENIKOW_H
#define BAZA_CZYTLENIKOW_H

#include <QDialog>

namespace Ui {
class Baza_Czytlenikow;
}

class Baza_Czytlenikow : public QDialog
{
    Q_OBJECT
    
public:
    explicit Baza_Czytlenikow(QWidget *parent = 0);
    ~Baza_Czytlenikow();
    
private:
    Ui::Baza_Czytlenikow *ui;
};

#endif // BAZA_CZYTLENIKOW_H
