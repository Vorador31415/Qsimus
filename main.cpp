#include <QApplication>

#include "qsimus.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Qsimus qsimus;
    qsimus.show();

    return app.exec();
}
