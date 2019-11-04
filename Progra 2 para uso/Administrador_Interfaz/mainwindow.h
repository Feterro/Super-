#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>
#include <QMainWindow>
#include <QObject>
#include <QThread>
#include <QTcpSocket>
#include "admin.h"
#include "globalizarsocketad.h"

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
    void on_BIngresar_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
