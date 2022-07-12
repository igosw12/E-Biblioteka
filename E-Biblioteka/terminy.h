#ifndef TERMINY_H
#define TERMINY_H

#include <QDialog>

namespace Ui {
class Terminy;
}

class Terminy : public QDialog
{
    Q_OBJECT
    
public:
    explicit Terminy(QWidget *parent = 0);
    ~Terminy();
    
private:
    Ui::Terminy *ui;
};

#endif // TERMINY_H
