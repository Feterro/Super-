#ifndef VENTANAPRINCIPALCLIENTE_H
#define VENTANAPRINCIPALCLIENTE_H

#include <QMainWindow>
#include <QMessageBox>
#include <QInputDialog>
#include <QIcon>
#include <sstream>
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

    void on_BRegistrar_clicked();

    void on_BBuscarPrecio_clicked();

    void on_BBuscarPasillo_clicked();

    void on_BBuscarProd_clicked();

    void on_BLlenarCBPasillos_clicked();

    void on_BBuscarOtra_clicked();

private:
    Ui::ventanaPrincipalCliente *ui;
    int cont;
};

#endif // VENTANAPRINCIPALCLIENTE_H
