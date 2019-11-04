#include "admin.h"
#include "threadadmin.h"
#include "mainwindow.h"
#include <QApplication>
#include <QCoreApplication>

Admin socketAdmin;

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    socketAdmin.SocketConnection();

    MainWindow w;
    w.show();

    return a.exec();
}
