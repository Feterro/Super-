#include "ventanaprincipalcliente.h"
#include "ui_ventanaprincipalcliente.h"

ventanaPrincipalCliente::ventanaPrincipalCliente(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ventanaPrincipalCliente)
{
    ui->setupUi(this);
    ui->LNoReg->setVisible(false);
    ui->LPregunta->setVisible(false);
    ui->BNo->setVisible(false);
    ui->BSi->setVisible(false);
    ui->LCedulaR->setVisible(false);
    ui->LNombre->setVisible(false);
    ui->LCorreo->setVisible(false);
    ui->LTelefono->setVisible(false);
    ui->LCiudad->setVisible(false);
    ui->CBCiudad->setVisible(false);
    ui->TCedulaR->setVisible(false);
    ui->TNombre->setVisible(false);
    ui->TCorreo->setVisible(false);
    ui->TTelefono->setVisible(false);
    ui->BRegistrar->setVisible(false);
    ui->BCancelar->setVisible(false);
    ui->LDatos->setVisible(false);
    connect(this, SIGNAL(escribirServidor(QByteArray)),&socketCli,SLOT(escribirServidor(QByteArray)));
}

ventanaPrincipalCliente::~ventanaPrincipalCliente()
{
    delete ui;
}

void ventanaPrincipalCliente::on_BIngresar_clicked()
{

    if(socketCli.registro){
        //Codigo para menu
        cout<<"Cliente valido"<<endl;
    }
    else{
        cout<<"invalido"<<endl;
//        ui->LBienvenida->setVisible(false);
//        ui->BIngresar->setVisible(false);
//        ui->TCedula->setVisible(false);
//        ui->LIngresar->setVisible(false);
//        ui->LCedula->setVisible(false);
//        ui->LNoReg->setVisible(true);
//        ui->LPregunta->setVisible(true);
//        ui->BNo->setVisible(true);
//        ui->BSi->setVisible(true);
    }
}

void ventanaPrincipalCliente::on_BNo_clicked()
{
    //Menu de cliente no registrado
}

void ventanaPrincipalCliente::on_BSi_clicked()
{
    //Registrar Cliente
    ui->LPregunta->setVisible(false);
    ui->LNoReg->setVisible(false);
    ui->BNo->setVisible(false);
    ui->BSi->setVisible(false);
    ui->LDatos->setVisible(true);
    ui->LCedulaR->setVisible(true);
    ui->TCedulaR->setVisible(true);
    ui->LNombre->setVisible(true);
    ui->TNombre->setVisible(true);
    ui->CBCiudad->setVisible(true);
    ui->LCiudad->setVisible(true);
    ui->LTelefono->setVisible(true);
    ui->TTelefono->setVisible(true);
    ui->LCorreo->setVisible(true);
    ui->TCorreo->setVisible(true);
    ui->BRegistrar->setVisible(true);
    ui->BCancelar->setVisible(true);
}

void ventanaPrincipalCliente::on_TCedula_returnPressed()
{
    cout<<"textline"<<endl;
    QString cedula=ui->TCedula->text();
    emit escribirServidor("IN"+cedula.toUtf8());
    cout<<"Hola"<<endl;
    thread()->sleep(1);
    cout<<"Despues"<<endl;
}
