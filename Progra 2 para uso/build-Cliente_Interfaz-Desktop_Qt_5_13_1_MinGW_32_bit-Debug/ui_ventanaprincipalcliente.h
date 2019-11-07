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
    QLabel *label;
    QWidget *tab_4;
    QWidget *tab_5;
    QWidget *tab_6;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ventanaPrincipalCliente)
    {
        if (ventanaPrincipalCliente->objectName().isEmpty())
            ventanaPrincipalCliente->setObjectName(QString::fromUtf8("ventanaPrincipalCliente"));
        ventanaPrincipalCliente->resize(681, 414);
        centralwidget = new QWidget(ventanaPrincipalCliente);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabsClientes = new QTabWidget(centralwidget);
        tabsClientes->setObjectName(QString::fromUtf8("tabsClientes"));
        tabsClientes->setGeometry(QRect(0, 0, 691, 401));
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
        CBCiudad->addItem(QString());
        CBCiudad->addItem(QString());
        CBCiudad->addItem(QString());
        CBCiudad->addItem(QString());
        CBCiudad->addItem(QString());
        CBCiudad->addItem(QString());
        CBCiudad->addItem(QString());
        CBCiudad->addItem(QString());
        CBCiudad->addItem(QString());
        CBCiudad->addItem(QString());
        CBCiudad->addItem(QString());
        CBCiudad->addItem(QString());
        CBCiudad->addItem(QString());
        CBCiudad->addItem(QString());
        CBCiudad->addItem(QString());
        CBCiudad->addItem(QString());
        CBCiudad->addItem(QString());
        CBCiudad->addItem(QString());
        CBCiudad->addItem(QString());
        CBCiudad->addItem(QString());
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
        BLlenarCBPasillos->setGeometry(QRect(653, 338, 20, 20));
        BBuscarOtra = new QPushButton(tab_2);
        BBuscarOtra->setObjectName(QString::fromUtf8("BBuscarOtra"));
        BBuscarOtra->setGeometry(QRect(260, 270, 121, 31));
        tabsClientes->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label = new QLabel(tab_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 30, 431, 41));
        tabsClientes->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabsClientes->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabsClientes->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tabsClientes->addTab(tab_6, QString());
        ventanaPrincipalCliente->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ventanaPrincipalCliente);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ventanaPrincipalCliente->setStatusBar(statusbar);

        retranslateUi(ventanaPrincipalCliente);

        tabsClientes->setCurrentIndex(0);


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
        CBCiudad->setItemText(0, QCoreApplication::translate("ventanaPrincipalCliente", "No seleccionado", nullptr));
        CBCiudad->setItemText(1, QCoreApplication::translate("ventanaPrincipalCliente", "San Jose", nullptr));
        CBCiudad->setItemText(2, QCoreApplication::translate("ventanaPrincipalCliente", "Catago", nullptr));
        CBCiudad->setItemText(3, QCoreApplication::translate("ventanaPrincipalCliente", "Heredia", nullptr));
        CBCiudad->setItemText(4, QCoreApplication::translate("ventanaPrincipalCliente", "Liberia", nullptr));
        CBCiudad->setItemText(5, QCoreApplication::translate("ventanaPrincipalCliente", "P4", nullptr));
        CBCiudad->setItemText(6, QCoreApplication::translate("ventanaPrincipalCliente", "Buenos Aires", nullptr));
        CBCiudad->setItemText(7, QCoreApplication::translate("ventanaPrincipalCliente", "Tilar\303\241n", nullptr));
        CBCiudad->setItemText(8, QCoreApplication::translate("ventanaPrincipalCliente", "Bagaces", nullptr));
        CBCiudad->setItemText(9, QCoreApplication::translate("ventanaPrincipalCliente", "P3", nullptr));
        CBCiudad->setItemText(10, QCoreApplication::translate("ventanaPrincipalCliente", "Pital", nullptr));
        CBCiudad->setItemText(11, QCoreApplication::translate("ventanaPrincipalCliente", "Puerto Viejo", nullptr));
        CBCiudad->setItemText(12, QCoreApplication::translate("ventanaPrincipalCliente", "Siquirres", nullptr));
        CBCiudad->setItemText(13, QCoreApplication::translate("ventanaPrincipalCliente", "Matina", nullptr));
        CBCiudad->setItemText(14, QCoreApplication::translate("ventanaPrincipalCliente", "P2", nullptr));
        CBCiudad->setItemText(15, QCoreApplication::translate("ventanaPrincipalCliente", "Telire", nullptr));
        CBCiudad->setItemText(16, QCoreApplication::translate("ventanaPrincipalCliente", "Parrita", nullptr));
        CBCiudad->setItemText(17, QCoreApplication::translate("ventanaPrincipalCliente", "Samara", nullptr));
        CBCiudad->setItemText(18, QCoreApplication::translate("ventanaPrincipalCliente", "Jac\303\263", nullptr));
        CBCiudad->setItemText(19, QCoreApplication::translate("ventanaPrincipalCliente", "P1", nullptr));

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
        tabsClientes->setTabText(tabsClientes->indexOf(tab), QCoreApplication::translate("ventanaPrincipalCliente", "Tab 1", nullptr));
        LPasProdMar->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Pasillos", nullptr));
        LInformacion->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Seleccione el pasillo de la marca de la que desea conocer el precio", nullptr));
        BBuscarPasillo->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Buscar en pasillo", nullptr));
        BBuscarProd->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Buscar en producto", nullptr));
        BBuscarPrecio->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Buscar Marca", nullptr));
        LColonIma->setText(QString());
        BLlenarCBPasillos->setText(QString());
        BBuscarOtra->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Buscar otra marca", nullptr));
        tabsClientes->setTabText(tabsClientes->indexOf(tab_2), QCoreApplication::translate("ventanaPrincipalCliente", "Tab 2", nullptr));
        label->setText(QCoreApplication::translate("ventanaPrincipalCliente", "Conozca cuales de nuestros productos pertencen a la canasta b\303\241sica", nullptr));
        tabsClientes->setTabText(tabsClientes->indexOf(tab_3), QCoreApplication::translate("ventanaPrincipalCliente", "Page", nullptr));
        tabsClientes->setTabText(tabsClientes->indexOf(tab_4), QCoreApplication::translate("ventanaPrincipalCliente", "Page", nullptr));
        tabsClientes->setTabText(tabsClientes->indexOf(tab_5), QCoreApplication::translate("ventanaPrincipalCliente", "Page", nullptr));
        tabsClientes->setTabText(tabsClientes->indexOf(tab_6), QCoreApplication::translate("ventanaPrincipalCliente", "Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventanaPrincipalCliente: public Ui_ventanaPrincipalCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPRINCIPALCLIENTE_H
