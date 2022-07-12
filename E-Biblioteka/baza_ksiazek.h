#ifndef BAZA_KSIAZEK_H
#define BAZA_KSIAZEK_H

#include <QDialog>

namespace Ui {
class Baza_Ksiazek;
}

class Baza_Ksiazek : public QDialog
{
    Q_OBJECT
    
public:
    explicit Baza_Ksiazek(QWidget *parent = 0);
    ~Baza_Ksiazek();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Baza_Ksiazek *ui;
};

#endif // BAZA_KSIAZEK_H
