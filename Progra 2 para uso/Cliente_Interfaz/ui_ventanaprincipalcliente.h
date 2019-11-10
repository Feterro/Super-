/********************************************************************************
** Form generated from reading UI file 'ventanaprincipalcliente.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAPRINCIPALCLIENTE_H
#define UI_VENTANAPRINCIPALCLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ventanaPrincipalCliente
{
public:
    QWidget *centralwidget;
    QTabWidget *tabsClientes;
    QWidget *tab;
    QLineEdit *TTelefono;
    QPushButton *BCancelar;
    QLineEdit *TCorreo;
    QLineEdit *TCedulaR;
    QLineEdit *TNombre;
    QLabel *LTelefono;
    QLabel *LIngresar;
    QLabel *LBienvenida;
    QLabel *LCorreo;
    QPushButton *BIngresar;
    QLabel *LNoReg;
    QLabel *LCedulaR;
    QComboBox *CBCiudad;
    QLabel *LPregunta;
    QLabel *LCiudad;
    QLabel *LNombre;
    QPushButton *BRegistrar;
    QLabel *LDatos;
    QPushButton *BSi;
    QPushButton *BNo;
    QLineEdit *TCedula;
    QLabel *LCedula;
    QLabel *LVerExitosa;
    QLabel *LDisfrute;
    QLabel *LResEx;
    QPushButton *pushButton;
    QWidget *tab_2;
    QLCDNumber *LCDPrecio;
    QLabel *LPasProdMar;
    QLabel *LInformacion;
    QComboBox *CBMarcas;
    QPushButton *BBuscarPasillo;
    QComboBox *CBProductos;
    QComboBox *CBPasillos;
    QPushButton *BBuscarProd;
    QPushButton *BBuscarPrecio;
    QLabel *LColonIma;
    QPushButton *BLlenarCBPasillos;
    QPushButton *BBuscarOtra;
    QWidget *tab_3;
    QLabel *LInformacion_2;
    QLabel *LPasProdMar_2;
    QComboBox *CBPasillos2;
    QPushButton *BBOtra;
    QPushButton *BLlenarCBPasillos_2;
    QLCDNumber *LCDImpuesto;
    QPushButton *BBPasillo;
    QPushButton *BBProd;
    QPushButton *BBPrecio;
    QComboBox *CBProductos2;
    QComboBox *CBMarcas2;
    QLabel *porcentaje;
    QWidget *tab_4;
    QLabel *LInformacion_7;
    QComboBox *CBMarcas3;
    QLabel *LPasProdMar_7;
    QComboBox *CBProductos3;
    QComboBox *CBPasillos3;
    QPushButton *BBPrecio2;
    QPushButton *BBProducto2;
    QPushButton *BBPasillo2;
    QPushButton *BBOtra2;
    QPushButton *BLlenarCBPasillos3;
    QLabel *confirmacion;
    QLabel *confirmacion_2;
    QLabel *confirmacion_3;
    QWidget *tab_5;
    QLabel *LInformacion_8;
    QLabel *LPasProdMar_8;
    QComboBox *CBPasillos4;
    QPushButton *BBPrecio4;
    QPushButton *BBProducto4;
    QPushButton *BBPasillo4;
    QPushButton *BBOtra3;
    QPushButton *BLlenarCBPasillos3_2;
    QComboBox *CBProductos4;
    QComboBox *CBMarcas4;
    QSpinBox *sBoxCantidad;
    QPushButton *BBCanti;
    QLabel *santaManos;
    QWidget *tab_6;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ventanaPrincipalCliente)
    {
        if (ventanaPrincipalCliente->objectName().isEmpty())
            ventanaPrincipalCliente->setObjectName(QString::fromUtf8("ventanaPrincipalCliente"));
        ventanaPrincipalCliente->resize(680, 413);
        centralwidget = new QWidget(ventanaPrincipalCliente);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabsClientes = new QTabWidget(centralwidget);
        tabsClientes->setObjectName(QString::fromUtf8("tabsClientes"));
        tabsClientes->setGeometry(QRect(-10, 0, 691, 401));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        TTelefono = new QLineEdit(tab);
        TTelefono->setObjectName(QString::fromUtf8("TTelefono"));
        TTelefono->setGeometry(QRect(270, 240, 181, 22));
        BCancelar = new QPushButton(tab);
        BCancelar->setObjectName(QString::fromUtf8("BCancelar"));
        BCancelar->setGeometry(QRect(370, 300, 93, 28));
        TCorreo = new QLineEdit(tab);
        TCorreo->setObjectName(QString::fromUtf8("TCorreo"));
        TCorreo->setGeometry(QRect(270, 210, 181, 22));
        TCedulaR = new QLineEdit(tab);
        TCedulaR->setObjectName(QString::fromUtf8("TCedulaR"));
        TCedulaR->setGeometry(QRect(270, 150, 181, 22));
        TNombre = new QLineEdit(tab);
        TNombre->setObjectName(QString::fromUtf8("TNombre"));
        TNombre->setGeometry(QRect(270, 120, 181, 22));
        LTelefono = new QLabel(tab);
        LTelefono->setObjectName(QString::fromUtf8("LTelefono"));
        LTelefono->setGeometry(QRect(140, 240, 55, 21));
        LIngresar = new QLabel(tab);
        LIngresar->setObjectName(QString::fromUtf8("LIngresar"));
        LIngresar->setGeometry(QRect(200, 70, 261, 21));
        LBienvenida = new QLabel(tab);
        LBienvenida->setObjectName(QString::fromUtf8("LBienvenida"));
        LBienvenida->setGeometry(QRect(240, 40, 171, 16));
        LCorreo = new QLabel(tab);
        LCorreo->setObjectName(QString::fromUtf8("LCorreo"));
        LCorreo->setGeometry(QRect(140, 210, 55, 16));
        BIngresar = new QPushButton(tab);
        BIngresar->setObjectName(QString::fromUtf8("BIngresar"));
        BIngresar->setGeometry(QRect(270, 200, 93, 28));
        LNoReg = new QLabel(tab);
        LNoReg->setObjectName(QString::fromUtf8("LNoReg"));
        LNoReg->setGeometry(QRect(210, 100, 201, 21));
        LCedulaR = new QLabel(tab);
        LCedulaR->setObjectName(QString::fromUtf8("LCedulaR"));
        LCedulaR->setGeometry(QRect(140, 150, 55, 16));
        CBCiudad = new QComboBox(tab);
        CBCiudad->setObjectName(QString::fromUtf8("CBCiudad"));
        CBCiudad->setGeometry(QRect(270, 180, 181, 22));
        LPregunta = new QLabel(tab);
        LPregunta->setObjectName(QString::fromUtf8("LPregunta"));
        LPregunta->setGeometry(QRect(260, 150, 121, 31));
        LCiudad = new QLabel(tab);
        LCiudad->setObjectName(QString::fromUtf8("LCiudad"));
        LCiudad->setGeometry(QRect(140, 180, 55, 16));
        LNombre = new QLabel(tab);
        LNombre->setObjectName(QString::fromUtf8("LNombre"));
        LNombre->setGeometry(QRect(140, 120, 55, 16));
        BRegistrar = new QPushButton(tab);
        BRegistrar->setObjectName(QString::fromUtf8("BRegistrar"));
        BRegistrar->setGeometry(QRect(200, 300, 93, 28));
        LDatos = new QLabel(tab);
        LDatos->setObjectName(QString::fromUtf8("LDatos"));
        LDatos->setGeometry(QRect(270, 60, 111, 16));
        BSi = new QPushButton(tab);
        BSi->setObjectName(QString::fromUtf8("BSi"));
        BSi->setGeometry(QRect(200, 200, 93, 28));
        BNo = new QPushButton(tab);
        BNo->setObjectName(QString::fromUtf8("BNo"));
        BNo->setGeometry(QRect(360, 200, 93, 28));
        TCedula = new QLineEdit(tab);
        TCedula->setObjectName(QString::fromUtf8("TCedula"));
        TCedula->setGeometry(QRect(270, 140, 181, 22));
        LCedula = new QLabel(tab);
        LCedula->setObjectName(QString::fromUtf8("LCedula"));
        LCedula->setGeometry(QRect(140, 130, 55, 16));
        LVerExitosa = new QLabel(tab);
        LVerExitosa->setObjectName(QString::fromUtf8("LVerExitosa"));
        LVerExitosa->setGeometry(QRect(220, 100, 211, 61));
        LDisfrute = new QLabel(tab);
        LDisfrute->setObjectName(QString::fromUtf8("LDisfrute"));
        LDisfrute->setGeometry(QRect(190, 150, 291, 51));
        LResEx = new QLabel(tab);
        LResEx->setObjectName(QString::fromUtf8("LResEx"));
        LResEx->setGeometry(QRect(270, 70, 151, 41));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(650, 330, 20, 20));
        tabsClientes->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        LCDPrecio = new QLCDNumber(tab_2);
        LCDPrecio->setObjectName(QString::fromUtf8("LCDPrecio"));
        LCDPrecio->setGeometry(QRect(490, 160, 171, 71));
        LPasProdMar = new QLabel(tab_2);
        LPasProdMar->setObjectName(QString::fromUtf8("LPasProdMar"));
        LPasProdMar->setGeometry(QRect(20, 190, 55, 16));
        LInformacion = new QLabel(tab_2);
        LInformacion->setObjectName(QString::fromUtf8("LInformacion"));
        LInformacion->setGeometry(QRect(140, 40, 391, 41));
        CBMarcas = new QComboBox(tab_2);
        CBMarcas->setObjectName(QString::fromUtf8("CBMarcas"));
        CBMarcas->setGeometry(QRect(140, 190, 201, 21));
        BBuscarPasillo = new QPushButton(tab_2);
        BBuscarPasillo->setObjectName(QString::fromUtf8("BBuscarPasillo"));
        BBuscarPasillo->setGeometry(QRect(90, 270, 121, 31));
        CBProductos = new QComboBox(tab_2);
        CBProductos->setObjectName(QString::fromUtf8("CBProductos"));
        CBProductos->setGeometry(QRect(140, 190, 201, 22));
        CBPasillos = new QComboBox(tab_2);
        CBPasillos->setObjectName(QString::fromUtf8("CBPasillos"));
        CBPasillos->setGeometry(QRect(140, 190, 201, 22));
        BBuscarProd = new QPushButton(tab_2);
        BBuscarProd->setObjectName(QString::fromUtf8("BBuscarProd"));
        BBuscarProd->setGeometry(QRect(90, 270, 121, 31));
        BBuscarPrecio = new QPushButton(tab_2);
        BBuscarPrecio->setObjectName(QString::fromUtf8("BBuscarPrecio"));
        BBuscarPrecio->setGeometry(QRect(90, 270, 121, 31));
        LColonIma = new QLabel(tab_2);
        LColonIma->setObjectName(QString::fromUtf8("LColonIma"));
        LColonIma->setGeometry(QRect(410, 170, 81, 61));
        BLlenarCBPasillos = new QPushButton(tab_2);
        BLlenarCBPasillos->setObjectName(QString::fromUtf8("BLlenarCBPasillos"));
        BLlenarCBPasillos->setGeometry(QRect(650, 330, 20, 20));
        BBuscarOtra = new QPushButton(tab_2);
        BBuscarOtra->setObjectName(QString::fromUtf8("BBuscarOtra"));
        BBuscarOtra->setGeometry(QRect(260, 270, 121, 31));
        tabsClientes->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        LInformacion_2 = new QLabel(tab_3);
        LInformacion_2->setObjectName(QString::fromUtf8("LInformacion_2"));
        LInformacion_2->setGeometry(QRect(140, 40, 401, 41));
        LPasProdMar_2 = new QLabel(tab_3);
        LPasProdMar_2->setObjectName(QString::fromUtf8("LPasProdMar_2"));
        LPasProdMar_2->setGeometry(QRect(20, 190, 55, 16));
        CBPasillos2 = new QComboBox(tab_3);
        CBPasillos2->setObjectName(QString::fromUtf8("CBPasillos2"));
        CBPasillos2->setGeometry(QRect(140, 190, 201, 22));
        BBOtra = new QPushButton(tab_3);
        BBOtra->setObjectName(QString::fromUtf8("BBOtra"));
        BBOtra->setGeometry(QRect(260, 270, 121, 31));
        BLlenarCBPasillos_2 = new QPushButton(tab_3);
        BLlenarCBPasillos_2->setObjectName(QString::fromUtf8("BLlenarCBPasillos_2"));
        BLlenarCBPasillos_2->setGeometry(QRect(650, 330, 20, 20));
        LCDImpuesto = new QLCDNumber(tab_3);
        LCDImpuesto->setObjectName(QString::fromUtf8("LCDImpuesto"));
        LCDImpuesto->setGeometry(QRect(390, 160, 171, 71));
        BBPasillo = new QPushButton(tab_3);
        BBPasillo->setObjectName(QString::fromUtf8("BBPasillo"));
        BBPasillo->setGeometry(QRect(90, 270, 121, 31));
        BBProd = new QPushButton(tab_3);
        BBProd->setObjectName(QString::fromUtf8("BBProd"));
        BBProd->setGeometry(QRect(90, 270, 121, 31));
        BBPrecio = new QPushButton(tab_3);
        BBPrecio->setObjectName(QString::fromUtf8("BBPrecio"));
        BBPrecio->setGeometry(QRect(90, 270, 121, 31));
        CBProductos2 = new QComboBox(tab_3);
        CBProductos2->setObjectName(QString::fromUtf8("CBProductos2"));
        CBProductos2->setGeometry(QRect(140, 190, 201, 22));
        CBMarcas2 = new QComboBox(tab_3);
        CBMarcas2->setObjectName(QString::fromUtf8("CBMarcas2"));
        CBMarcas2->setGeometry(QRect(140, 190, 201, 22));
        porcentaje = new QLabel(tab_3);
        porcentaje->setObjectName(QString::fromUtf8("porcentaje"));
        porcentaje->setGeometry(QRect(590, 160, 91, 81));
        tabsClientes->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        LInformacion_7 = new QLabel(tab_4);
        LInformacion_7->setObjectName(QString::fromUtf8("LInformacion_7"));
        LInformacion_7->setGeometry(QRect(140, 40, 401, 41));
        CBMarcas3 = new QComboBox(tab_4);
        CBMarcas3->setObjectName(QString::fromUtf8("CBMarcas3"));
        CBMarcas3->setGeometry(QRect(140, 190, 201, 22));
        LPasProdMar_7 = new QLabel(tab_4);
        LPasProdMar_7->setObjectName(QString::fromUtf8("LPasProdMar_7"));
        LPasProdMar_7->setGeometry(QRect(20, 190, 55, 16));
        CBProductos3 = new QComboBox(tab_4);
        CBProductos3->setObjectName(QString::fromUtf8("CBProductos3"));
        CBProductos3->setGeometry(QRect(140, 190, 201, 22));
        CBPasillos3 = new QComboBox(tab_4);
        CBPasillos3->setObjectName(QString::fromUtf8("CBPasillos3"));
        CBPasillos3->setGeometry(QRect(140, 190, 201, 22));
        BBPrecio2 = new QPushButton(tab_4);
        BBPrecio2->setObjectName(QString::fromUtf8("BBPrecio2"));
        BBPrecio2->setGeometry(QRect(90, 270, 121, 31));
        BBProducto2 = new QPushButton(tab_4);
        BBProducto2->setObjectName(QString::fromUtf8("BBProducto2"));
        BBProducto2->setGeometry(QRect(90, 270, 121, 31));
        BBPasillo2 = new QPushButton(tab_4);
        BBPasillo2->setObjectName(QString::fromUtf8("BBPasillo2"));
        BBPasillo2->setGeometry(QRect(90, 270, 121, 31));
        BBOtra2 = new QPushButton(tab_4);
        BBOtra2->setObjectName(QString::fromUtf8("BBOtra2"));
        BBOtra2->setGeometry(QRect(260, 270, 121, 31));
        BLlenarCBPasillos3 = new QPushButton(tab_4);
        BLlenarCBPasillos3->setObjectName(QString::fromUtf8("BLlenarCBPasillos3"));
        BLlenarCBPasillos3->setGeometry(QRect(650, 330, 20, 20));
        confirmacion = new QLabel(tab_4);
        confirmacion->setObjectName(QString::fromUtf8("confirmacion"));
        confirmacion->setGeometry(QRect(480, 150, 151, 121));
        confirmacion_2 = new QLabel(tab_4);
        confirmacion_2->setObjectName(QString::fromUtf8("confirmacion_2"));
        confirmacion_2->setGeometry(QRect(480, 150, 151, 121));
        confirmacion_3 = new QLabel(tab_4);
        confirmacion_3->setObjectName(QString::fromUtf8("confirmacion_3"));
        confirmacion_3->setGeometry(QRect(480, 150, 151, 121));
        tabsClientes->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        LInformacion_8 = new QLabel(tab_5);
        LInformacion_8->setObjectName(QString::fromUtf8("LInformacion_8"));
        LInformacion_8->setGeometry(QRect(190, 40, 261, 41));
        LPasProdMar_8 = new QLabel(tab_5);
        LPasProdMar_8->setObjectName(QString::fromUtf8("LPasProdMar_8"));
        LPasProdMar_8->setGeometry(QRect(90, 160, 55, 16));
        CBPasillos4 = new QComboBox(tab_5);
        CBPasillos4->setObjectName(QString::fromUtf8("CBPasillos4"));
        CBPasillos4->setGeometry(QRect(220, 160, 201, 22));
        BBPrecio4 = new QPushButton(tab_5);
        BBPrecio4->setObjectName(QString::fromUtf8("BBPrecio4"));
        BBPrecio4->setGeometry(QRect(140, 250, 121, 31));
        BBProducto4 = new QPushButton(tab_5);
        BBProducto4->setObjectName(QString::fromUtf8("BBProducto4"));
        BBProducto4->setGeometry(QRect(140, 250, 121, 31));
        BBPasillo4 = new QPushButton(tab_5);
        BBPasillo4->setObjectName(QString::fromUtf8("BBPasillo4"));
        BBPasillo4->setGeometry(QRect(140, 250, 121, 31));
        BBOtra3 = new QPushButton(tab_5);
        BBOtra3->setObjectName(QString::fromUtf8("BBOtra3"));
        BBOtra3->setGeometry(QRect(370, 250, 121, 31));
        BLlenarCBPasillos3_2 = new QPushButton(tab_5);
        BLlenarCBPasillos3_2->setObjectName(QString::fromUtf8("BLlenarCBPasillos3_2"));
        BLlenarCBPasillos3_2->setGeometry(QRect(650, 330, 20, 20));
        CBProductos4 = new QComboBox(tab_5);
        CBProductos4->setObjectName(QString::fromUtf8("CBProductos4"));
        CBProductos4->setGeometry(QRect(220, 160, 201, 22));
        CBMarcas4 = new QComboBox(tab_5);
        CBMarcas4->setObjectName(QString::fromUtf8("CBMarcas4"));
        CBMarcas4->setGeometry(QRect(220, 160, 201, 22));
        sBoxCantidad = new QSpinBox(tab_5);
        sBoxCantidad->setObjectName(QString::fromUtf8("sBoxCantidad"));
        sBoxCantidad->setGeometry(QRect(220, 160, 201, 22));
        BBCanti = new QPushButton(tab_5);
        BBCanti->setObjectName(QString::fromUtf8("BBCanti"));
        BBCanti->setGeometry(QRect(140, 250, 121, 31));
        santaManos = new QLabel(tab_5);
        santaManos->setObjectName(QString::fromUtf8("santaManos"));
        santaManos->setGeometry(QRect(210, 130, 301, 251));
        tabsClientes->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tabsClientes->addTab(tab_6, QString());
        ventanaPrincipalCliente->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ventanaPrincipalCliente);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ventanaPrincipalCliente->setStatusBar(statusbar);

        retranslateUi(ventanaPrincipalCliente);

        tabsClientes->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(ventanaPrincipalCliente);
    } // setupUi

    void retranslateUi(QMainWindow *ventanaPrincipalCliente)
    {
        ventanaPrincipalCliente->setWindowTitle(QCoreApplication::translate("ventanaPrincipalCliente", "MainWindow", nullptr));
        BCancelar->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Cancelar", nullptr));
        LTelefono->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Telefono", nullptr));
        LIngresar->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Ingrese su numero de cedula para ingresar", nullptr));
        LBienvenida->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Bienvenido al supermercado", nullptr));
        LCorreo->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Correo", nullptr));
        BIngresar->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Ingresar", nullptr));
        LNoReg->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Usted no se encuentra registrado", nullptr));
        LCedulaR->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Cedula", nullptr));
        LPregunta->setText(QCoreApplication::translate("ventanaPrincipalCliente", "\302\277Desea registrarse?", nullptr));
        LCiudad->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Ciudad", nullptr));
        LNombre->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Nombre", nullptr));
        BRegistrar->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Registrar", nullptr));
        LDatos->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Ingrese sus datos", nullptr));
        BSi->setText(QCoreApplication::translate("ventanaPrincipalCliente", "S\303\215", nullptr));
        BNo->setText(QCoreApplication::translate("ventanaPrincipalCliente", "NO", nullptr));
        LCedula->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Cedula", nullptr));
        LVerExitosa->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Usted fue verificado existosamente", nullptr));
        LDisfrute->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Disfrute de sus opciones como cliente registrado!!", nullptr));
        LResEx->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Su registro fue \303\251xitoso", nullptr));
        pushButton->setText(QString());
        tabsClientes->setTabText(tabsClientes->indexOf(tab), QCoreApplication::translate("ventanaPrincipalCliente", "    Registro", nullptr));
        LPasProdMar->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Pasillos", nullptr));
        LInformacion->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Seleccione el pasillo de la marca de la que desea conocer el precio", nullptr));
        BBuscarPasillo->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Buscar en pasillo", nullptr));
        BBuscarProd->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Buscar en producto", nullptr));
        BBuscarPrecio->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Buscar Marca", nullptr));
        LColonIma->setText(QString());
        BLlenarCBPasillos->setText(QString());
        BBuscarOtra->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Buscar otra marca", nullptr));
        tabsClientes->setTabText(tabsClientes->indexOf(tab_2), QCoreApplication::translate("ventanaPrincipalCliente", "Consulta de Precio", nullptr));
        LInformacion_2->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Seleccione el pasillo de la marca de la que desea conocer el porcentaje de impuesto", nullptr));
        LPasProdMar_2->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Pasillos", nullptr));
        BBOtra->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Buscar otra marca", nullptr));
        BLlenarCBPasillos_2->setText(QString());
        BBPasillo->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Buscar en pasillo", nullptr));
        BBProd->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Buscar en producto", nullptr));
        BBPrecio->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Buscar Marca", nullptr));
        porcentaje->setText(QString());
        tabsClientes->setTabText(tabsClientes->indexOf(tab_3), QCoreApplication::translate("ventanaPrincipalCliente", "Consulta de Impuesto", nullptr));
        LInformacion_7->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Seleccione el pasillo de la marca de la que desea conocer canastaje", nullptr));
        LPasProdMar_7->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Pasillos", nullptr));
        BBPrecio2->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Buscar Marca", nullptr));
        BBProducto2->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Buscar Marca", nullptr));
        BBPasillo2->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Buscar Marca", nullptr));
        BBOtra2->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Buscar otra marca", nullptr));
        BLlenarCBPasillos3->setText(QString());
        confirmacion->setText(QString());
        confirmacion_2->setText(QString());
        confirmacion_3->setText(QString());
        tabsClientes->setTabText(tabsClientes->indexOf(tab_4), QCoreApplication::translate("ventanaPrincipalCliente", "Consulta de Canasta", nullptr));
        LInformacion_8->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Seleccione el pasillo de la marca que desea comprar", nullptr));
        LPasProdMar_8->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Pasillos", nullptr));
        BBPrecio4->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Buscar Marca", nullptr));
        BBProducto4->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Buscar Productos", nullptr));
        BBPasillo4->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Buscar Pasillos", nullptr));
        BBOtra3->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Finalizar Compra", nullptr));
        BLlenarCBPasillos3_2->setText(QString());
        BBCanti->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Buscar Cantidad", nullptr));
        santaManos->setText(QCoreApplication::translate("ventanaPrincipalCliente", "TextLabel", nullptr));
        tabsClientes->setTabText(tabsClientes->indexOf(tab_5), QCoreApplication::translate("ventanaPrincipalCliente", "Comprar", nullptr));
        tabsClientes->setTabText(tabsClientes->indexOf(tab_6), QCoreApplication::translate("ventanaPrincipalCliente", "Otros", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventanaPrincipalCliente: public Ui_ventanaPrincipalCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPRINCIPALCLIENTE_H
