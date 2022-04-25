#include "BiliWidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BiliWidget w;
    w.show();
    return a.exec();
}
