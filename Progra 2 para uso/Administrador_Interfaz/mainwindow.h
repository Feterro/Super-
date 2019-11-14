#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>
#include <QMainWindow>
#include <QObject>
#include <QThread>
#include <QTcpSocket>
#include "admin.h"
#include "globalizarsocketad.h"
#include <QMessageBox>
#include <QInputDialog>
#include <QIcon>
#include <sstream>
#include <windows.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString codigo;
signals:
    void escribirServidor(QByteArray info);

private slots:
    void on_BIngresar_3_clicked();

    void on_TCodigo_3_returnPressed();

    void on_BPasillo_clicked();

    void on_BinsertarPas_clicked();

    void on_BProducto_clicked();

    void on_BInsertarProd_clicked();

    void on_BInsertarMarca_clicked();

    void on_BMarca_clicked();

    void on_pushButton_clicked();

    void on_RBS_clicked();

    void on_RBN_clicked();

    void on_BModPrecio_clicked();

    void on_BModCan_clicked();

    void on_BModi_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_BModImp_clicked();

    void on_BModiImp_clicked();

    void on_BModiCan_clicked();

    void on_BPasilloEl_clicked();

    void on_BElimarPas_clicked();

    void on_BProdEl_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_BEliminaProd_clicked();

    void on_BMarcaEl_clicked();

    void on_BEliminarMarca_clicked();

    void on_BClieEl_clicked();

    void on_BActCB_clicked();

    void on_BActProd_clicked();

    void on_BActMarProd_clicked();

    void volver();

    void volverEliminar();

    void volverModificar();

    void on_BVolver1_clicked();

    void on_BVolver2_clicked();

    void on_BVolver3_clicked();

    void on_BVolver_clicked();

    void on_BVolver_4_clicked();

    void on_BVolver_3_clicked();

    void on_BVolver_2_clicked();

    void on_BModVol_clicked();

    void on_BModVol_2_clicked();

    void on_BPrecioCon_clicked();

    void on_BBuscarPasilloCon_clicked();

    void on_BBuscarProdCon_clicked();

    void on_BBuscarPrecioCon_clicked();

    void on_BImpCon_clicked();

    void on_BCanCon_clicked();

    void on_BBuscarOtraCon_clicked();

    void on_BGondolas_clicked();

    void on_BVolverGon_clicked();

    void on_BFacturar_clicked();

    void on_BAgregar_clicked();

    void on_BBRPas1_clicked();

    void on_BBRPas2_clicked();

    void on_BBRPas3_clicked();

    void on_BBRPas4_clicked();

    void on_BBRPro1_clicked();

    void on_BBRPro2_clicked();

    void on_pushButton_6_clicked();

    string dividir(string cod);

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_9_clicked();

    void on_BInven_clicked();

    void on_BAgregarInv_clicked();

    void on_BVolverInv_clicked();

private:
    Ui::MainWindow *ui;
    string aviso;
    int cont;
    QString canasta;
    QString pasilloCon;
    QString prodCon;
    string precio="";

};
#endif // MAINWINDOW_H
