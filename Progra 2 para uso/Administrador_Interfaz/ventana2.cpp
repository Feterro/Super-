#include "ventana2.h"
#include "ui_ventana2.h"
#include <iostream>
using namespace  std;
ventana2::ventana2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ventana2)
{
    ui->setupUi(this);
}

ventana2::~ventana2()
{
    delete ui;
}

void ventana2::on_pushButton_clicked()
{
//    emit escribirServidor("XV;"+ui->lineEdit->text().toUtf8());
//    cout<<"Codigo "<<ui->lineEdit->text().toUtf8().constData()<<endl;
//    //this->sleep(1);
//    if (socketAdmin.registro==true){
//        cout<<"Hola"<<endl;
//    }
//    else{
//        cout<<"Incorrecto"<<endl;
//    }
}
