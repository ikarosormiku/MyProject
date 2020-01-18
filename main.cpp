#include "videvplayer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VidevPlayer w;
    w.show();

    return a.exec();
}
