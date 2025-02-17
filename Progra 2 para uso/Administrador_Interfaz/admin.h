#ifndef ADMIN_H
#define ADMIN_H
#include <QObject>
#include <QTcpSocket>
#include <QDebug>
#include <QThread>
#include <QThreadPool>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Admin : public QThread
{
Q_OBJECT
public:
    Admin(QObject *parent = nullptr);
    void SocketConnection();
    void cambiarRegistro(string infoConv);
    void correccion(string vali);
    bool registro;
    bool correcto=true;
    int cantRecar;
    string aviso;
    string nombres;
    string consultas;

public slots:
    void connected();
    void disconnected();
    void readyRead();
    void escribirServidor(QByteArray info);
private:
    QTcpSocket *socketCli;
};
#endif // ADMIN_H
