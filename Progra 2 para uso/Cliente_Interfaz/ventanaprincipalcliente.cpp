#include "ventanaprincipalcliente.h"
#include "ui_ventanaprincipalcliente.h"

ventanaPrincipalCliente::ventanaPrincipalCliente(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ventanaPrincipalCliente)
{

    ui->setupUi(this);
    this->setFixedSize (size ());
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
    ui->LDatos->setVisible(false);
    ui->BIngresar->setEnabled(false);
    ui->LVerExitosa->setVisible(false);
    ui->LDisfrute->setVisible(false);
    ui->LResEx->setVisible(false);
    ui->LDatos->setVisible(false);
    ui->BRegistrar->setVisible(false);
    ui->tabsClientes->setTabEnabled(4, false);
    ui->tabsClientes->setTabEnabled(5, false);
    ui->CBMarcas->setVisible(false);
    ui->CBProductos->setVisible(false);
    ui->BBuscarProd->setVisible(false);
    ui->BBuscarPrecio->setVisible(false);
    ui->LCDPrecio->setDecMode();
    ui->BBuscarPasillo->setEnabled(false);
    QPixmap colon(":/ima/Images/colon4.png");
    ui->LColonIma->setPixmap(colon);
    ui->BBPasillo->setEnabled(false);
    ui->BBProd->setVisible(false);
    ui->BBPrecio->setVisible(false);
    ui->CBProductos2->setVisible(false);
    ui->CBMarcas2->setVisible(false);
    QPixmap porciento(":/ima/Images/porcentaje.png");
    ui->porcentaje->setPixmap(porciento);
    QPixmap cana(":/ima/Images/canasta.png");
    QPixmap conf(":/ima/Images/check.jpg");
    QPixmap nega(":/ima/Images/equis.png");
    ui->confirmacion->setPixmap(conf);
    ui->confirmacion_2->setPixmap(nega);
    ui->confirmacion_3->setPixmap(cana);
    ui->confirmacion->setVisible(false);
    ui->confirmacion_2->setVisible(false);
    ui->BBPasillo2->setEnabled(false);
    ui->BBProducto2->setVisible(false);
    ui->BBPrecio2->setVisible(false);
    ui->CBProductos3->setVisible(false);
    ui->CBMarcas3->setVisible(false);
    ui->BBPasillo4->setEnabled(false);
    ui->BBProducto4->setVisible(false);
    ui->BBPrecio4->setVisible(false);
    ui->CBProductos4->setVisible(false);
    ui->CBMarcas4->setVisible(false);
    ui->sBoxCantidad->setVisible(false);
    ui->BBCanti->setVisible(false);
    QPixmap sanCom(":/ima/Images/santamanosarriba.png");
    QPixmap canSanta(":/ima/Images/ovalo.png");
    QPixmap rega1(":/ima/Images/regalo1.png");
    QPixmap rega2(":/ima/Images/regalo2.png");
    QPixmap rega3(":/ima/Images/regalo3.png");
    QPixmap rega4(":/ima/Images/regalo4.png");
    QPixmap rega5(":/ima/Images/regalo5.png");
    QPixmap rega6(":/ima/Images/regalo6.png");
    QPixmap rega7(":/ima/Images/regalo7.png");
    QPixmap arbol(":/ima/Images/arbol.png");
    ui->Arb->setPixmap(arbol);
    ui->reg1->setPixmap(rega1);
    ui->reg2->setPixmap(rega2);
    ui->reg3->setPixmap(rega3);
    ui->reg4->setPixmap(rega4);
    ui->reg5->setPixmap(rega5);
    ui->reg6->setPixmap(rega6);
    ui->reg7->setPixmap(rega7);
    ui->reg1->setVisible(false);
    ui->reg2->setVisible(false);
    ui->reg3->setVisible(false);
    ui->reg4->setVisible(false);
    ui->reg5->setVisible(false);
    ui->reg6->setVisible(false);
    ui->reg7->setVisible(false);
    ui->LCanaston->setPixmap(canSanta);
    ui->LCanaston->setVisible(false);
    ui->santaManos->setPixmap(sanCom);
    ui->santaManos->setVisible(false);
    ui->BBcarrito->setVisible(false);
    ui->BBregresar->setVisible(false);
    ui->viewCompras->setVisible(false);
    ui->sBoxCantidad->setMinimum(1);
    ui->spinFact->setMinimum(1);
    ui->BBSPro->setEnabled(false);
    ui->BBSMar->setEnabled(false);

    connect(this, SIGNAL(escribirServidor(QByteArray)),&socketCli,SLOT(escribirServidor(QByteArray)));
}

ventanaPrincipalCliente::~ventanaPrincipalCliente()
{
    delete ui;
}

void ventanaPrincipalCliente::on_BIngresar_clicked()
{

    if(socketCli.registro){
        ui->LDisfrute->setVisible(true);
        ui->LVerExitosa->setVisible(true);
        ui->LCedula->setVisible(false);
        ui->TCedula->setVisible(false);
        ui->BIngresar->setVisible(false);
        ui->LBienvenida->setVisible(false);
        ui->LIngresar->setVisible(false);
        ui->tabsClientes->setTabEnabled(4, true);
        ui->tabsClientes->setTabEnabled(5, true);
    }
    else{
        ui->LBienvenida->setVisible(false);
        ui->BIngresar->setVisible(false);
        ui->TCedula->setVisible(false);
        ui->LIngresar->setVisible(false);
        ui->LCedula->setVisible(false);
        ui->LNoReg->setVisible(true);
        ui->LPregunta->setVisible(true);
        ui->BNo->setVisible(true);
        ui->BSi->setVisible(true);
        emit escribirServidor(QString::fromStdString("XX").toUtf8());
    }
}

void ventanaPrincipalCliente::on_BNo_clicked()
{
    ui->BNo->setVisible(false);
    ui->BSi->setVisible(false);
    ui->LNoReg->setVisible(false);
    ui->LPregunta->setText("Usted decidio no registrarse");
}

void ventanaPrincipalCliente::on_BSi_clicked()
{
    if (!socketCli.bloqueo){
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
        ui->CBProductos->setVisible(false);
        ui->CBMarcas->setVisible(false);
        ui->BBuscarProd->setVisible(false);
        ui->BBuscarPrecio->setVisible(false);
    }
    else{
        QMessageBox::information(
            this,
            tr("Atención"),
            tr("El servidor está siendo actulizado, espere unos minutos.") );

    }
}

void ventanaPrincipalCliente::on_TCedula_returnPressed()
{
    QString cedula=ui->TCedula->text();
    emit escribirServidor("IN"+cedula.toUtf8());
    ui->BIngresar->setEnabled(true);
}

void ventanaPrincipalCliente::on_BRegistrar_clicked()
{
   // cout<<"Holas"<<endl;
    string codCiu;
    QString ced=ui->TCedulaR->text();
    string cedula= ced.toLocal8Bit().constData();
    QString nomb=ui->TNombre->text();
    string nombre= nomb.toLocal8Bit().constData();
    QString tele=ui->TTelefono->text();
    string telefono= tele.toLocal8Bit().constData();
    QString cor=ui->TCorreo->text();
    string correo= cor.toLocal8Bit().constData();
    QString ciu=ui->CBCiudad->currentText();
    cout<<ced.isEmpty()<<endl;
    if (ced.isEmpty()||nomb.isEmpty()||tele.isEmpty()||cor.isEmpty()){
        cout<<"If"<<endl;
        QMessageBox::warning(
            this,
            tr("Advertencia"),
            tr("Seleccione una ciudad valida") );
        if (ced.isEmpty()&&!nomb.isEmpty()&&tele.isEmpty()&&cor.isEmpty()){
            QMessageBox::warning(
            this,
            tr("Advertencia"),
            tr("No deje espacios en blanco") );
        }

    }
    else{
        string ciud=ciu.toLocal8Bit().constData();
        char cstr[ciud.size() + 1];
        strcpy(cstr, ciud.c_str());
        char var[]=";";
        char *token = strtok(cstr,var);
        token = strtok(NULL,var);
        string nuevReg=";"+cedula+";"+nombre+";"+codCiu+";"+telefono+";"+correo+";";
        emit escribirServidor(QString::fromStdString("RE"+nuevReg).toUtf8());
        if(!socketCli.bloqueo)
        {
            ui->LResEx->setVisible(true);
            ui->LDisfrute->setVisible(true);
            ui->LCedulaR->setVisible(false);
            ui->TCedulaR->setVisible(false);
            ui->LNombre->setVisible(false);
            ui->TNombre->setVisible(false);
            ui->LCorreo->setVisible(false);
            ui->TCorreo->setVisible(false);
            ui->LCiudad->setVisible(false);
            ui->LTelefono->setVisible(false);
            ui->TTelefono->setVisible(false);
            ui->CBCiudad->setVisible(false);
            ui->LCiudad->setVisible(false);
            ui->BRegistrar->setVisible(false);
            ui->LDatos->setVisible(false);
            ui->tabsClientes->setTabEnabled(4, true);
            ui->tabsClientes->setTabEnabled(5, true);
        }
        else{
            QMessageBox::information(
            this,
            tr("Informacion"),
            tr("Se está actulizando el servidor, espere unos minutos") );
        }
        cout<<nuevReg<<endl;
        emit escribirServidor(QString::fromStdString("RE"+nuevReg).toUtf8());
    }
    cout<<"FIN"<<endl;
}

void ventanaPrincipalCliente::on_BBuscarPrecio_clicked()
{
    cont++;
    QString marca=ui->CBMarcas->currentText();
    string mar = marca.toLocal8Bit().constData();
    char cstr[mar.size() + 1];
    strcpy(cstr, mar.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codMarc=token;
    codMar=codMarc;
    emit escribirServidor(QString::fromStdString("ZP;"+codPas+";"+codProd+";"+codMar).toUtf8());
    string precio=socketCli.nombresCB;
    cout<<"Precio "<<precio<<endl;
    QString preci = QString::fromLocal8Bit(precio.c_str());
    if (cont>=2)
        ui->LCDPrecio->display(preci);

}
void ventanaPrincipalCliente::on_BBuscarPasillo_clicked()
{
    cont ++;
    QString pasillo=ui->CBPasillos->currentText();
    string pas = pasillo.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codPasi=token;
    codPas=codPasi;
    emit escribirServidor(QString::fromStdString("CA"+codPas).toUtf8());
    if (!socketCli.bloqueo){
        stringstream producto=stringstream(socketCli.nombresCB);
        producto.str(socketCli.nombresCB);
        string pas;
        bool lleno=false;
        ui->CBProductos->clear();
        while(getline(producto, pas)){
            lleno =true;
            if (!(pas.empty())){
                cout<<socketCli.nombresCB<<endl;
                QString pasq = QString::fromStdString(pas);
                ui->CBProductos->addItem(pasq);
            }
        }
        if (lleno && cont==2){
            ui->LPasProdMar->setText("Producto");
            ui->LInformacion->setText("Seleccione el producto de la marca de la que desea conocer el precio");
            ui->CBPasillos->setVisible(false);
            ui->CBProductos->setVisible(true);
            ui->BBuscarPasillo->setVisible(false);
            ui->BBuscarProd->setVisible(true);
            cont=0;
        }
    }
    else{
        QMessageBox::information(
        this,
        tr("Informacion"),
        tr("Se está actulizando el servidor, espere unos minutos") );
    }

}
void ventanaPrincipalCliente::on_BBuscarProd_clicked()
{
    cont ++;
    QString produc=ui->CBProductos->currentText();
    string pas = produc.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codProdu=token;
    codProd=codProdu;
    emit escribirServidor(QString::fromStdString("CB;"+codPas+";"+codProdu).toUtf8());
    if (!socketCli.bloqueo){
        cout<<"If"<<endl;
        bool lleno=false;
        stringstream marca=stringstream(socketCli.nombresCB);
        marca.str(socketCli.nombresCB);
        string mar;
        ui->CBMarcas->clear();
        while(getline(marca, mar)){
            lleno =true;
            if (!(pas.empty())){
                QString marq = QString::fromStdString(mar);
                ui->CBMarcas->addItem(marq);
            }
        }
        if (lleno&&cont==2){
            cont=0;
            ui->BBuscarPrecio->setVisible(true);
            ui->LPasProdMar->setText("Marcas");
            ui->LInformacion->setText("Seleccione la marca de la que desea conocer el precio");
            ui->CBMarcas->setVisible(true);
            ui->CBProductos->setVisible(false);
            ui->BBuscarProd->setVisible(false);
        }
    }
}

void ventanaPrincipalCliente::on_BLlenarCBPasillos_clicked()
{
    emit escribirServidor(QString::fromStdString("CO").toUtf8());
    if(!socketCli.bloqueo){
        stringstream pasillo=stringstream(socketCli.nombresCB);
        pasillo.str(socketCli.nombresCB);
        string pas;
        bool lleno=false;
        ui->CBPasillos->clear();
        while(getline(pasillo, pas)){
            lleno =true;
            if (!(pas.empty())){
                QString pasq = QString::fromStdString(pas);
                ui->CBPasillos->addItem(pasq);
            }
        }
        if (lleno)
            ui->BBuscarPasillo->setEnabled(true);
            cont=0;

    }
    else{
        QMessageBox::information(
        this,
        tr("Informacion"),
        tr("Se está actulizando el servidor, espere unos minutos") );
    }

}

void ventanaPrincipalCliente::on_BBuscarOtra_clicked()
{
    ui->LInformacion->setText("Seleccione el pasillo de la marca de la que desea conocer el precio");
    ui->LPasProdMar->setText("Pasillo");
    ui->BBuscarPrecio->setVisible(false);
    ui->BBuscarPasillo->setVisible(true);
    ui->CBMarcas->setVisible(false);
    ui->CBPasillos->setVisible(true);
    ui->LCDPrecio->display("0");
    cont=0;

}

void ventanaPrincipalCliente::on_BLlenarCBPasillos_2_clicked()
{
    emit escribirServidor(QString::fromStdString("CO").toUtf8());
    if(!socketCli.bloqueo){
        stringstream pasi=stringstream(socketCli.nombresCB);
        cout<<socketCli.nombresCB<<endl;
        pasi.str(socketCli.nombresCB);
        string pas;
        bool llen=false;
        ui->CBPasillos2->clear();
        while(getline(pasi, pas)){
            llen =true;
            if (!(pas.empty())){
                QString pasq = QString::fromStdString(pas);
                ui->CBPasillos2->addItem(pasq);
            }
        }
        if (llen)
            ui->BBPasillo->setEnabled(true);
            cont=0;

    }
    else{
        QMessageBox::information(
        this,
        tr("Informacion"),
        tr("Se está actulizando el servidor, espere unos minutos") );
    }

}

void ventanaPrincipalCliente::on_BBPasillo_clicked()
{
    cont ++;
    QString pasillo=ui->CBPasillos2->currentText();
    string pas = pasillo.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codPasi=token;
    codPas=codPasi;
    emit escribirServidor(QString::fromStdString("CA"+codPas).toUtf8());
    if (!socketCli.bloqueo){
        stringstream producto=stringstream(socketCli.nombresCB);
        producto.str(socketCli.nombresCB);
        string pas;
        bool lleno=false;
        ui->CBProductos2->clear();
        while(getline(producto, pas)){
            lleno =true;
            if (!(pas.empty())){
                cout<<socketCli.nombresCB<<endl;
                QString pasq = QString::fromStdString(pas);
                ui->CBProductos2->addItem(pasq);
            }
        }
        if (lleno && cont==2){
            ui->LPasProdMar_2->setText("Producto");
            ui->LInformacion_2->setText("Seleccione el producto de la marca de la que desea conocer el impuesto");
            ui->CBPasillos2->setVisible(false);
            ui->CBProductos2->setVisible(true);
            ui->BBPasillo->setVisible(false);
            ui->BBProd->setVisible(true);
            cont=0;
        }
    }
    else{
        QMessageBox::information(
        this,
        tr("Informacion"),
        tr("Se está actulizando el servidor, espere unos minutos") );
    }

}

void ventanaPrincipalCliente::on_BBProd_clicked()
{
    cont ++;
    QString produc=ui->CBProductos2->currentText();
    string pas = produc.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codProdu=token;
    codProd=codProdu;
    emit escribirServidor(QString::fromStdString("CB;"+codPas+";"+codProdu).toUtf8());
    if (!socketCli.bloqueo){
        cout<<"If"<<endl;
        bool lleno=false;
        stringstream marca=stringstream(socketCli.nombresCB);
        marca.str(socketCli.nombresCB);
        string mar;
        ui->CBMarcas2->clear();
        while(getline(marca, mar)){
            lleno =true;
            if (!(pas.empty())){
                QString marq = QString::fromStdString(mar);
                ui->CBMarcas2->addItem(marq);
            }
        }
        if (lleno&&cont==2){
            cont=0;
            ui->BBPrecio->setVisible(true);
            ui->LPasProdMar_2->setText("Marcas");
            ui->LInformacion_2->setText("Seleccione la marca de la que desea conocer el impuesto");
            ui->CBMarcas2->setVisible(true);
            ui->CBProductos2->setVisible(false);
            ui->BBProd->setVisible(false);
        }
    }
}

void ventanaPrincipalCliente::on_BBPrecio_clicked()
{
    cont++;
    QString marca=ui->CBMarcas2->currentText();
    string mar = marca.toLocal8Bit().constData();
    char cstr[mar.size() + 1];
    strcpy(cstr, mar.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codMarc=token;
    codMar=codMarc;
    emit escribirServidor(QString::fromStdString("ZR;"+codPas+";"+codProd+";"+codMar).toUtf8());
    string precio=socketCli.nombresCB;
    QString preci = QString::fromLocal8Bit(precio.c_str());
    if (cont>=2)
        ui->LCDImpuesto->display(preci);

}

void ventanaPrincipalCliente::on_BBOtra_clicked()
{
    ui->LInformacion_2->setText("Seleccione el pasillo de la marca de la que desea conocer el impuesto");
    ui->LPasProdMar_2->setText("Pasillo");
    ui->BBPrecio->setVisible(false);
    ui->BBPasillo->setVisible(true);
    ui->CBMarcas2->setVisible(false);
    ui->CBPasillos2->setVisible(true);
    ui->LCDImpuesto->display("0");
    cont=0;
}

void ventanaPrincipalCliente::on_BLlenarCBPasillos3_clicked()
{
    emit escribirServidor(QString::fromStdString("CO").toUtf8());
    if(!socketCli.bloqueo){
        stringstream pasi=stringstream(socketCli.nombresCB);
        cout<<socketCli.nombresCB<<endl;
        pasi.str(socketCli.nombresCB);
        string pas;
        bool llen=false;
        ui->CBPasillos3->clear();
        while(getline(pasi, pas)){
            llen =true;
            if (!(pas.empty())){
                QString pasq = QString::fromStdString(pas);
                ui->CBPasillos3->addItem(pasq);
            }
        }
        if (llen)
            ui->BBPasillo2->setEnabled(true);
            cont=0;

    }
    else{
        QMessageBox::information(
        this,
        tr("Informacion"),
        tr("Se está actulizando el servidor, espere unos minutos") );
    }

}

void ventanaPrincipalCliente::on_BBPasillo2_clicked()
{
    cont ++;
    QString pasillo=ui->CBPasillos3->currentText();
    string pas = pasillo.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codPasi=token;
    codPas=codPasi;
    emit escribirServidor(QString::fromStdString("CA"+codPas).toUtf8());
    if (!socketCli.bloqueo){
        stringstream producto=stringstream(socketCli.nombresCB);
        producto.str(socketCli.nombresCB);
        string pas;
        bool lleno=false;
        ui->CBProductos3->clear();
        while(getline(producto, pas)){
            lleno =true;
            if (!(pas.empty())){
                cout<<socketCli.nombresCB<<endl;
                QString pasq = QString::fromStdString(pas);
                ui->CBProductos3->addItem(pasq);
            }
        }
        if (lleno && cont==2){
            ui->LPasProdMar_7->setText("Producto");
            ui->LInformacion_7->setText("Seleccione el producto de la marca de la que desea conocer el canastaje");
            ui->CBPasillos3->setVisible(false);
            ui->CBProductos3->setVisible(true);
            ui->BBPasillo2->setVisible(false);
            ui->BBProducto2->setVisible(true);
            cont=0;
        }
    }
    else{
        QMessageBox::information(
        this,
        tr("Informacion"),
        tr("Se está actulizando el servidor, espere unos minutos") );
    }
}

void ventanaPrincipalCliente::on_BBProducto2_clicked()
{
    cont ++;
    QString produc=ui->CBProductos3->currentText();
    string pas = produc.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codProdu=token;
    codProd=codProdu;
    emit escribirServidor(QString::fromStdString("CB;"+codPas+";"+codProdu).toUtf8());
    if (!socketCli.bloqueo){
        cout<<"If"<<endl;
        bool lleno=false;
        stringstream marca=stringstream(socketCli.nombresCB);
        marca.str(socketCli.nombresCB);
        string mar;
        ui->CBMarcas3->clear();
        while(getline(marca, mar)){
            lleno =true;
            if (!(pas.empty())){
                QString marq = QString::fromStdString(mar);
                ui->CBMarcas3->addItem(marq);
            }
        }
        if (lleno&&cont==2){
            cont=0;
            ui->BBPrecio2->setVisible(true);
            ui->LPasProdMar_7->setText("Marcas");
            ui->LInformacion_7->setText("Seleccione la marca de la que desea conocer el canastaje");
            ui->CBMarcas3->setVisible(true);
            ui->CBProductos3->setVisible(false);
            ui->BBProducto2->setVisible(false);
        }
    }
}

void ventanaPrincipalCliente::on_BBPrecio2_clicked()
{
    cont++;
    QString marca=ui->CBMarcas3->currentText();
    string mar = marca.toLocal8Bit().constData();
    char cstr[mar.size() + 1];
    strcpy(cstr, mar.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codMarc=token;
    codMar=codMarc;
    emit escribirServidor(QString::fromStdString("ZC;"+codPas+";"+codProd+";"+codMar).toUtf8());
    string precio=socketCli.nombresCB;
    QString preci = QString::fromLocal8Bit(precio.c_str());
    if (cont>=2)
    {
        ui->confirmacion_3->setVisible(false);
        if(socketCli.nombresCB=="SI")
        {
            ui->confirmacion_2->setVisible(false);
            ui->confirmacion->setVisible(true);
        }
        else if(socketCli.nombresCB=="NO")
        {
            ui->confirmacion_2->setVisible(true);
            ui->confirmacion->setVisible(false);
        }

    }
}

void ventanaPrincipalCliente::on_BBOtra2_clicked()
{
    ui->LInformacion_7->setText("Seleccione el pasillo de la marca de la que desea conocer el canastaje");
    ui->LPasProdMar_7->setText("Pasillo");
    ui->BBPrecio2->setVisible(false);
    ui->BBPasillo2->setVisible(true);
    ui->CBMarcas3->setVisible(false);
    ui->CBPasillos3->setVisible(true);
    ui->confirmacion->setVisible(false);
    ui->confirmacion_2->setVisible(false);
    ui->confirmacion_3->setVisible(true);
    cont=0;
}

void ventanaPrincipalCliente::on_pushButton_clicked()
{
    emit escribirServidor(QString::fromStdString("CZ").toUtf8());
    if(!socketCli.bloqueo){
        stringstream pasi=stringstream(socketCli.nombresCB);
        cout<<socketCli.nombresCB<<endl;
        pasi.str(socketCli.nombresCB);
        string pas;
        bool llen=false;
        while(getline(pasi, pas)){
            llen =true;
            if (!(pas.empty())){
                QString pasq = QString::fromStdString(pas);
                ui->CBCiudad->addItem(pasq);
            }
        }
    }
    else{
        QMessageBox::information(
        this,
        tr("Informacion"),
        tr("Se está actulizando el servidor, espere unos minutos"));
    }
}

void ventanaPrincipalCliente::on_BLlenarCBPasillos3_2_clicked()
{
    emit escribirServidor(QString::fromStdString("CO").toUtf8());
    if(!socketCli.bloqueo){
        stringstream pasi=stringstream(socketCli.nombresCB);
        cout<<socketCli.nombresCB<<endl;
        pasi.str(socketCli.nombresCB);
        string pas;
        bool llen=false;
        ui->CBPasillos4->clear();
        while(getline(pasi, pas)){
            llen =true;
            if (!(pas.empty())){
                QString pasq = QString::fromStdString(pas);
                ui->CBPasillos4->addItem(pasq);
            }
        }
        if (llen)
            ui->BBPasillo4->setEnabled(true);
            cont=0;
    }
    else{
        QMessageBox::information(
        this,
        tr("Informacion"),
        tr("Se está actulizando el servidor, espere unos minutos") );
    }
}

void ventanaPrincipalCliente::on_BBPasillo4_clicked()
{
    cont ++;
    QString pasillo=ui->CBPasillos4->currentText();
    string pas = pasillo.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codPasi=token;
    codPas=codPasi;
    emit escribirServidor(QString::fromStdString("CA"+codPas).toUtf8());
    if (!socketCli.bloqueo){
        stringstream producto=stringstream(socketCli.nombresCB);
        producto.str(socketCli.nombresCB);
        string pas;
        bool lleno=false;
        ui->CBProductos4->clear();
        while(getline(producto, pas)){
            lleno =true;
            if (!(pas.empty())){
                cout<<socketCli.nombresCB<<endl;
                QString pasq = QString::fromStdString(pas);
                ui->CBProductos4->addItem(pasq);
            }
        }
        if (lleno && cont==2){
            ui->LPasProdMar_8->setText("Producto");
            ui->LInformacion_8->setText("Seleccione el producto de la marca que desea conocer el comprar");
            ui->CBPasillos4->setVisible(false);
            ui->CBProductos4->setVisible(true);
            ui->BBPasillo4->setVisible(false);
            ui->BBProducto4->setVisible(true);
            ui->BBcarrito->setVisible(false);
            cont=0;
        }
    }
    else{
        QMessageBox::information(
        this,
        tr("Informacion"),
        tr("Se está actulizando el servidor, espere unos minutos") );
    }
}

void ventanaPrincipalCliente::on_BBProducto4_clicked()
{
    cont ++;
    QString produc=ui->CBProductos4->currentText();
    string pas = produc.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codProdu=token;
    codProd=codProdu;
    emit escribirServidor(QString::fromStdString("CB;"+codPas+";"+codProdu).toUtf8());
    if (!socketCli.bloqueo){
        bool lleno=false;
        stringstream marca=stringstream(socketCli.nombresCB);
        marca.str(socketCli.nombresCB);
        string mar;
        ui->CBMarcas4->clear();
        while(getline(marca, mar)){
            lleno =true;
            if (!(pas.empty())){
                QString marq = QString::fromStdString(mar);
                ui->CBMarcas4->addItem(marq);
            }
        }
        if (lleno&&cont==2){
            cont=0;
            ui->BBPrecio4->setVisible(true);
            ui->LPasProdMar_8->setText("Marcas");
            ui->LInformacion_8->setText("Seleccione la marca que desea comprar");
            ui->CBMarcas4->setVisible(true);
            ui->CBProductos4->setVisible(false);
            ui->BBProducto4->setVisible(false);
        }
    }
}

void ventanaPrincipalCliente::on_BBPrecio4_clicked()
{
    QString marca=ui->CBMarcas4->currentText();
    string mar = marca.toLocal8Bit().constData();
    char cstr[mar.size() + 1];
    strcpy(cstr, mar.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codMarc=token;
    codMar=codMarc;
    token = strtok(NULL,var);
    nom=token;
    ui->BBPrecio4->setVisible(false);
    ui->sBoxCantidad->setVisible(true);
    ui->BBCanti->setVisible(true);
    ui->CBMarcas4->setVisible(false);
}

void ventanaPrincipalCliente::comprobar(QString can)
{
    cont++;
    if (cont>=2)
    {
        if(socketCli.nombresCB=="SI")
        {
            QMessageBox::information(
            this,
            tr("Informacion"),
            tr("Compra realizada o finalizada con exito!") );
            QString nombre=QString::fromStdString(nom);
            ui->viewCompras->addItem(nombre+" "+can);
            compra=true;
            cantReg++;
        }
        else if(socketCli.nombresCB=="NO")
        {
            QMessageBox::information(
            this,
            tr("Informacion"),
            tr("Usted ya se encuentra en la lista de facturacion"));
            compra=false;
        }
    }
}

void ventanaPrincipalCliente::on_BBOtra3_clicked()
{
    cont++;
    if (cont>=2)
    {
        if(socketCli.nombresCB=="SI")
        {
            QMessageBox::information(
            this,
            tr("Informacion"),
            tr("Compra realizada o finalizada con exito!") );
        }
        else if(socketCli.nombresCB=="NO")
        {
            QMessageBox::information(
            this,
            tr("Informacion"),
            tr("Usted ya se encuentra en la lista de facturacion"));
        }
        compra=false;
        ui->viewCompras->clear();
        cantReg=0;
    }
}

void ventanaPrincipalCliente::on_BBCanti_clicked()
{
    cont++;
    if(cont==1)
    {
        QString can=ui->sBoxCantidad->text();
        string canti=can.toLocal8Bit().constData();
        QString cedu=ui->TCedula->text();
        string ced=cedu.toLocal8Bit().constData();
        bool comp=compra;
        if(!comp)
        {
            emit escribirServidor(QString::fromStdString("CF;"+codPas+";"+codProd+";"+codMar+";"+canti+";"+ced).toUtf8());
        }
        else
            emit escribirServidor(QString::fromStdString("CFD;"+codPas+";"+codProd+";"+codMar+";"+canti+";"+ced).toUtf8());
        comprobar(can);
    }
//    string precio=socketCli.nombresCB;
//    QString preci = QString::fromLocal8Bit(precio.c_str());
    else if(cont>2)
    {
        QString can=ui->sBoxCantidad->text();
        ui->BBcarrito->setVisible(true);
        ui->LInformacion_8->setText("Seleccione el pasillo de la marca que desea comprar");
        ui->LPasProdMar_8->setText("Pasillo");
        ui->BBPrecio4->setVisible(false);
        ui->BBPasillo4->setVisible(true);
        ui->CBMarcas4->setVisible(false);
        ui->CBPasillos4->setVisible(true);
        ui->sBoxCantidad->setVisible(false);
        ui->BBCanti->setVisible(false);
        comprobar(can);
        cont=0;
    }
}

void ventanaPrincipalCliente::on_BBcarrito_clicked()
{
    ui->LInformacion_8->setVisible(false);
    ui->LPasProdMar_8->setVisible(false);
    ui->santaManos->setVisible(true);
    ui->BBregresar->setVisible(true);
    ui->viewCompras->setVisible(true);
    ui->BBPasillo4->setVisible(false);
    ui->BBOtra3->setVisible(false);
    ui->CBPasillos4->setVisible(false);
    ui->BBcarrito->setVisible(false);
    ui->LCanaston->setVisible(true);
    if(cantReg>=1)
        ui->reg1->setVisible(true);
    if(cantReg>=2)
        ui->reg2->setVisible(true);
    if(cantReg>=3)
        ui->reg3->setVisible(true);
    if(cantReg>=4)
        ui->reg5->setVisible(true);
    if(cantReg>=5)
        ui->reg4->setVisible(true);
    if(cantReg>=6)
        ui->reg6->setVisible(true);
    if(cantReg>=7)
        ui->reg7->setVisible(true);
}

void ventanaPrincipalCliente::on_BBregresar_clicked()
{
    ui->LInformacion_8->setVisible(true);
    ui->LPasProdMar_8->setVisible(true);
    ui->santaManos->setVisible(false);
    ui->BBregresar->setVisible(false);
    ui->viewCompras->setVisible(false);
    ui->BBPasillo4->setVisible(true);
    ui->BBOtra3->setVisible(true);
    ui->CBPasillos4->setVisible(true);
    ui->BBcarrito->setVisible(true);
    ui->LCanaston->setVisible(false);
    ui->reg1->setVisible(false);
    ui->reg2->setVisible(false);
    ui->reg3->setVisible(false);
    ui->reg4->setVisible(false);
    ui->reg5->setVisible(false);
    ui->reg6->setVisible(false);
    ui->reg7->setVisible(false);
}

void ventanaPrincipalCliente::on_BBFactu_clicked()
{   cont++;
    string titFac;
    string ced=ui->TCedula->text().toLocal8Bit().constData();
    titFac=ced+"_"+ui->spinFact->text().toLocal8Bit().constData()+".txt";
    ofstream archivo;
    emit escribirServidor(QString::fromStdString("RK;"+titFac).toUtf8());
    if(socketCli.nombresCB=="Factura no encontrada")
    {
        if(cont==3)
        {
            QMessageBox::information(
            this,
            tr("Informacion"),
            tr("Factura no encontrada"));
            cont=0;
        }
    }
    else
    {
        archivo.open("Factura.txt",ios::out);
        archivo<<socketCli.nombresCB;
        archivo.close();
        cout<<cont<<endl;
        if(cont==3)
        {
            QMessageBox::information(
            this,
            tr("Informacion"),
            tr("La Factura ha sido creada"));
            cont=0;
        }
    }

}

void ventanaPrincipalCliente::on_BBSPas_clicked()
{
    cont++;
    emit escribirServidor(QString::fromStdString("CO").toUtf8());
    if(!socketCli.bloqueo){
        if(cont==1)
            repo="---------------Pasillos---------------\n";
        stringstream pasi=stringstream(socketCli.nombresCB);
        cout<<socketCli.nombresCB<<endl;
        pasi.str(socketCli.nombresCB);
        string pas;
        bool llen=false;
        while(getline(pasi, pas)){
            llen =true;
            if (!(pas.empty())){
                QString pasq = QString::fromStdString(pas);
                ui->CBRpas->addItem(pasq);
                if(cont==1)
                    repo=repo+pas+"\n";
            }
        }
        if (llen)
            ui->BBSPro->setEnabled(true);
            cont=0;            
    }
    else{
        QMessageBox::information(
        this,
        tr("Informacion"),
        tr("Se está actulizando el servidor, espere unos minutos") );
    }
    cout<<"PAS"<<repo<<endl;
}

void ventanaPrincipalCliente::on_BBSPro_clicked()
{
    cont ++;
    QString pasillo=ui->CBRpas->currentText();
    string pas = pasillo.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codPasi=token;
    codPas=codPasi;
    emit escribirServidor(QString::fromStdString("CA"+codPas).toUtf8());
    if (!socketCli.bloqueo){
        stringstream producto=stringstream(socketCli.nombresCB);
        producto.str(socketCli.nombresCB);
        if(cont==1)
            repo=repo+"---------------Productos---------------\n";
        string pas;
        bool lleno=false;
        ui->CBRpro->clear();
        while(getline(producto, pas)){
            lleno =true;
            if (!(pas.empty())){
                cout<<socketCli.nombresCB<<endl;
                QString pasq = QString::fromStdString(pas);
                ui->CBRpro->addItem(pasq);
                if(cont==2)
                    repo=repo+pas+"\n";
            }
        }
        if (lleno && cont==2){
            ui->BBSMar->setEnabled(true);
            cont=0;
        }
    }
    else{
        QMessageBox::information(
        this,
        tr("Informacion"),
        tr("Se está actulizando el servidor, espere unos minutos") );
    }
    cout<<"PRO"<<repo<<endl;
}

void ventanaPrincipalCliente::on_BBSMar_clicked()
{
    cont ++;
    QString produc=ui->CBRpro->currentText();
    string pas = produc.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codProdu=token;
    codProd=codProdu;
    emit escribirServidor(QString::fromStdString("CB;"+codPas+";"+codProdu).toUtf8());
    if (!socketCli.bloqueo){
        if(cont==2)
            repo=repo+"---------------Marcas---------------\n";
        bool lleno=false;
        stringstream marca=stringstream(socketCli.nombresCB);
        marca.str(socketCli.nombresCB);
        string mar;
        ui->CBRmar->clear();
        while(getline(marca, mar)){
            lleno =true;
            if (!(pas.empty())){
                QString marq = QString::fromStdString(mar);
                ui->CBRmar->addItem(marq);
                if(cont==2)
                    repo=repo+mar+"\n";
            }
        }
    }
    cout<<"MAR"<<repo<<endl;
}

void ventanaPrincipalCliente::on_BBRepo_clicked()
{
    cont++;
    if (cont>=2)
    {
        ofstream archivo;
        archivo.open("Reporte.txt",ios::out);
        archivo<<repo;
        archivo.close();
    }
}
