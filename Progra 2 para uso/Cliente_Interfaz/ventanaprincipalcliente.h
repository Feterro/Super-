#ifndef VENTANAPRINCIPALCLIENTE_H
#define VENTANAPRINCIPALCLIENTE_H

#include <QMainWindow>
#include "globalizarSocket.h"

namespace Ui {
class ventanaPrincipalCliente;
}

class ventanaPrincipalCliente : public QMainWindow
{
    Q_OBJECT

public:
    explicit ventanaPrincipalCliente(QWidget *parent = nullptr);
    ~ventanaPrincipalCliente();

signals:
    void escribirServidor(QByteArray info);

private slots:
    void on_BIngresar_clicked();

    void on_BNo_clicked();

    void on_BSi_clicked();

    void on_TCedula_returnPressed();

private:
    Ui::ventanaPrincipalCliente *ui;
};

#endif // VENTANAPRINCIPALCLIENTE_H
