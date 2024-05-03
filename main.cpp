#include "userpage.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    userpage u;
    u.show();
    return a.exec();
}
