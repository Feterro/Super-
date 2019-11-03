#include <QCoreApplication>
#include "admin.h"
#include "threadadmin.h"
#include "mainwindow.h"
#include <QApplication>

Admin socketAdmin;

int main(int argc, char *argv[])
{


    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
