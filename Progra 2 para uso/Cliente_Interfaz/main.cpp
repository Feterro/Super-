#include <QCoreApplication>
#include "cliente.h"
#include "threadcli.h"
#include "mainwindow.h"
#include <QApplication>

Cliente socketCli;

int main(int argc, char *argv[])
{
    socketCli.SocketConnection();

    ThreadCli proceso;
    proceso.start();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
