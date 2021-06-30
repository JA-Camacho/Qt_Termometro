#include "termometro.h"
#include "ui_termometro.h"
#include <QDebug>
Termometro::Termometro(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Termometro)
{
    ui->setupUi(this);
    //Conectar signal y slots
    connect(ui->cmdCent, SIGNAL(valueChanged(int)),
            this, SLOT(cent2fahr(int)));
    connect(ui->cmdFahr, SIGNAL(valueChanged(int)),
            this, SLOT(fahr2cent(int)));
    connect(ui->cmdCent, SIGNAL(valueChanged(int)),
            this, SLOT(cent2kel(int)));
    connect(ui->cmdKel, SIGNAL(valueChanged(int))
            ,this, SLOT(kel2cent(int)));
    connect(ui->cmdFahr, SIGNAL(valueChanged(int)),
            this, SLOT(fahr2kel(int)));
    connect(ui->cmdKel, SIGNAL(valueChanged(int)),
            this, SLOT(kel2fahr(int)));
}

Termometro::~Termometro()
{
    delete ui;
}

void Termometro::cent2fahr(int valor)
{
    //Si el dial está siendo usado
    if(ui->cmdCent->hasFocus())
    {
        //Fórmula para calcular de Centigrados a Fahrenheit
        float f = valor * 9.0/5 + 32;
        //Se envía el valor al dial de Fahrenheit
        ui->cmdFahr->setValue(f);
    }
}

void Termometro::fahr2cent(int valor)
{
    //Si el dial está siendo usado
    if(ui->cmdFahr->hasFocus())
    {
        //Fórmula para calcular de Fahrenheit a Centigrados
        float c = (valor - 32) * 5.0/9;
        //Se envía el valor al dial de Centigrados
        ui->cmdCent->setValue(c);
    }
}

void Termometro::cent2kel(int valor)
{
    //Si el dial está siendo usado
    if(ui->cmdCent->hasFocus())
    {
        //Fórmula para calcular de Centigrados a Kelvin
        float k = (valor + 273.15);
        //Se envía el valor al dial de Kelvin
        ui->cmdKel->setValue(k);
    }
}

void Termometro::kel2cent(int valor)
{
    //Si el dial está siendo usado
    if(ui->cmdKel->hasFocus())
    {
        //Fórmula para calcular de Kelvin a Centigrados
        float k = (valor - 273.15);
        //Se envía el valor al dial de Centigrados
        ui->cmdCent->setValue(k);
    }
}

void Termometro::fahr2kel(int valor)
{
    //Si el dial está siendo usado
    if(ui->cmdFahr->hasFocus())
    {
        //Fórmula para calcular de Fahrenheit a Kelvin
        float f = (valor - 32) * 5.0/9 + 273;
        //Se envía el valor al dial de Kelvin
        ui->cmdKel->setValue(f);
    }
}

void Termometro::kel2fahr(int valor)
{
    //Si el dial está siendo usado
    if(ui->cmdKel->hasFocus())
    {
        //Fórmula para calcular de Kelvin a Fahrenheit
        float k = (valor - 273.15) * 9.0/5 + 32;
        //Se envía el valor al dial de Fahrenheit
        ui->cmdFahr->setValue(k);
    }
}

