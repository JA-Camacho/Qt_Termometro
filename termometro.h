#ifndef TERMOMETRO_H
#define TERMOMETRO_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Termometro; }
QT_END_NAMESPACE

class Termometro : public QMainWindow
{
    Q_OBJECT

public:
    Termometro(QWidget *parent = nullptr);
    ~Termometro();

public slots:
    //Metodos para calcular la temperatura de...
    void cent2fahr(int); //Centigrados a Fahrenheit
    void fahr2cent(int); //Fahrenheit a Centigrados
    void cent2kel(int);  //Centigrados a Kelvin
    void kel2cent(int);  //Kelvin a Centigrados
    void fahr2kel(int);  //Fahrenheit a Kelvin
    void kel2fahr(int);  //Kelvin a Fahrenheit
private:
    Ui::Termometro *ui;
};
#endif // TERMOMETRO_H
