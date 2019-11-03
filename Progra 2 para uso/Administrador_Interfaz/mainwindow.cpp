#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <threadadmin.h>
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_BIngresar_clicked()
{

    emit ThreadAdmin().escribirServidor(QString::fromStdString("XD").toUtf8());
    emit ThreadAdmin().escribirServidor("XV;"+ui->TCodigo->text().toUtf8());
}
