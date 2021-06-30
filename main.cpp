#include "termometro.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Termometro w;
    w.show();
    return a.exec();
}
