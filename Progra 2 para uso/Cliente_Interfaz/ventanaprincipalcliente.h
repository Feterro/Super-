#ifndef VENTANAPRINCIPALCLIENTE_H
#define VENTANAPRINCIPALCLIENTE_H

#include <QMainWindow>
#include <QMessageBox>
#include <QInputDialog>
#include <QIcon>
#include <sstream>
#include "globalizarSocket.h"
#include <fstream>

namespace Ui {
class ventanaPrincipalCliente;
}

class ventanaPrincipalCliente : public QMainWindow
{
    Q_OBJECT

public:
    explicit ventanaPrincipalCliente(QWidget *parent = nullptr);
    ~ventanaPrincipalCliente();

    bool compra=false;
    string nom;
    int cantReg=0;

signals:
    void escribirServidor(QByteArray info);

private slots:
    void comprobar(QString canti);

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

    void on_BLlenarCBPasillos_2_clicked();
    void on_BBPasillo_clicked();

    void on_BBProd_clicked();

    void on_BBPrecio_clicked();

    void on_BBOtra_clicked();

    void on_BLlenarCBPasillos3_clicked();

    void on_BBPasillo2_clicked();

    void on_BBProducto2_clicked();

    void on_BBPrecio2_clicked();

    void on_BBOtra2_clicked();

    void on_pushButton_clicked();

    void on_BLlenarCBPasillos3_2_clicked();

    void on_BBPasillo4_clicked();

    void on_BBProducto4_clicked();

    void on_BBPrecio4_clicked();

    void on_BBOtra3_clicked();

    void on_BBCanti_clicked();

    void on_BBcarrito_clicked();

    void on_BBregresar_clicked();

    void on_BBRepo_clicked();

    void on_BBFactu_clicked();

    void on_BBSPas_clicked();

    void on_BBSPro_clicked();

    void on_BBSMar_clicked();


private:
    Ui::ventanaPrincipalCliente *ui;
    int cont=0;
    string codPas;
    string codProd;
    string codMar;
    string repo;
};

#endif // VENTANAPRINCIPALCLIENTE_H
