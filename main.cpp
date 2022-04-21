#include <QApplication>
#include <QPushButton>
#include "bmergewidget.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    BMergeWidget b;
    b.show();
    return QApplication::exec();
}
