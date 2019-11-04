#include "mainwindow.h"
#include "ui_mainwindow.h"


using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(this, SIGNAL(escribirServidor(QByteArray)),&socketAdmin,SLOT(escribirServidor(QByteArray)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_BIngresar_clicked()
{
    cout<<"1"<<endl;

    cout<<"2"<<endl;
    emit escribirServidor(QString::fromStdString("XD").toUtf8());
    cout<<"3"<<endl;
    emit escribirServidor("XV;"+ui->TCodigo->text().toUtf8());
    cout<<"Codigo "<<ui->TCodigo->text().toUtf8().constData()<<endl;
    cout<<"4"<<endl;
    if (socketAdmin.registro==true){
        cout<<"Hola"<<endl;
    }
    else{
        cout<<"Incorrecto"<<endl;
    }
}
