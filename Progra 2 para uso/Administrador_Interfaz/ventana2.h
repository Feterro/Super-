#ifndef VENTANA2_H
#define VENTANA2_H

#include <iostream>
#include <QMainWindow>
#include <QObject>
#include <QThread>
#include <QTcpSocket>
#include "admin.h"
#include "globalizarsocketad.h"

namespace Ui {
class ventana2;
}

class ventana2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit ventana2(QWidget *parent = nullptr);
    ~ventana2();

signals:
    void escribirServidor(QByteArray info);

private slots:
    void on_pushButton_clicked();

private:
    Ui::ventana2 *ui;
};

#endif // VENTANA2_H
