/********************************************************************************
** Form generated from reading UI file 'ventanaprincipalcliente.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
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
#include <QtWidgets/QListWidget>
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
    QLineEdit *TCedulaR;
    QLineEdit *TNombre;
    QLabel *LTelefono;
    QLabel *LIngresar;
    QLabel *LBienvenida;
    QLabel *LCorreo;
    QLabel *LCedulaR;
    QLabel *LCiudad;
    QLabel *LNombre;
    QLineEdit *TCedula;
    QLabel *LCedula;
    QPushButton *BIngresar;
    QLabel *LNoReg;
    QLabel *LPregunta;
    QPushButton *BSi;
    QPushButton *BNo;
    QLabel *LDatos;
    QLabel *LVerExitosa;
    QLineEdit *TCorreo;
    QComboBox *CBCiudad;
    QPushButton *BRegistrar;
    QLabel *LResEx;
    QLabel *LDisfrute;
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
    QPushButton *BBCanti;
    QPushButton *BBcarrito;
    QListWidget *viewCompras;
    QLabel *LCarrito;
    QPushButton *BBregresar;
    QSpinBox *sBoxCantidad;
    QLabel *santaManos;
    QLabel *LCanaston;
    QLabel *reg1;
    QLabel *reg6;
    QLabel *reg2;
    QLabel *reg3;
    QLabel *reg7;
    QLabel *reg4;
    QLabel *reg5;
    QWidget *tab_6;
    QLabel *Arb;
    QPushButton *BBFactu;
    QLabel *LabinfFac;
    QSpinBox *spinFact;
    QPushButton *BBRepo;
    QPushButton *BBSPas;
    QPushButton *BBSPro;
    QPushButton *BBSMar;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *CBRpas;
    QComboBox *CBRmar;
    QComboBox *CBRpro;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ventanaPrincipalCliente)
    {
        if (ventanaPrincipalCliente->objectName().isEmpty())
            ventanaPrincipalCliente->setObjectName(QString::fromUtf8("ventanaPrincipalCliente"));
        ventanaPrincipalCliente->resize(690, 458);
        centralwidget = new QWidget(ventanaPrincipalCliente);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabsClientes = new QTabWidget(centralwidget);
        tabsClientes->setObjectName(QString::fromUtf8("tabsClientes"));
        tabsClientes->setGeometry(QRect(0, 0, 691, 441));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        TTelefono = new QLineEdit(tab);
        TTelefono->setObjectName(QString::fromUtf8("TTelefono"));
        TTelefono->setGeometry(QRect(260, 210, 191, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("handwriting-draft_free-version"));
        font.setPointSize(12);
        TTelefono->setFont(font);
        TCedulaR = new QLineEdit(tab);
        TCedulaR->setObjectName(QString::fromUtf8("TCedulaR"));
        TCedulaR->setGeometry(QRect(260, 150, 191, 31));
        TCedulaR->setFont(font);
        TNombre = new QLineEdit(tab);
        TNombre->setObjectName(QString::fromUtf8("TNombre"));
        TNombre->setGeometry(QRect(260, 90, 191, 31));
        TNombre->setFont(font);
        LTelefono = new QLabel(tab);
        LTelefono->setObjectName(QString::fromUtf8("LTelefono"));
        LTelefono->setGeometry(QRect(120, 200, 81, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("St. Nicholas"));
        font1.setPointSize(14);
        LTelefono->setFont(font1);
        LIngresar = new QLabel(tab);
        LIngresar->setObjectName(QString::fromUtf8("LIngresar"));
        LIngresar->setGeometry(QRect(140, 60, 401, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("St. Nicholas"));
        font2.setPointSize(16);
        LIngresar->setFont(font2);
        LBienvenida = new QLabel(tab);
        LBienvenida->setObjectName(QString::fromUtf8("LBienvenida"));
        LBienvenida->setGeometry(QRect(110, 0, 491, 61));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Cartoon Blocks Christmas"));
        font3.setPointSize(26);
        LBienvenida->setFont(font3);
        LCorreo = new QLabel(tab);
        LCorreo->setObjectName(QString::fromUtf8("LCorreo"));
        LCorreo->setGeometry(QRect(120, 260, 71, 31));
        LCorreo->setFont(font1);
        LCedulaR = new QLabel(tab);
        LCedulaR->setObjectName(QString::fromUtf8("LCedulaR"));
        LCedulaR->setGeometry(QRect(120, 150, 71, 31));
        LCedulaR->setFont(font1);
        LCiudad = new QLabel(tab);
        LCiudad->setObjectName(QString::fromUtf8("LCiudad"));
        LCiudad->setGeometry(QRect(120, 320, 71, 31));
        LCiudad->setFont(font1);
        LNombre = new QLabel(tab);
        LNombre->setObjectName(QString::fromUtf8("LNombre"));
        LNombre->setGeometry(QRect(120, 90, 81, 21));
        LNombre->setFont(font1);
        TCedula = new QLineEdit(tab);
        TCedula->setObjectName(QString::fromUtf8("TCedula"));
        TCedula->setGeometry(QRect(260, 140, 191, 31));
        TCedula->setFont(font);
        LCedula = new QLabel(tab);
        LCedula->setObjectName(QString::fromUtf8("LCedula"));
        LCedula->setGeometry(QRect(120, 140, 71, 31));
        LCedula->setFont(font1);
        BIngresar = new QPushButton(tab);
        BIngresar->setObjectName(QString::fromUtf8("BIngresar"));
        BIngresar->setGeometry(QRect(280, 190, 111, 31));
        BIngresar->setFont(font1);
        LNoReg = new QLabel(tab);
        LNoReg->setObjectName(QString::fromUtf8("LNoReg"));
        LNoReg->setGeometry(QRect(10, 70, 671, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("PWChristmasfont"));
        font4.setPointSize(18);
        LNoReg->setFont(font4);
        LPregunta = new QLabel(tab);
        LPregunta->setObjectName(QString::fromUtf8("LPregunta"));
        LPregunta->setGeometry(QRect(100, 100, 431, 51));
        QFont font5;
        font5.setFamily(QString::fromUtf8("PWChristmasfont"));
        font5.setPointSize(20);
        LPregunta->setFont(font5);
        BSi = new QPushButton(tab);
        BSi->setObjectName(QString::fromUtf8("BSi"));
        BSi->setGeometry(QRect(160, 200, 101, 41));
        BSi->setFont(font1);
        BNo = new QPushButton(tab);
        BNo->setObjectName(QString::fromUtf8("BNo"));
        BNo->setGeometry(QRect(360, 200, 101, 41));
        BNo->setFont(font1);
        LDatos = new QLabel(tab);
        LDatos->setObjectName(QString::fromUtf8("LDatos"));
        LDatos->setGeometry(QRect(160, 30, 321, 61));
        LDatos->setFont(font3);
        LVerExitosa = new QLabel(tab);
        LVerExitosa->setObjectName(QString::fromUtf8("LVerExitosa"));
        LVerExitosa->setGeometry(QRect(60, 80, 661, 111));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Snowinter"));
        font6.setPointSize(48);
        LVerExitosa->setFont(font6);
        TCorreo = new QLineEdit(tab);
        TCorreo->setObjectName(QString::fromUtf8("TCorreo"));
        TCorreo->setGeometry(QRect(260, 260, 191, 31));
        TCorreo->setFont(font);
        CBCiudad = new QComboBox(tab);
        CBCiudad->setObjectName(QString::fromUtf8("CBCiudad"));
        CBCiudad->setGeometry(QRect(260, 320, 191, 31));
        CBCiudad->setFont(font);
        BRegistrar = new QPushButton(tab);
        BRegistrar->setObjectName(QString::fromUtf8("BRegistrar"));
        BRegistrar->setGeometry(QRect(280, 360, 121, 41));
        BRegistrar->setFont(font1);
        LResEx = new QLabel(tab);
        LResEx->setObjectName(QString::fromUtf8("LResEx"));
        LResEx->setGeometry(QRect(80, 110, 581, 61));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Snowinter"));
        font7.setPointSize(36);
        LResEx->setFont(font7);
        LDisfrute = new QLabel(tab);
        LDisfrute->setObjectName(QString::fromUtf8("LDisfrute"));
        LDisfrute->setGeometry(QRect(70, 210, 601, 51));
        LDisfrute->setFont(font7);
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(450, 320, 20, 31));
        tabsClientes->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        LCDPrecio = new QLCDNumber(tab_2);
        LCDPrecio->setObjectName(QString::fromUtf8("LCDPrecio"));
        LCDPrecio->setGeometry(QRect(220, 180, 381, 101));
        LPasProdMar = new QLabel(tab_2);
        LPasProdMar->setObjectName(QString::fromUtf8("LPasProdMar"));
        LPasProdMar->setGeometry(QRect(60, 120, 191, 31));
        QFont font8;
        font8.setFamily(QString::fromUtf8("PWChristmasfont"));
        font8.setPointSize(16);
        LPasProdMar->setFont(font8);
        LInformacion = new QLabel(tab_2);
        LInformacion->setObjectName(QString::fromUtf8("LInformacion"));
        LInformacion->setGeometry(QRect(110, 30, 471, 61));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Cartoon Blocks Christmas"));
        font9.setPointSize(28);
        LInformacion->setFont(font9);
        CBMarcas = new QComboBox(tab_2);
        CBMarcas->setObjectName(QString::fromUtf8("CBMarcas"));
        CBMarcas->setGeometry(QRect(230, 120, 201, 31));
        CBMarcas->setFont(font);
        BBuscarPasillo = new QPushButton(tab_2);
        BBuscarPasillo->setObjectName(QString::fromUtf8("BBuscarPasillo"));
        BBuscarPasillo->setGeometry(QRect(290, 310, 141, 31));
        QFont font10;
        font10.setFamily(QString::fromUtf8("St. Nicholas"));
        font10.setPointSize(12);
        BBuscarPasillo->setFont(font10);
        CBProductos = new QComboBox(tab_2);
        CBProductos->setObjectName(QString::fromUtf8("CBProductos"));
        CBProductos->setGeometry(QRect(230, 120, 201, 31));
        CBProductos->setFont(font);
        CBPasillos = new QComboBox(tab_2);
        CBPasillos->setObjectName(QString::fromUtf8("CBPasillos"));
        CBPasillos->setGeometry(QRect(230, 120, 201, 31));
        CBPasillos->setFont(font);
        BBuscarProd = new QPushButton(tab_2);
        BBuscarProd->setObjectName(QString::fromUtf8("BBuscarProd"));
        BBuscarProd->setGeometry(QRect(290, 310, 141, 31));
        BBuscarProd->setFont(font10);
        BBuscarPrecio = new QPushButton(tab_2);
        BBuscarPrecio->setObjectName(QString::fromUtf8("BBuscarPrecio"));
        BBuscarPrecio->setGeometry(QRect(290, 310, 141, 31));
        BBuscarPrecio->setFont(font10);
        LColonIma = new QLabel(tab_2);
        LColonIma->setObjectName(QString::fromUtf8("LColonIma"));
        LColonIma->setGeometry(QRect(130, 190, 81, 81));
        BLlenarCBPasillos = new QPushButton(tab_2);
        BLlenarCBPasillos->setObjectName(QString::fromUtf8("BLlenarCBPasillos"));
        BLlenarCBPasillos->setGeometry(QRect(430, 120, 21, 31));
        BBuscarOtra = new QPushButton(tab_2);
        BBuscarOtra->setObjectName(QString::fromUtf8("BBuscarOtra"));
        BBuscarOtra->setGeometry(QRect(490, 110, 171, 41));
        BBuscarOtra->setFont(font10);
        tabsClientes->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        LInformacion_2 = new QLabel(tab_3);
        LInformacion_2->setObjectName(QString::fromUtf8("LInformacion_2"));
        LInformacion_2->setGeometry(QRect(90, 30, 531, 51));
        LInformacion_2->setFont(font9);
        LPasProdMar_2 = new QLabel(tab_3);
        LPasProdMar_2->setObjectName(QString::fromUtf8("LPasProdMar_2"));
        LPasProdMar_2->setGeometry(QRect(20, 120, 191, 31));
        LPasProdMar_2->setFont(font8);
        CBPasillos2 = new QComboBox(tab_3);
        CBPasillos2->setObjectName(QString::fromUtf8("CBPasillos2"));
        CBPasillos2->setGeometry(QRect(200, 120, 201, 31));
        CBPasillos2->setFont(font);
        BBOtra = new QPushButton(tab_3);
        BBOtra->setObjectName(QString::fromUtf8("BBOtra"));
        BBOtra->setGeometry(QRect(470, 110, 171, 41));
        BBOtra->setFont(font10);
        BLlenarCBPasillos_2 = new QPushButton(tab_3);
        BLlenarCBPasillos_2->setObjectName(QString::fromUtf8("BLlenarCBPasillos_2"));
        BLlenarCBPasillos_2->setGeometry(QRect(400, 120, 20, 31));
        LCDImpuesto = new QLCDNumber(tab_3);
        LCDImpuesto->setObjectName(QString::fromUtf8("LCDImpuesto"));
        LCDImpuesto->setGeometry(QRect(140, 180, 371, 101));
        BBPasillo = new QPushButton(tab_3);
        BBPasillo->setObjectName(QString::fromUtf8("BBPasillo"));
        BBPasillo->setGeometry(QRect(230, 300, 141, 31));
        BBPasillo->setFont(font10);
        BBProd = new QPushButton(tab_3);
        BBProd->setObjectName(QString::fromUtf8("BBProd"));
        BBProd->setGeometry(QRect(230, 300, 141, 31));
        BBProd->setFont(font10);
        BBPrecio = new QPushButton(tab_3);
        BBPrecio->setObjectName(QString::fromUtf8("BBPrecio"));
        BBPrecio->setGeometry(QRect(230, 300, 141, 31));
        BBPrecio->setFont(font10);
        CBProductos2 = new QComboBox(tab_3);
        CBProductos2->setObjectName(QString::fromUtf8("CBProductos2"));
        CBProductos2->setGeometry(QRect(200, 120, 201, 31));
        CBProductos2->setFont(font);
        CBMarcas2 = new QComboBox(tab_3);
        CBMarcas2->setObjectName(QString::fromUtf8("CBMarcas2"));
        CBMarcas2->setGeometry(QRect(200, 120, 201, 31));
        CBMarcas2->setFont(font);
        porcentaje = new QLabel(tab_3);
        porcentaje->setObjectName(QString::fromUtf8("porcentaje"));
        porcentaje->setGeometry(QRect(520, 190, 91, 81));
        tabsClientes->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        LInformacion_7 = new QLabel(tab_4);
        LInformacion_7->setObjectName(QString::fromUtf8("LInformacion_7"));
        LInformacion_7->setGeometry(QRect(90, 40, 521, 51));
        LInformacion_7->setFont(font9);
        CBMarcas3 = new QComboBox(tab_4);
        CBMarcas3->setObjectName(QString::fromUtf8("CBMarcas3"));
        CBMarcas3->setGeometry(QRect(200, 190, 201, 31));
        CBMarcas3->setFont(font);
        LPasProdMar_7 = new QLabel(tab_4);
        LPasProdMar_7->setObjectName(QString::fromUtf8("LPasProdMar_7"));
        LPasProdMar_7->setGeometry(QRect(20, 190, 171, 31));
        LPasProdMar_7->setFont(font8);
        CBProductos3 = new QComboBox(tab_4);
        CBProductos3->setObjectName(QString::fromUtf8("CBProductos3"));
        CBProductos3->setGeometry(QRect(200, 190, 201, 31));
        CBProductos3->setFont(font);
        CBPasillos3 = new QComboBox(tab_4);
        CBPasillos3->setObjectName(QString::fromUtf8("CBPasillos3"));
        CBPasillos3->setGeometry(QRect(200, 190, 201, 31));
        CBPasillos3->setFont(font);
        BBPrecio2 = new QPushButton(tab_4);
        BBPrecio2->setObjectName(QString::fromUtf8("BBPrecio2"));
        BBPrecio2->setGeometry(QRect(230, 240, 141, 31));
        BBPrecio2->setFont(font10);
        BBProducto2 = new QPushButton(tab_4);
        BBProducto2->setObjectName(QString::fromUtf8("BBProducto2"));
        BBProducto2->setGeometry(QRect(230, 240, 141, 31));
        BBProducto2->setFont(font10);
        BBPasillo2 = new QPushButton(tab_4);
        BBPasillo2->setObjectName(QString::fromUtf8("BBPasillo2"));
        BBPasillo2->setGeometry(QRect(230, 240, 141, 31));
        BBPasillo2->setFont(font10);
        BBOtra2 = new QPushButton(tab_4);
        BBOtra2->setObjectName(QString::fromUtf8("BBOtra2"));
        BBOtra2->setGeometry(QRect(440, 290, 181, 41));
        BBOtra2->setFont(font10);
        BLlenarCBPasillos3 = new QPushButton(tab_4);
        BLlenarCBPasillos3->setObjectName(QString::fromUtf8("BLlenarCBPasillos3"));
        BLlenarCBPasillos3->setGeometry(QRect(400, 190, 20, 31));
        confirmacion = new QLabel(tab_4);
        confirmacion->setObjectName(QString::fromUtf8("confirmacion"));
        confirmacion->setGeometry(QRect(480, 150, 151, 121));
        confirmacion_2 = new QLabel(tab_4);
        confirmacion_2->setObjectName(QString::fromUtf8("confirmacion_2"));
        confirmacion_2->setGeometry(QRect(480, 150, 151, 121));
        confirmacion_3 = new QLabel(tab_4);
        confirmacion_3->setObjectName(QString::fromUtf8("confirmacion_3"));
        confirmacion_3->setGeometry(QRect(500, 150, 151, 121));
        tabsClientes->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        LInformacion_8 = new QLabel(tab_5);
        LInformacion_8->setObjectName(QString::fromUtf8("LInformacion_8"));
        LInformacion_8->setGeometry(QRect(170, 20, 331, 51));
        LInformacion_8->setFont(font9);
        LPasProdMar_8 = new QLabel(tab_5);
        LPasProdMar_8->setObjectName(QString::fromUtf8("LPasProdMar_8"));
        LPasProdMar_8->setGeometry(QRect(50, 150, 171, 31));
        LPasProdMar_8->setFont(font8);
        CBPasillos4 = new QComboBox(tab_5);
        CBPasillos4->setObjectName(QString::fromUtf8("CBPasillos4"));
        CBPasillos4->setGeometry(QRect(230, 150, 201, 31));
        QFont font11;
        font11.setFamily(QString::fromUtf8("handwriting-draft_free-version"));
        font11.setPointSize(10);
        CBPasillos4->setFont(font11);
        BBPrecio4 = new QPushButton(tab_5);
        BBPrecio4->setObjectName(QString::fromUtf8("BBPrecio4"));
        BBPrecio4->setGeometry(QRect(60, 220, 231, 31));
        BBPrecio4->setFont(font10);
        BBProducto4 = new QPushButton(tab_5);
        BBProducto4->setObjectName(QString::fromUtf8("BBProducto4"));
        BBProducto4->setGeometry(QRect(60, 220, 231, 31));
        BBProducto4->setFont(font10);
        BBPasillo4 = new QPushButton(tab_5);
        BBPasillo4->setObjectName(QString::fromUtf8("BBPasillo4"));
        BBPasillo4->setGeometry(QRect(60, 220, 231, 31));
        BBPasillo4->setFont(font10);
        BBOtra3 = new QPushButton(tab_5);
        BBOtra3->setObjectName(QString::fromUtf8("BBOtra3"));
        BBOtra3->setGeometry(QRect(350, 220, 231, 31));
        BBOtra3->setFont(font10);
        BLlenarCBPasillos3_2 = new QPushButton(tab_5);
        BLlenarCBPasillos3_2->setObjectName(QString::fromUtf8("BLlenarCBPasillos3_2"));
        BLlenarCBPasillos3_2->setGeometry(QRect(430, 150, 20, 31));
        CBProductos4 = new QComboBox(tab_5);
        CBProductos4->setObjectName(QString::fromUtf8("CBProductos4"));
        CBProductos4->setGeometry(QRect(230, 150, 201, 31));
        CBProductos4->setFont(font11);
        CBMarcas4 = new QComboBox(tab_5);
        CBMarcas4->setObjectName(QString::fromUtf8("CBMarcas4"));
        CBMarcas4->setGeometry(QRect(230, 150, 201, 31));
        CBMarcas4->setFont(font11);
        BBCanti = new QPushButton(tab_5);
        BBCanti->setObjectName(QString::fromUtf8("BBCanti"));
        BBCanti->setGeometry(QRect(60, 220, 231, 31));
        BBCanti->setFont(font10);
        BBcarrito = new QPushButton(tab_5);
        BBcarrito->setObjectName(QString::fromUtf8("BBcarrito"));
        BBcarrito->setGeometry(QRect(260, 280, 131, 31));
        BBcarrito->setFont(font10);
        viewCompras = new QListWidget(tab_5);
        viewCompras->setObjectName(QString::fromUtf8("viewCompras"));
        viewCompras->setGeometry(QRect(410, 80, 256, 192));
        QFont font12;
        font12.setFamily(QString::fromUtf8("Candy Cane (Unregistered)"));
        font12.setPointSize(14);
        viewCompras->setFont(font12);
        LCarrito = new QLabel(tab_5);
        LCarrito->setObjectName(QString::fromUtf8("LCarrito"));
        LCarrito->setGeometry(QRect(100, 20, 451, 51));
        LCarrito->setFont(font9);
        BBregresar = new QPushButton(tab_5);
        BBregresar->setObjectName(QString::fromUtf8("BBregresar"));
        BBregresar->setGeometry(QRect(460, 290, 151, 31));
        BBregresar->setFont(font10);
        sBoxCantidad = new QSpinBox(tab_5);
        sBoxCantidad->setObjectName(QString::fromUtf8("sBoxCantidad"));
        sBoxCantidad->setGeometry(QRect(230, 150, 221, 31));
        sBoxCantidad->setFont(font11);
        santaManos = new QLabel(tab_5);
        santaManos->setObjectName(QString::fromUtf8("santaManos"));
        santaManos->setGeometry(QRect(100, 230, 211, 161));
        LCanaston = new QLabel(tab_5);
        LCanaston->setObjectName(QString::fromUtf8("LCanaston"));
        LCanaston->setGeometry(QRect(20, 70, 451, 231));
        reg1 = new QLabel(tab_5);
        reg1->setObjectName(QString::fromUtf8("reg1"));
        reg1->setGeometry(QRect(110, 180, 101, 91));
        reg6 = new QLabel(tab_5);
        reg6->setObjectName(QString::fromUtf8("reg6"));
        reg6->setGeometry(QRect(140, 180, 111, 101));
        reg2 = new QLabel(tab_5);
        reg2->setObjectName(QString::fromUtf8("reg2"));
        reg2->setGeometry(QRect(90, 160, 111, 101));
        reg3 = new QLabel(tab_5);
        reg3->setObjectName(QString::fromUtf8("reg3"));
        reg3->setGeometry(QRect(50, 130, 111, 101));
        reg7 = new QLabel(tab_5);
        reg7->setObjectName(QString::fromUtf8("reg7"));
        reg7->setGeometry(QRect(140, 150, 111, 101));
        reg4 = new QLabel(tab_5);
        reg4->setObjectName(QString::fromUtf8("reg4"));
        reg4->setGeometry(QRect(170, 160, 111, 101));
        reg5 = new QLabel(tab_5);
        reg5->setObjectName(QString::fromUtf8("reg5"));
        reg5->setGeometry(QRect(200, 110, 131, 111));
        tabsClientes->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        Arb = new QLabel(tab_6);
        Arb->setObjectName(QString::fromUtf8("Arb"));
        Arb->setGeometry(QRect(460, 130, 201, 261));
        BBFactu = new QPushButton(tab_6);
        BBFactu->setObjectName(QString::fromUtf8("BBFactu"));
        BBFactu->setGeometry(QRect(50, 30, 361, 41));
        BBFactu->setFont(font10);
        LabinfFac = new QLabel(tab_6);
        LabinfFac->setObjectName(QString::fromUtf8("LabinfFac"));
        LabinfFac->setGeometry(QRect(10, 70, 591, 31));
        QFont font13;
        font13.setFamily(QString::fromUtf8("PWChristmasfont"));
        font13.setPointSize(12);
        LabinfFac->setFont(font13);
        spinFact = new QSpinBox(tab_6);
        spinFact->setObjectName(QString::fromUtf8("spinFact"));
        spinFact->setGeometry(QRect(50, 110, 361, 31));
        QFont font14;
        font14.setFamily(QString::fromUtf8("handwriting-draft_free-version"));
        font14.setPointSize(11);
        spinFact->setFont(font14);
        BBRepo = new QPushButton(tab_6);
        BBRepo->setObjectName(QString::fromUtf8("BBRepo"));
        BBRepo->setGeometry(QRect(50, 170, 361, 41));
        BBRepo->setFont(font10);
        BBSPas = new QPushButton(tab_6);
        BBSPas->setObjectName(QString::fromUtf8("BBSPas"));
        BBSPas->setGeometry(QRect(350, 230, 91, 31));
        QFont font15;
        font15.setFamily(QString::fromUtf8("St. Nicholas"));
        font15.setPointSize(11);
        BBSPas->setFont(font15);
        BBSPro = new QPushButton(tab_6);
        BBSPro->setObjectName(QString::fromUtf8("BBSPro"));
        BBSPro->setGeometry(QRect(350, 300, 91, 31));
        QFont font16;
        font16.setFamily(QString::fromUtf8("St. Nicholas"));
        font16.setPointSize(10);
        BBSPro->setFont(font16);
        BBSMar = new QPushButton(tab_6);
        BBSMar->setObjectName(QString::fromUtf8("BBSMar"));
        BBSMar->setGeometry(QRect(350, 370, 91, 31));
        BBSMar->setFont(font16);
        label = new QLabel(tab_6);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 230, 81, 20));
        label->setFont(font16);
        label_2 = new QLabel(tab_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 300, 111, 20));
        label_2->setFont(font16);
        label_3 = new QLabel(tab_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 370, 81, 20));
        label_3->setFont(font16);
        CBRpas = new QComboBox(tab_6);
        CBRpas->setObjectName(QString::fromUtf8("CBRpas"));
        CBRpas->setGeometry(QRect(140, 230, 211, 22));
        CBRpas->setFont(font11);
        CBRmar = new QComboBox(tab_6);
        CBRmar->setObjectName(QString::fromUtf8("CBRmar"));
        CBRmar->setGeometry(QRect(140, 370, 211, 22));
        CBRmar->setFont(font11);
        CBRpro = new QComboBox(tab_6);
        CBRpro->setObjectName(QString::fromUtf8("CBRpro"));
        CBRpro->setGeometry(QRect(140, 300, 211, 22));
        CBRpro->setFont(font11);
        tabsClientes->addTab(tab_6, QString());
        ventanaPrincipalCliente->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ventanaPrincipalCliente);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ventanaPrincipalCliente->setStatusBar(statusbar);

        retranslateUi(ventanaPrincipalCliente);

        tabsClientes->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(ventanaPrincipalCliente);
    } // setupUi

    void retranslateUi(QMainWindow *ventanaPrincipalCliente)
    {
        ventanaPrincipalCliente->setWindowTitle(QApplication::translate("ventanaPrincipalCliente", "MainWindow", nullptr));
        LTelefono->setText(QApplication::translate("ventanaPrincipalCliente", "Telefono", nullptr));
        LIngresar->setText(QApplication::translate("ventanaPrincipalCliente", "Digite su numero de cedula para ingresar", nullptr));
        LBienvenida->setText(QApplication::translate("ventanaPrincipalCliente", "Bienvenido al supermercado", nullptr));
        LCorreo->setText(QApplication::translate("ventanaPrincipalCliente", "Correo", nullptr));
        LCedulaR->setText(QApplication::translate("ventanaPrincipalCliente", "Cedula", nullptr));
        LCiudad->setText(QApplication::translate("ventanaPrincipalCliente", "Ciudad", nullptr));
        LNombre->setText(QApplication::translate("ventanaPrincipalCliente", "Nombre", nullptr));
        LCedula->setText(QApplication::translate("ventanaPrincipalCliente", "Cedula", nullptr));
        BIngresar->setText(QApplication::translate("ventanaPrincipalCliente", "Ingresar", nullptr));
        LNoReg->setText(QApplication::translate("ventanaPrincipalCliente", "Usted no se encuentra registrado", nullptr));
        LPregunta->setText(QApplication::translate("ventanaPrincipalCliente", "Desea registrarse?", nullptr));
        BSi->setText(QApplication::translate("ventanaPrincipalCliente", "S\303\215", nullptr));
        BNo->setText(QApplication::translate("ventanaPrincipalCliente", "NO", nullptr));
        LDatos->setText(QApplication::translate("ventanaPrincipalCliente", "Ingrese sus datos", nullptr));
        LVerExitosa->setText(QApplication::translate("ventanaPrincipalCliente", "Usted fue verificado ", nullptr));
        BRegistrar->setText(QApplication::translate("ventanaPrincipalCliente", "Registrar", nullptr));
        LResEx->setText(QApplication::translate("ventanaPrincipalCliente", "Su registro fue exitoso", nullptr));
        LDisfrute->setText(QApplication::translate("ventanaPrincipalCliente", "Disfrute de sus opciones", nullptr));
        pushButton->setText(QString());
        tabsClientes->setTabText(tabsClientes->indexOf(tab), QApplication::translate("ventanaPrincipalCliente", "    Registro", nullptr));
        LPasProdMar->setText(QApplication::translate("ventanaPrincipalCliente", "Pasillo", nullptr));
        LInformacion->setText(QApplication::translate("ventanaPrincipalCliente", "CONSULTAR PRECIO", nullptr));
        BBuscarPasillo->setText(QApplication::translate("ventanaPrincipalCliente", "PASILLO", nullptr));
        BBuscarProd->setText(QApplication::translate("ventanaPrincipalCliente", "PRODUCTO", nullptr));
        BBuscarPrecio->setText(QApplication::translate("ventanaPrincipalCliente", "MARCA", nullptr));
        LColonIma->setText(QString());
        BLlenarCBPasillos->setText(QString());
        BBuscarOtra->setText(QApplication::translate("ventanaPrincipalCliente", "BUSCAR OTRA", nullptr));
        tabsClientes->setTabText(tabsClientes->indexOf(tab_2), QApplication::translate("ventanaPrincipalCliente", "Consulta de Precio", nullptr));
        LInformacion_2->setText(QApplication::translate("ventanaPrincipalCliente", "CONSULTAR IMPUESTO", nullptr));
        LPasProdMar_2->setText(QApplication::translate("ventanaPrincipalCliente", "Pasillo", nullptr));
        BBOtra->setText(QApplication::translate("ventanaPrincipalCliente", "BUSCAR OTRA", nullptr));
        BLlenarCBPasillos_2->setText(QString());
        BBPasillo->setText(QApplication::translate("ventanaPrincipalCliente", "PASILLO", nullptr));
        BBProd->setText(QApplication::translate("ventanaPrincipalCliente", "PRODUCTO", nullptr));
        BBPrecio->setText(QApplication::translate("ventanaPrincipalCliente", "MARCA", nullptr));
        porcentaje->setText(QString());
        tabsClientes->setTabText(tabsClientes->indexOf(tab_3), QApplication::translate("ventanaPrincipalCliente", "Consulta de Impuesto", nullptr));
        LInformacion_7->setText(QApplication::translate("ventanaPrincipalCliente", "CONSULTAR CANASTA ", nullptr));
        LPasProdMar_7->setText(QApplication::translate("ventanaPrincipalCliente", "Pasillos", nullptr));
        BBPrecio2->setText(QApplication::translate("ventanaPrincipalCliente", "MARCA", nullptr));
        BBProducto2->setText(QApplication::translate("ventanaPrincipalCliente", "PRODUCTO", nullptr));
        BBPasillo2->setText(QApplication::translate("ventanaPrincipalCliente", "PASILLO", nullptr));
        BBOtra2->setText(QApplication::translate("ventanaPrincipalCliente", "BUSCAR OTRA", nullptr));
        BLlenarCBPasillos3->setText(QString());
        confirmacion->setText(QString());
        confirmacion_2->setText(QString());
        confirmacion_3->setText(QString());
        tabsClientes->setTabText(tabsClientes->indexOf(tab_4), QApplication::translate("ventanaPrincipalCliente", "Consulta de Canasta", nullptr));
        LInformacion_8->setText(QApplication::translate("ventanaPrincipalCliente", "COMPRANDO", nullptr));
        LPasProdMar_8->setText(QApplication::translate("ventanaPrincipalCliente", "Pasillos", nullptr));
        BBPrecio4->setText(QApplication::translate("ventanaPrincipalCliente", "MARCA", nullptr));
        BBProducto4->setText(QApplication::translate("ventanaPrincipalCliente", "PRODUCTO", nullptr));
        BBPasillo4->setText(QApplication::translate("ventanaPrincipalCliente", "PASILLO", nullptr));
        BBOtra3->setText(QApplication::translate("ventanaPrincipalCliente", "FINALIZAR COMPRA", nullptr));
        BLlenarCBPasillos3_2->setText(QString());
        BBCanti->setText(QApplication::translate("ventanaPrincipalCliente", "CANTIDAD", nullptr));
        BBcarrito->setText(QApplication::translate("ventanaPrincipalCliente", "CARRITO", nullptr));
        LCarrito->setText(QApplication::translate("ventanaPrincipalCliente", "CARRITO COMPRAS", nullptr));
        BBregresar->setText(QApplication::translate("ventanaPrincipalCliente", "REGRESAR", nullptr));
        santaManos->setText(QString());
        LCanaston->setText(QString());
        reg1->setText(QString());
        reg6->setText(QString());
        reg2->setText(QString());
        reg3->setText(QString());
        reg7->setText(QString());
        reg4->setText(QString());
        reg5->setText(QString());
        tabsClientes->setTabText(tabsClientes->indexOf(tab_5), QApplication::translate("ventanaPrincipalCliente", "Comprar", nullptr));
        Arb->setText(QString());
        BBFactu->setText(QApplication::translate("ventanaPrincipalCliente", "GENERAR FACTURA", nullptr));
        LabinfFac->setText(QApplication::translate("ventanaPrincipalCliente", "Digite el numero de factura que desea obtener", nullptr));
        BBRepo->setText(QApplication::translate("ventanaPrincipalCliente", "GENERAR REPORTES", nullptr));
        BBSPas->setText(QApplication::translate("ventanaPrincipalCliente", "BUSCAR", nullptr));
        BBSPro->setText(QApplication::translate("ventanaPrincipalCliente", "BUSCAR", nullptr));
        BBSMar->setText(QApplication::translate("ventanaPrincipalCliente", "BUSCAR", nullptr));
        label->setText(QApplication::translate("ventanaPrincipalCliente", "PASILLO", nullptr));
        label_2->setText(QApplication::translate("ventanaPrincipalCliente", "PRODUCTO", nullptr));
        label_3->setText(QApplication::translate("ventanaPrincipalCliente", "MARCA", nullptr));
        tabsClientes->setTabText(tabsClientes->indexOf(tab_6), QApplication::translate("ventanaPrincipalCliente", "Otros", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventanaPrincipalCliente: public Ui_ventanaPrincipalCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPRINCIPALCLIENTE_H
