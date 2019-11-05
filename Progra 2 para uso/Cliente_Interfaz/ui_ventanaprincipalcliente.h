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
    QTabWidget *tabWidget;
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
    QWidget *tab_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ventanaPrincipalCliente)
    {
        if (ventanaPrincipalCliente->objectName().isEmpty())
            ventanaPrincipalCliente->setObjectName(QString::fromUtf8("ventanaPrincipalCliente"));
        ventanaPrincipalCliente->resize(474, 390);
        centralwidget = new QWidget(ventanaPrincipalCliente);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 481, 391));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        TTelefono = new QLineEdit(tab);
        TTelefono->setObjectName(QString::fromUtf8("TTelefono"));
        TTelefono->setGeometry(QRect(160, 160, 161, 22));
        BCancelar = new QPushButton(tab);
        BCancelar->setObjectName(QString::fromUtf8("BCancelar"));
        BCancelar->setGeometry(QRect(250, 240, 93, 28));
        TCorreo = new QLineEdit(tab);
        TCorreo->setObjectName(QString::fromUtf8("TCorreo"));
        TCorreo->setGeometry(QRect(160, 190, 161, 22));
        TCedulaR = new QLineEdit(tab);
        TCedulaR->setObjectName(QString::fromUtf8("TCedulaR"));
        TCedulaR->setGeometry(QRect(160, 70, 161, 22));
        TNombre = new QLineEdit(tab);
        TNombre->setObjectName(QString::fromUtf8("TNombre"));
        TNombre->setGeometry(QRect(160, 100, 161, 22));
        LTelefono = new QLabel(tab);
        LTelefono->setObjectName(QString::fromUtf8("LTelefono"));
        LTelefono->setGeometry(QRect(60, 160, 55, 21));
        LIngresar = new QLabel(tab);
        LIngresar->setObjectName(QString::fromUtf8("LIngresar"));
        LIngresar->setGeometry(QRect(90, 130, 291, 21));
        LBienvenida = new QLabel(tab);
        LBienvenida->setObjectName(QString::fromUtf8("LBienvenida"));
        LBienvenida->setGeometry(QRect(140, 70, 171, 16));
        LCorreo = new QLabel(tab);
        LCorreo->setObjectName(QString::fromUtf8("LCorreo"));
        LCorreo->setGeometry(QRect(60, 190, 55, 16));
        BIngresar = new QPushButton(tab);
        BIngresar->setObjectName(QString::fromUtf8("BIngresar"));
        BIngresar->setGeometry(QRect(160, 230, 93, 28));
        LNoReg = new QLabel(tab);
        LNoReg->setObjectName(QString::fromUtf8("LNoReg"));
        LNoReg->setGeometry(QRect(120, 100, 201, 21));
        LCedulaR = new QLabel(tab);
        LCedulaR->setObjectName(QString::fromUtf8("LCedulaR"));
        LCedulaR->setGeometry(QRect(60, 70, 55, 16));
        CBCiudad = new QComboBox(tab);
        CBCiudad->setObjectName(QString::fromUtf8("CBCiudad"));
        CBCiudad->setGeometry(QRect(160, 130, 161, 22));
        LPregunta = new QLabel(tab);
        LPregunta->setObjectName(QString::fromUtf8("LPregunta"));
        LPregunta->setGeometry(QRect(150, 150, 121, 31));
        LCiudad = new QLabel(tab);
        LCiudad->setObjectName(QString::fromUtf8("LCiudad"));
        LCiudad->setGeometry(QRect(60, 130, 55, 16));
        LNombre = new QLabel(tab);
        LNombre->setObjectName(QString::fromUtf8("LNombre"));
        LNombre->setGeometry(QRect(60, 100, 55, 16));
        BRegistrar = new QPushButton(tab);
        BRegistrar->setObjectName(QString::fromUtf8("BRegistrar"));
        BRegistrar->setGeometry(QRect(120, 240, 93, 28));
        LDatos = new QLabel(tab);
        LDatos->setObjectName(QString::fromUtf8("LDatos"));
        LDatos->setGeometry(QRect(170, 30, 111, 16));
        BSi = new QPushButton(tab);
        BSi->setObjectName(QString::fromUtf8("BSi"));
        BSi->setGeometry(QRect(110, 210, 93, 28));
        BNo = new QPushButton(tab);
        BNo->setObjectName(QString::fromUtf8("BNo"));
        BNo->setGeometry(QRect(220, 210, 93, 28));
        TCedula = new QLineEdit(tab);
        TCedula->setObjectName(QString::fromUtf8("TCedula"));
        TCedula->setGeometry(QRect(160, 190, 161, 22));
        LCedula = new QLabel(tab);
        LCedula->setObjectName(QString::fromUtf8("LCedula"));
        LCedula->setGeometry(QRect(100, 190, 55, 16));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        ventanaPrincipalCliente->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ventanaPrincipalCliente);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ventanaPrincipalCliente->setStatusBar(statusbar);

        retranslateUi(ventanaPrincipalCliente);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ventanaPrincipalCliente);
    } // setupUi

    void retranslateUi(QMainWindow *ventanaPrincipalCliente)
    {
        ventanaPrincipalCliente->setWindowTitle(QApplication::translate("ventanaPrincipalCliente", "MainWindow", nullptr));
        BCancelar->setText(QApplication::translate("ventanaPrincipalCliente", "Cancelar", nullptr));
        LTelefono->setText(QApplication::translate("ventanaPrincipalCliente", "Telefono", nullptr));
        LIngresar->setText(QApplication::translate("ventanaPrincipalCliente", "Ingrese su numero de cedula para ingresar", nullptr));
        LBienvenida->setText(QApplication::translate("ventanaPrincipalCliente", "Bienvenido al supermercado", nullptr));
        LCorreo->setText(QApplication::translate("ventanaPrincipalCliente", "Correo", nullptr));
        BIngresar->setText(QApplication::translate("ventanaPrincipalCliente", "Ingresar", nullptr));
        LNoReg->setText(QApplication::translate("ventanaPrincipalCliente", "Usted no se encuentra registrado", nullptr));
        LCedulaR->setText(QApplication::translate("ventanaPrincipalCliente", "Cedula", nullptr));
        LPregunta->setText(QApplication::translate("ventanaPrincipalCliente", "\302\277Desea registrarse?", nullptr));
        LCiudad->setText(QApplication::translate("ventanaPrincipalCliente", "Ciudad", nullptr));
        LNombre->setText(QApplication::translate("ventanaPrincipalCliente", "Nombre", nullptr));
        BRegistrar->setText(QApplication::translate("ventanaPrincipalCliente", "Registrar", nullptr));
        LDatos->setText(QApplication::translate("ventanaPrincipalCliente", "Ingrese sus datos", nullptr));
        BSi->setText(QApplication::translate("ventanaPrincipalCliente", "S\303\215", nullptr));
        BNo->setText(QApplication::translate("ventanaPrincipalCliente", "NO", nullptr));
        LCedula->setText(QApplication::translate("ventanaPrincipalCliente", "Cedula", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ventanaPrincipalCliente", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ventanaPrincipalCliente", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventanaPrincipalCliente: public Ui_ventanaPrincipalCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPRINCIPALCLIENTE_H
