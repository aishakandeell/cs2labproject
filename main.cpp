#include "mainpage.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainpage m;
    m.show();
    return a.exec();
}
