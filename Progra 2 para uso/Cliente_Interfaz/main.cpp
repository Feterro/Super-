#include <QCoreApplication>
#include "cliente.h"
#include "threadcli.h"
#include "ventanaprincipalcliente.h"
#include <QApplication>

Cliente socketCli;

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    socketCli.SocketConnection();
    ventanaPrincipalCliente w;
    w.show();
    return a.exec();
}
