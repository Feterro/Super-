#ifndef THREADADMIN_H
#define THREADADMIN_H

#include <QObject>
#include <QThread>
#include <QTcpSocket>
#include <iostream>
#include "admin.h"
#include "globalizarSocketAd.h"

using namespace std;

class ThreadAdmin: public QThread
{
    Q_OBJECT
public:
    explicit ThreadAdmin(QObject *parent=nullptr);
    void reportes();
    void insertarPas();
    void insertarPro();
    void insertarMar();
    void cons(string resp);
    void modificar(string resp);
    void revisarGondolas();
    void elimPas();
    void elimPro();
    void elimMar();

signals:
    void escribirServidor(QByteArray info);

public slots:

protected:
    void run() override;


};

#endif // THREADADMIN_H

