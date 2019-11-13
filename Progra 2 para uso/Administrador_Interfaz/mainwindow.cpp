#include "mainwindow.h"
#include "ui_mainwindow.h"


using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize (size ());
    ui->BIngresar_3->setEnabled(false);
    ui->tabAdm->setTabText(0, "Ingresar");
    ui->tabAdm->setTabText(1, "Insertar");
    ui->tabAdm->setTabText(2,"Modificar");
    ui->tabAdm->setTabText(3, "Consultar");
    ui->tabAdm->setTabText(4, "Eliminar");
    ui->tabAdm->setTabText(5, "Verificar");
    ui->tabAdm->setTabText(6, "Otros");
    ui->tabAdm->setTabText(7, "Reportes");
    ui->tabAdm->setTabEnabled(1, false);
    ui->tabAdm->setTabEnabled(2, false);
    ui->tabAdm->setTabEnabled(3, false);
    ui->tabAdm->setTabEnabled(4, false);
    ui->tabAdm->setTabEnabled(5, false);
    ui->tabAdm->setTabEnabled(6, false);
    ui->tabAdm->setTabEnabled(7, false);
    ui->LNombre->setVisible(false);
    ui->TCodigo_4->setVisible(false);
    ui->TNombre->setVisible(false);
    ui->BinsertarPas->setVisible(false);
    ui->LCodPas->setVisible(false);
    ui->LPasillo->setVisible(false);
    ui->CBPasillosI->setVisible(false);
    ui->BInsertarProd->setVisible(false);
    ui->BInsertarMarca->setVisible(false);
    ui->LProducto->setVisible(false);
    ui->CBProdutos->setVisible(false);
    ui->BInsertarMarca->setVisible(false);
    ui->LPrecio->setVisible(false);
    ui->LPasillo->setVisible(false);
    ui->LCanasta->setVisible(false);
    ui->LNombreM->setVisible(false);
    ui->LCodMar->setVisible(false);
    ui->LCantidad->setVisible(false);
    ui->LPasilloM->setVisible(false);
    ui->TCodigoM->setVisible(false);
    ui->TNombreM->setVisible(false);
    ui->TPrecio->setVisible(false);
    ui->CBPasillosIM->setVisible(false);
    ui->SCant->setVisible(false);
    ui->RBN->setVisible(false);
    ui->RBS->setVisible(false);
    ui->RBN->setChecked(true);
    ui->BInsertarMarca->setEnabled(false);
    ui->TCodigo_4->setValidator(new QRegularExpressionValidator(QRegularExpression("\\d{1,3}"), this));
    ui->TCodigo_3->setValidator(new QRegularExpressionValidator(QRegularExpression("\\d{1,5}"), this));
    ui->TCodigoM->setValidator(new QRegularExpressionValidator(QRegularExpression("\\d{1,3}"), this));
    ui->TPrecio->setValidator(new QRegularExpressionValidator(QRegularExpression("\\d{1,100}"), this));
    ui->TPrecioMod->setValidator(new QRegularExpressionValidator(QRegularExpression("\\d{1,100}"), this));
    ui->CBPasMod->setVisible(false);
    ui->LPasMod->setVisible(false);
    ui->LProdMod->setVisible(false);
    ui->LMarMod->setVisible(false);
    ui->CBMarMod->setVisible(false);
    ui->CBProdMod->setVisible(false);
    ui->LMod->setVisible(false);
    ui->TPrecioMod->setVisible(false);
    ui->BModi->setVisible(false);
    ui->BModiImp->setVisible(false);
    ui->BModiCan->setVisible(false);
    ui->LPasEl->setVisible(false);
    ui->LProdEl->setVisible(false);
    ui->LMarEl->setVisible(false);
    ui->CBMarEl->setVisible(false);
    ui->CBProdEl->setVisible(false);
    ui->CBPasEl->setVisible(false);
    ui->BElimarPas->setVisible(false);
    ui->BEliminaProd->setVisible(false);
    ui->pushButton_5->setVisible(false);
    ui->BElimarPas->setVisible(false);
    ui->BEliminarMarca->setVisible(false);
    ui->BSel->setVisible(false);
    ui->BBusEl->setVisible(false);
    ui->LQClientes->setVisible(false);
    ui->LCED->setVisible(false);
    ui->TCedEl->setVisible(false);
    ui->pushButton_4->setVisible(false);
    ui->pushButton->setVisible(false);
    ui->pushButton_2->setVisible(false);
    ui->pushButton_3->setVisible(false);
    ui->BActCB->setVisible(false);
    ui->BActProd->setVisible(false);
    ui->BActMarProd->setVisible(false);
    ui->BVolver1->setVisible(false);
    ui->BVolver2->setVisible(false);
    ui->BVolver3->setVisible(false);
    ui->BVolver->setVisible(false);
    ui->BVolver_2->setVisible(false);
    ui->BVolver_3->setVisible(false);
    ui->BVolver_4->setVisible(false);
    ui->BModVol->setVisible(false);
    ui->BModVol_2->setVisible(false);
    //Consultas
    ui->LTipoCon->setVisible(false);
    ui->LCDPrecioCon->setVisible(false);
    ui->CBTipoCon->setVisible(false);
    ui->BBuscarOtraCon->setVisible(false);
    ui->BBuscarProdCon->setVisible(false);
    ui->BBuscarPasilloCon->setVisible(false);
    ui->BBuscarPrecioCon->setVisible(false);
    QPixmap colon(":/Images/colon4.jpg");
    ui->LColonIma->setPixmap(colon);
    ui->LColonIma->setVisible(false);
    QPixmap por(":/Images/porcentaje.jpg");
    ui->porcentaje->setPixmap(por);
    ui->porcentaje->setVisible(false);
    QPixmap can(":/Images/IMG-20191110-WA0026.jpg");
    ui->confirmacion_2->setPixmap(can);
    ui->confirmacion_2->setVisible(false);
    //Verificar
    ui->LQGong->setVisible(false);
    ui->BAgregar->setVisible(false);
    ui->LCantGon->setVisible(false);
    ui->SGon->setVisible(false);
    ui->BVolverGon->setVisible(false);
    connect(this, SIGNAL(escribirServidor(QByteArray)),&socketAdmin,SLOT(escribirServidor(QByteArray)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_BIngresar_3_clicked()
{
    cout<<socketAdmin.registro<<endl;
    if (socketAdmin.registro){
       emit escribirServidor(QString::fromStdString("XB").toUtf8());
       ui->LInfo->setText("Verificación exitosa!\n\n\nDisfrute de sus opciones como administrador!!");
       ui->BIngresar_3->setVisible(false);
       ui->LBienve->setVisible(false);
       ui->LCodAdm->setVisible(false);
       ui->LDijite->setVisible(false);
       ui->TCodigo_3->setVisible(false);
       ui->tabAdm->setTabEnabled(1, true);
       ui->tabAdm->setTabEnabled(2, true);
       ui->tabAdm->setTabEnabled(3, true);
       ui->tabAdm->setTabEnabled(4, true);
       ui->tabAdm->setTabEnabled(5, true);
       ui->tabAdm->setTabEnabled(6, true);
       ui->tabAdm->setTabEnabled(7,true);
       cont=0;
    }
    else{
        QMessageBox::information(
        this,
        tr("Informacion"),
        tr("Usted no se encuentra registrado como administrador."));
    }
}

void MainWindow::on_TCodigo_3_returnPressed()
{
    emit escribirServidor("XV;"+ui->TCodigo_3->text().toUtf8());
    thread()->sleep(1);
    ui->BIngresar_3->setEnabled(true);
}

void MainWindow::on_BPasillo_clicked(){
    ui->LTipo->setVisible(true);
    ui->LTipo->setText("PASILLO");
    ui->LInsertar->setVisible(false);
    ui->BPasillo->setVisible(false);
    ui->BProducto->setVisible(false);
    ui->BMarca->setVisible(false);
    ui->LCodAdm->setVisible(false);
    ui->LCodPas->setVisible(true);
    ui->LNombre->setVisible(true);
    ui->TCodigo_4->setVisible(true);
    ui->TNombre->setVisible(true);
    ui->BinsertarPas->setVisible(true);
    ui->BVolver1->setVisible(true);
    cont=0;
}

void MainWindow::on_BinsertarPas_clicked()
{
    cont++;
    if (!ui->TCodigo_4->text().isEmpty()&&!ui->TNombre->text().isEmpty()){
        this->thread()->sleep(1);
        QString nuevoPas=ui->TCodigo_4->text();
        nuevoPas=nuevoPas+";"+ui->TNombre->text();
        emit escribirServidor("XP;"+nuevoPas.toUtf8());
        aviso=socketAdmin.aviso;
        cout<<"Contador: "<<cont<<endl;
        if (cont>=2){
            QMessageBox::information(
                this,
                tr("Aviso"),
                tr(aviso.c_str()));
            cont=0;
        }
    }
    else{
        QMessageBox::warning(
            this,
            tr("Atención"),
            tr("No deje espacios en blanco.") );
    }
    thread()->sleep(1);
}

void MainWindow::on_BProducto_clicked()
{
    cont++;
    emit escribirServidor(QString::fromStdString("XO").toUtf8());
    stringstream pasillo=stringstream(socketAdmin.nombres);
    pasillo.str(socketAdmin.nombres);
    string pas;
    bool lleno=false;
    ui->CBPasillosI->clear();
    cout<<"Pasiilos: "<<socketAdmin.nombres<<endl;
    while(getline(pasillo, pas)){
        cout<<"Dentro del while"<<endl;
        lleno =true;
        if (!(pas.empty())){
            cout<<socketAdmin.nombres<<endl;
            QString pasq = QString::fromStdString(pas);
            ui->CBPasillosI->addItem(pasq);
        }
    }
    cout<<"Cont: "<<cont;
    cout<<"\nlleno: "<<lleno;
    if (lleno && cont>=2){

        ui->LTipo->setVisible(true);
        ui->LTipo->setText("PRODUCTO");
        ui->LInsertar->setVisible(false);
        ui->BPasillo->setVisible(false);
        ui->BProducto->setVisible(false);
        ui->BMarca->setVisible(false);
        ui->LCodAdm->setVisible(false);
        ui->LCodPas->setVisible(true);
        ui->LNombre->setVisible(true);
        ui->TCodigo_4->setVisible(true);
        ui->TNombre->setVisible(true);
        ui->BinsertarPas->setVisible(false);
        ui->BInsertarProd->setVisible(true);
        ui->LPasillo->setVisible(true);
        ui->CBPasillosI->setVisible(true);
        ui->BVolver2->setVisible(true);
        cont=0;
    }
}

void MainWindow::on_BInsertarProd_clicked()
{
    cont++;
    QString pasillo=ui->CBPasillosI->currentText();
    QString codProd=ui->TCodigo_4->text();
    QString nombre=ui->TNombre->text();
    string pas=pasillo.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codPasi=token;
    QString pasi=QString::fromStdString(codPasi);
    QString cod=pasi+";"+codProd+";"+nombre;
    emit escribirServidor("XR;"+cod.toUtf8());
    this->thread()->sleep(1);
    if(socketAdmin.correcto){
        if(cont>=2){
            QMessageBox::information(
                this,
                tr("Aviso"),
                tr("Producto creado con éxito!"));
            cont=0;
        }
    }
    else{
        if (cont>=2){
            QMessageBox::critical(
                this,
                tr("Eror"),
                tr("Ocurrió un error creando el producto, intentelo de nuevo."));
            cont=0;
        }
    }
}

void MainWindow::on_BInsertarMarca_clicked()
{
    cont++;
    QString nom=ui->TNombreM->text();
    QString precio=ui->TPrecio->text();
    QString codPas=ui->CBPasillosIM->currentText();
    QString codProd=ui->CBProdutos->currentText();
    QString cantidad=ui->SCant->text();
    QString codMar=ui->TCodigoM->text();
    string pas=codPas.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codPasi=token;
    QString pasillo=QString::fromStdString(codPasi);
    string prod=codProd.toLocal8Bit().constData();
    cout<<"dhjfhsd "<<prod<<endl;
    char cstr1[prod.size() + 1];
    strcpy(cstr1, prod.c_str());
    char var1[]=":";
    char *token1 = strtok(cstr1,var1);
    string codProdu=token1;
    QString codiPas = QString::fromStdString(codPasi);
    QString codiProd = QString::fromStdString(codProdu);
    QString produ=QString::fromStdString(codProdu);
    QString env=codiPas+";"+codiProd+";"+codMar+";"+nom+";"+cantidad+";"+precio+";"+canasta;
    emit escribirServidor("XM;"+env.toUtf8());
    aviso=socketAdmin.aviso;
    if (ui->CBProdutos->currentText()=="No productos disponibles"){
        QMessageBox::information(
            this,
            tr("Aviso"),
            tr("No existen productos en este pasillo, seleccione otro"));
    }
    else{
        if (cont==2){
            QMessageBox::information(
                this,
                tr("Aviso"),
                tr(aviso.c_str()));
            cont=0;
        }
    }

}

void MainWindow::on_BMarca_clicked()
{
    cont++;
    emit escribirServidor(QString::fromStdString("XO").toUtf8());
    stringstream pasillo=stringstream(socketAdmin.nombres);
    pasillo.str(socketAdmin.nombres);
    string pas;
    bool lleno=false;
    ui->CBPasillosIM->clear();
    while(getline(pasillo, pas)){
        lleno=true;
        if (!(pas.empty())){
            cout<<socketAdmin.nombres<<endl;
            QString pasq = QString::fromStdString(pas);
            ui->CBPasillosIM->addItem(pasq);
        }
    }
    if (lleno && cont>=2){
        ui->LTipo->setVisible(true);
        ui->LTipo->setText("MARCA");
        ui->LInsertar->setVisible(false);
        ui->BPasillo->setVisible(false);
        ui->BProducto->setVisible(false);
        ui->BMarca->setVisible(false);
        ui->LCodAdm->setVisible(false);
        ui->LCodMar->setVisible(true);
        ui->LNombreM->setVisible(true);
        ui->TCodigoM->setVisible(true);
        ui->TNombreM->setVisible(true);
        ui->BInsertarMarca->setVisible(false);
        ui->LPasilloM->setVisible(true);
        ui->CBPasillosIM->setVisible(true);
        ui->LProducto->setVisible(true);
        ui->CBProdutos->setVisible(true);
        ui->LCantidad->setVisible(true);
        ui->LCanasta->setVisible(true);
        ui->RBN->setVisible(true);
        ui->RBS->setVisible(true);
        ui->LPrecio->setVisible(true);
        ui->TPrecio->setVisible(true);
        ui->SCant->setVisible(true);
        ui->BInsertarMarca->setVisible(true);
        ui->pushButton->setVisible(true);
        ui->BVolver3->setVisible(true);
        cont=0;
    }
}

void MainWindow::on_pushButton_clicked()
{
    QString codPas=ui->CBPasillosIM->currentText();
    string pas=codPas.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codPasi=token;
    QString pasi=QString::fromStdString(codPasi);
    emit escribirServidor("XA"+pasi.toUtf8());
    stringstream producto=stringstream(socketAdmin.nombres);
    producto.str(socketAdmin.nombres);
    string prod;
    bool lleno=false;
    ui->CBProdutos->clear();
    while(getline(producto, pas)){
        lleno=true;
        if (!(pas.empty())){
            cout<<"if"<<endl;
            QString pasq = QString::fromStdString(pas);
            ui->CBProdutos->addItem(pasq);
        }
    }
}

void MainWindow::on_RBS_clicked()
{
    canasta="1";
    ui->BInsertarMarca->setEnabled(true);
}

void MainWindow::on_RBN_clicked()
{
    canasta="a";
    ui->BInsertarMarca->setEnabled(true);
}

void MainWindow::on_BModPrecio_clicked()
{
    cont++;
    bool lleno=false;
    emit escribirServidor(QString::fromStdString("XO").toUtf8());
    stringstream pasillo=stringstream(socketAdmin.nombres);
    pasillo.str(socketAdmin.nombres);
    string pas;
    ui->CBPasMod->clear();
    while(getline(pasillo, pas)){
        lleno=true;
        if (!(pas.empty())){
            cout<<"if"<<endl;
            QString pasq = QString::fromStdString(pas);
            ui->CBPasMod->addItem(pasq);
        }
    }
    if (cont>=2&&lleno){
        ui->LModificar->setText("PRECIO");
        ui->BModPrecio->setVisible(false);
        ui->BModCan->setVisible(false);
        ui->BModImp->setVisible(false);
        ui->CBPasMod->setVisible(true);
        ui->LPasMod->setVisible(true);
        ui->LProdMod->setVisible(true);
        ui->LMarMod->setVisible(true);
        ui->CBMarMod->setVisible(true);
        ui->CBProdMod->setVisible(true);
        ui->TPrecioMod->setVisible(true);
        ui->LMod->setVisible(true);
        ui->BModi->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->BModVol_2->setVisible(true);
        cont=0;
    }
}

void MainWindow::on_BModCan_clicked()
{
    cont++;
    bool lleno=false;
    emit escribirServidor(QString::fromStdString("XO").toUtf8());
    stringstream pasillo=stringstream(socketAdmin.nombres);
    pasillo.str(socketAdmin.nombres);
    string pas;
    ui->CBPasMod->clear();
    while(getline(pasillo, pas)){
        lleno=true;
        if (!(pas.empty())){
            cout<<"if"<<endl;
            QString pasq = QString::fromStdString(pas);
            ui->CBPasMod->addItem(pasq);
        }
    }
    if (cont>=2&&lleno){
        ui->LModificar->setText("CANASTA");
        ui->BModPrecio->setVisible(false);
        ui->BModCan->setVisible(false);
        ui->BModImp->setVisible(false);
        ui->CBPasMod->setVisible(true);
        ui->LPasMod->setVisible(true);
        ui->LProdMod->setVisible(true);
        ui->LMarMod->setVisible(true);
        ui->CBMarMod->setVisible(true);
        ui->CBProdMod->setVisible(true);
        ui->BModiCan->setVisible(true);        
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->BModVol->setVisible(true);
        cont=0;
    }
}

void MainWindow::on_BModi_clicked()
{
    cont++;
    QString pasillo=ui->CBPasMod->currentText();
    string pas=pasillo.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    QString producto=ui->CBProdMod->currentText();
    string prod=producto.toLocal8Bit().constData();
    char cstrProd[prod.size() + 1];
    strcpy(cstrProd, prod.c_str());
    char varProd[]=":";
    char *tokenProd = strtok(cstrProd,varProd);
    QString marca=ui->CBMarMod->currentText();
    string mar=marca.toLocal8Bit().constData();
    char cstrMar[mar.size() + 1];
    strcpy(cstrMar, mar.c_str());
    char varMar[]=":";
    char *tokenMar = strtok(cstrMar,varMar);
    string codPasillo=token;
    string codProducto=tokenProd;
    string codMarca=tokenMar;
    QString precio=ui->TPrecioMod->text();
    string preci=precio.toLocal8Bit().constData();
    string codComp=codPasillo+";"+codProducto+";"+codMarca+";"+preci;
    if (marca=="No marcas disponibles"){
        QMessageBox::information(
            this,
            tr("Aviso"),
            tr("El producto que selecciono no tiene marcas, seleccione otro"));
    }
    else{
        emit escribirServidor(QString::fromStdString("MX;"+codComp).toUtf8());
        aviso=socketAdmin.aviso;
        if (cont==2){
            QMessageBox::information(
                this,
                tr("Aviso"),
                tr(aviso.c_str()));
            cont=0;
        }
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    QString codPas=ui->CBPasMod->currentText();
    string pas=codPas.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codPasi=token;
    QString pasi=QString::fromStdString(codPasi);
    emit escribirServidor("XA"+pasi.toUtf8());
    stringstream producto=stringstream(socketAdmin.nombres);
    producto.str(socketAdmin.nombres);
    string prod;
    bool lleno=false;
    ui->CBProdMod->clear();
    while(getline(producto, prod)){
        lleno=true;
        if (!(prod.empty())){
            QString prodq = QString::fromStdString(prod);
            ui->CBProdMod->addItem(prodq);
        }
    }
}

void MainWindow::on_pushButton_2_clicked()
{

    QString codPas=ui->CBPasMod->currentText();
    string pas=codPas.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codPasi=token;
    QString pasi=QString::fromStdString(codPasi);
    QString codProd=ui->CBProdMod->currentText();
    string prod=codProd.toLocal8Bit().constData();
    char cstr1[prod.size() + 1];
    strcpy(cstr1, prod.c_str());
    char var1[]=":";
    char *token1 = strtok(cstr1,var1);
    string codProdu=token1;
    QString produ=QString::fromStdString(codProdu);
    emit escribirServidor(("BX;"+pasi+";"+produ).toUtf8());
    if (ui->CBProdMod->currentText()=="No productos disponibles"){
        QMessageBox::information(
            this,
            tr("Aviso"),
            tr("El pasillo que seleccionó no tiene productos, seleccione otro"));
    }
    else{
        stringstream producto=stringstream(socketAdmin.nombres);
        producto.str(socketAdmin.nombres);
        string productos;
        bool lleno=false;
        ui->CBMarMod->clear();
        while(getline(producto, productos)){
            lleno=true;
            if (!(productos.empty())){
                QString prodq = QString::fromStdString(productos);
                ui->CBMarMod->addItem(prodq);
            }
        }
    }
}

void MainWindow::on_BModImp_clicked()
{
   cont++;
   bool lleno=false;
   emit escribirServidor(QString::fromStdString("XO").toUtf8());
   string pasi;
   stringstream pasil=stringstream(socketAdmin.nombres);
   pasil.str(socketAdmin.nombres);
   ui->CBPasMod->clear();
   while(getline(pasil, pasi)){
       lleno=true;
       if (!(pasi.empty())){
           QString pasq= QString::fromStdString(pasi);
           ui->CBPasMod->addItem(pasq);
       }
   }
   if (cont>=2&&lleno){
       ui->LModificar->setText("IMPUESTO");
       ui->BModPrecio->setVisible(false);
       ui->BModCan->setVisible(false);
       ui->BModImp->setVisible(false);
       ui->LMod->setText("Impuesto");
       ui->TPrecioMod->setVisible(true);
       ui->CBPasMod->setVisible(true);
       ui->LPasMod->setVisible(true);
       ui->LProdMod->setVisible(true);
       ui->CBProdMod->setVisible(true);
       ui->LMarMod->setVisible(true);
       ui->CBMarMod->setVisible(true);
       ui->BModiImp->setVisible(true);
       ui->LMod->setVisible(true);
       ui->pushButton_2->setVisible(true);
       ui->pushButton_3->setVisible(true);
       ui->BModVol_2->setVisible(true);
       cont=0;
   }
}

void MainWindow::on_BModiImp_clicked()
{
    cont++;
    QString pasillo=ui->CBPasMod->currentText();
    string pas=pasillo.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    QString producto=ui->CBProdMod->currentText();
    string prod=producto.toLocal8Bit().constData();
    char cstrProd[prod.size() + 1];
    strcpy(cstrProd, prod.c_str());
    char varProd[]=":";
    char *tokenProd = strtok(cstrProd,varProd);
    QString marca=ui->CBMarMod->currentText();
    string mar=marca.toLocal8Bit().constData();
    char cstrMar[mar.size() + 1];
    strcpy(cstrMar, mar.c_str());
    char varMar[]=":";
    char *tokenMar=strtok(cstrMar,varMar);
    string codPasillo=token;
    string codProducto=tokenProd;
    string codMarca=tokenMar;
    QString imp=ui->TPrecioMod->text();
    string impu=imp.toLocal8Bit().constData();
    string codComp=codPasillo+";"+codProducto+";"+codMarca+";"+impu;
    if (marca=="No marcas disponibles"){
        QMessageBox::information(
            this,
            tr("Aviso"),
            tr("El producto que selecciono no tiene marcas, seleccione otro"));
    }
    else{
        emit escribirServidor(QString::fromStdString("NX;"+codComp).toUtf8());
        aviso=socketAdmin.aviso;
        if (cont>=2){
            QMessageBox::information(
                this,
                tr("Aviso"),
                tr(aviso.c_str()));
            cont=0;
        }
    }
}

void MainWindow::on_BModiCan_clicked()
{
    cont++;
    QString pasillo=ui->CBPasMod->currentText();
    string pas=pasillo.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    QString producto=ui->CBProdMod->currentText();
    string prod=producto.toLocal8Bit().constData();
    char cstrProd[prod.size() + 1];
    strcpy(cstrProd, prod.c_str());
    char varProd[]=":";
    char *tokenProd = strtok(cstrProd,varProd);
    QString marca=ui->CBMarMod->currentText();
    string mar=marca.toLocal8Bit().constData();
    char cstrMar[mar.size() + 1];
    strcpy(cstrMar, mar.c_str());
    char varMar[]=":";
    char *tokenMar=strtok(cstrMar,varMar);
    string codPasillo=token;
    string codProducto=tokenProd;
    string codMarca=tokenMar;
    QString imp=ui->TPrecioMod->text();
    string impuesto=imp.toLocal8Bit().constData();
    if (marca=="No marcas disponibles"){
        QMessageBox::information(
            this,
            tr("Aviso"),
            tr("El producto que selecciono no tiene marcas, seleccione otro"));
    }
    else{
        string codComp=codPasillo+";"+codProducto+";"+codMarca+";"+impuesto;
        emit escribirServidor(QString::fromStdString("LX;"+codComp).toUtf8());
        aviso=socketAdmin.aviso;
        cout<<"cont "<<cont<<endl;
        if (cont>=2){
            QMessageBox::information(
                this,
                tr("Aviso"),
                tr(aviso.c_str()));
            cont=0;
        }
    }
}

void MainWindow::on_BPasilloEl_clicked()
{
    cont++;
    emit escribirServidor(QString::fromStdString("XO").toUtf8());
    stringstream pasillo=stringstream(socketAdmin.nombres);
    pasillo.str(socketAdmin.nombres);
    string pas;
    bool lleno=false;
    ui->CBProdEl->clear();
    while(getline(pasillo, pas)){
        lleno=true;
        if (!(pas.empty())){
            cout<<"if"<<endl;
            QString pasq = QString::fromStdString(pas);
            ui->CBProdEl->addItem(pasq);
        }
    }
    if(lleno && cont>=2){
        ui->label->setText("Elimar un pasillo");
        ui->BPasilloEl->setVisible(false);
        ui->BProdEl->setVisible(false);
        ui->BMarcaEl->setVisible(false);
        ui->BClieEl->setVisible(false);
        ui->LProdEl->setText("Pasillo");
        ui->LProdEl->setVisible(true);
        ui->CBProdEl->setVisible(true);
        ui->BElimarPas->setVisible(true);
        ui->BActCB->setVisible(true);
        ui->BVolver_3->setVisible(true);
        cont=0;
    }
}

void MainWindow::on_BElimarPas_clicked()
{
    QString pasillo=ui->CBProdEl->currentText();
    string pas=pasillo.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string env=token;
    if (pasillo=="No pasillos disponibles"){
        QMessageBox::information(
            this,
            tr("Aviso"),
            tr("Ya no hay más pasillos que eliminar"));
    }
    else{
        emit escribirServidor(QString::fromStdString("EP;"+env).toUtf8());
        QMessageBox::information(
            this,
            tr("Aviso"),
            tr("Pasillo eliminado con exito"));
        cont=0;
    }
}

void MainWindow::on_BProdEl_clicked()
{
    cont++;
    emit escribirServidor(QString::fromStdString("XO").toUtf8());
    stringstream pasillo=stringstream(socketAdmin.nombres);
    pasillo.str(socketAdmin.nombres);
    string pas;
    bool lleno=false;
    ui->CBPasEl->clear();
    while(getline(pasillo, pas)){
        lleno=true;
        if (!(pas.empty())){
            QString pasq = QString::fromStdString(pas);
            ui->CBPasEl->addItem(pasq);
        }
    }
    if(lleno && cont>=2){
        ui->label->setText("Eliminar un producto");
        ui->BPasilloEl->setVisible(false);
        ui->BProdEl->setVisible(false);
        ui->BMarcaEl->setVisible(false);
        ui->BClieEl->setVisible(false);
        ui->LProdEl->setVisible(true);
        ui->CBProdEl->setVisible(true);
        ui->LPasEl->setVisible(true);
        ui->CBPasEl->setVisible(true);
        ui->BEliminaProd->setVisible(true);
        ui->pushButton_4->setVisible(true);
        ui->BActProd->setVisible(true);
        ui->BVolver->setVisible(true);
        cont=0;
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    QString codPas=ui->CBPasEl->currentText();
    string pas=codPas.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codPasi=token;
    QString pasi=QString::fromStdString(codPasi);
    emit escribirServidor("XA"+pasi.toUtf8());
    stringstream producto=stringstream(socketAdmin.nombres);
    producto.str(socketAdmin.nombres);
    string prod;
    bool lleno=false;
    ui->CBProdEl->clear();
    while(getline(producto, prod)){
        lleno=true;
        if (!(prod.empty())){
            QString prodq = QString::fromStdString(prod);
            ui->CBProdEl->addItem(prodq);
        }
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    QString codPas=ui->CBPasEl->currentText();
    string pas=codPas.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codPasi=token;
    QString pasi=QString::fromStdString(codPasi);
    QString codProd=ui->CBProdEl->currentText();
    string prod=codProd.toLocal8Bit().constData();
    char cstr1[prod.size() + 1];
    strcpy(cstr1, prod.c_str());
    char var1[]=":";
    char *token1 = strtok(cstr1,var1);
    string codProdu=token1;
    QString produ=QString::fromStdString(codProdu);
    emit escribirServidor(("BX;"+pasi+";"+produ).toUtf8());
    stringstream producto=stringstream(socketAdmin.nombres);
    producto.str(socketAdmin.nombres);
    string productos;
    bool lleno=false;
    ui->CBMarEl->clear();
    while(getline(producto, productos)){
        lleno=true;
        if (!(productos.empty())){
            QString prodq = QString::fromStdString(productos);
            ui->CBMarEl->addItem(prodq);
        }
    }
}

void MainWindow::on_BEliminaProd_clicked()
{
    QString pas=ui->CBPasEl->currentText();
    string pasillo=pas.toLocal8Bit().constData();
    char cstr[pasillo.size() + 1];
    strcpy(cstr, pasillo.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string env=token;
    QString prod=ui->CBProdEl->currentText();
    string produ=prod.toLocal8Bit().constData();
    char cstrProd[produ.size() + 1];
    strcpy(cstrProd, produ.c_str());
    char varProd[]=":";
    char *tokenProd = strtok(cstrProd,varProd);
    string env1=tokenProd;
    string codComp=env+";"+env1;
    if (prod=="No productos disponibles"){
        QMessageBox::information(
            this,
            tr("Aviso"),
            tr("No existen productos en este pasillo, seleccione otro"));
    }
    else{
        emit escribirServidor(QString::fromStdString("ER;"+codComp).toUtf8());
        QMessageBox::information(
            this,
            tr("Aviso"),
            tr("Producto eliminado con exito"));
    }

}

void MainWindow::on_BMarcaEl_clicked()
{
    cont++;
    emit escribirServidor(QString::fromStdString("XO").toUtf8());
    stringstream pasillo=stringstream(socketAdmin.nombres);
    pasillo.str(socketAdmin.nombres);
    string pas;
    bool lleno=false;
    ui->CBPasEl->clear();
    while(getline(pasillo, pas)){
        lleno=true;
        if (!(pas.empty())){
            cout<<"if"<<endl;
            QString pasq = QString::fromStdString(pas);
            ui->CBPasEl->addItem(pasq);
        }
    }
    if(lleno && cont>=2){
        ui->label->setText("Eliminar una marca");
        ui->BPasilloEl->setVisible(false);
        ui->BProdEl->setVisible(false);
        ui->BMarcaEl->setVisible(false);
        ui->LPasEl->setVisible(true);
        ui->CBPasEl->setVisible(true);
        ui->LProdEl->setVisible(true);
        ui->CBProdEl->setVisible(true);
        ui->LMarEl->setVisible(true);
        ui->CBMarEl->setVisible(true);
        ui->BEliminarMarca->setVisible(true);
        ui->pushButton_5->setVisible(true);
        ui->pushButton_4->setVisible(true);
        ui->BClieEl->setVisible(false);
        ui->BActMarProd->setVisible(true);
        ui->BVolver_2->setVisible(true);
        cont=0;
    }
}

void MainWindow::on_BEliminarMarca_clicked()
{
    cont++;
    QString pasillo=ui->CBPasEl->currentText();
    string pas=pasillo.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    QString producto=ui->CBProdEl->currentText();
    string prod=producto.toLocal8Bit().constData();
    char cstrProd[prod.size() + 1];
    strcpy(cstrProd, prod.c_str());
    char varProd[]=":";
    char *tokenProd = strtok(cstrProd,varProd);
    QString marca=ui->CBMarEl->currentText();
    string mar=marca.toLocal8Bit().constData();
    char cstrMar[mar.size() + 1];
    strcpy(cstrMar, mar.c_str());
    char varMar[]=":";
    char *tokenMar=strtok(cstrMar,varMar);
    string codPasillo=token;
    string codProducto=tokenProd;
    string codMarca=tokenMar;
    string codComp=codPasillo+";"+codProducto+";"+codMarca;
    if (marca=="No marcas disponibles"){
        QMessageBox::information(
            this,
            tr("Aviso"),
            tr("El producto no tiene marcas disposnible, seleccione otro"));
    }
    else{
        emit escribirServidor(QString::fromStdString("EM;"+codComp).toUtf8());
            QMessageBox::information(
                this,
                tr("Aviso"),
                tr("Marca eliminada con exito!"));
            cont=0;
    }

}

void MainWindow::on_BClieEl_clicked()
{
    ui->BClieEl->setVisible(false);
    ui->BProdEl->setVisible(false);
    ui->BPasilloEl->setVisible(false);
    ui->BMarcaEl->setVisible(false);
    ui->label->setText("Eliminar Cliente");
    ui->LCED->setVisible(true);
    ui->LQClientes->setVisible(true);
    ui->BBusEl->setVisible(true);
    ui->BSel->setVisible(true);
    ui->TCedEl->setVisible(true);
    ui->BVolver_4->setVisible(true);
}

void MainWindow::on_BActCB_clicked()
{
    emit escribirServidor(QString::fromStdString("XO").toUtf8());
    stringstream pasillo=stringstream(socketAdmin.nombres);
    pasillo.str(socketAdmin.nombres);
    string pas;
    bool lleno=false;
    ui->CBProdEl->clear();
    while(getline(pasillo, pas)){
        lleno=true;
        if (!(pas.empty())){
            cout<<"if"<<endl;
            QString pasq = QString::fromStdString(pas);
            ui->CBProdEl->addItem(pasq);
        }
    }
}

void MainWindow::on_BActProd_clicked()
{
    QString codPas=ui->CBPasEl->currentText();
    string pas=codPas.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codPasi=token;
    QString pasi=QString::fromStdString(codPasi);
    emit escribirServidor("XA"+pasi.toUtf8());
    stringstream producto=stringstream(socketAdmin.nombres);
    producto.str(socketAdmin.nombres);
    string prod;
    bool lleno=false;
    ui->CBProdEl->clear();
    while(getline(producto, prod)){
        lleno=true;
        if (!(prod.empty())){
            QString prodq = QString::fromStdString(prod);
            ui->CBProdEl->addItem(prodq);
        }
    }
}

void MainWindow::on_BActMarProd_clicked()
{
    QString codPas=ui->CBPasEl->currentText();
    string pas=codPas.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codPasi=token;
    QString pasi=QString::fromStdString(codPasi);
    QString codProd=ui->CBProdEl->currentText();
    string prod=codProd.toLocal8Bit().constData();
    char cstr1[prod.size() + 1];
    strcpy(cstr1, prod.c_str());
    char var1[]=":";
    char *token1 = strtok(cstr1,var1);
    string codProdu=token1;
    QString produ=QString::fromStdString(codProdu);
    emit escribirServidor(("BX;"+pasi+";"+produ).toUtf8());
    stringstream producto=stringstream(socketAdmin.nombres);
    producto.str(socketAdmin.nombres);
    string productos;
    bool lleno=false;
    ui->CBMarEl->clear();
    while(getline(producto, productos)){
        lleno=true;
        if (!(productos.empty())){
            QString prodq = QString::fromStdString(productos);
            ui->CBMarEl->addItem(prodq);
        }
    }
}

void MainWindow::volver(){
    ui->BPasillo->setVisible(true);
    ui->BProducto->setVisible(true);
    ui->BMarca->setVisible(true);
    ui->LCodPas->setVisible(false);
    ui->LNombre->setVisible(false);
    ui->TCodigoM->setVisible(false);
    ui->TCodigoM->clear();
    ui->TCodigo_3->setVisible(false);
    ui->TCodigo_3->clear();
    ui->TCodigo_4->setVisible(false);
    ui->TCodigo_4->clear();
    ui->BVolver1->setVisible(false);
    ui->BVolver2->setVisible(false);
    ui->BVolver3->setVisible(false);
    ui->BinsertarPas->setVisible(false);
    ui->TNombre->setVisible(false);
    ui->TNombre->clear();
    ui->LTipo->clear();
    ui->LInsertar->setVisible(true);
    ui->CBPasillosI->setVisible(false);
    ui->CBPasillosIM->setVisible(false);
    ui->CBProdutos->setVisible(false);
    ui->LPasilloM->setVisible(false);
    ui->LPasillo->setVisible(false);
    ui->BInsertarProd->setVisible(false);
    ui->BInsertarMarca->setVisible(false);
    ui->pushButton->setVisible(false);
    ui->LPasilloM->setVisible(false);
    ui->LCodMar->setVisible(false);
    ui->LNombreM->setVisible(false);
    ui->LProducto->setVisible(false);
    ui->TNombreM->setVisible(false);
    ui->LCantidad->setVisible(false);
    ui->LPrecio->setVisible(false);
    ui->LCanasta->setVisible(false);
    ui->SCant->setVisible(false);
    ui->SCant->setValue(1);
    ui->TPrecio->setVisible(false);
    ui->TPrecio->clear();
    ui->RBS->setVisible(false);
    ui->RBN->setVisible(false);
    ui->RBN->setChecked(true);
    ui->RBS->setChecked(false);
}

void MainWindow::volverEliminar(){
    ui->BPasilloEl->setVisible(true);
    ui->BProdEl->setVisible(true);
    ui->BMarcaEl->setVisible(true);
    ui->BClieEl->setVisible(true);
    ui->label->setText("Elimine pasillos, productos, marcas y clientes del supermercado");
    ui->LQClientes->setVisible(false);
    ui->LQClientes->clear();
    ui->BSel->setVisible(false);
    ui->LPasEl->setVisible(false);
    ui->LProdEl->setVisible(false);
    ui->LMarEl->setVisible(false);
    ui->CBMarEl->setVisible(false);
    ui->CBProdEl->setVisible(false);
    ui->CBPasEl->setVisible(false);
    ui->BActCB->setVisible(false);
    ui->BActProd->setVisible(false);
    ui->BActMarProd->setVisible(false);
    ui->BElimarPas->setVisible(false);
    ui->BEliminaProd->setVisible(false);
    ui->BEliminarMarca->setVisible(false);
    ui->LCED->setVisible(false);
    ui->LCED->clear();
    ui->TCedEl->setVisible(false);
    ui->TCedEl->clear();
    ui->BBusEl->setVisible(false);
    ui->pushButton_4->setVisible(false);
    ui->pushButton_5->setVisible(false);
    ui->BVolver->setVisible(false);
    ui->BVolver_2->setVisible(false);
    ui->BVolver_3->setVisible(false);
    ui->BVolver_4->setVisible(false);

}

void MainWindow::volverModificar(){
    ui->LModificar->setText("Modifique el precio, el impuesto o la canasta de las marcas del supermercado");
    ui->LModificar->setVisible(true);
    ui->BModPrecio->setVisible(true);
    ui->BModCan->setVisible(true);
    ui->BModImp->setVisible(true);
    ui->LPasMod->setVisible(false);
    ui->LProdMod->setVisible(false);
    ui->LMarMod->setVisible(false);
    ui->LMod->setVisible(false);
    ui->CBPasMod->setVisible(false);
    ui->CBProdMod->setVisible(false);
    ui->CBMarMod->setVisible(false);
    ui->pushButton_2->setVisible(false);
    ui->pushButton_3->setVisible(false);
    ui->TPrecioMod->setVisible(false);
    ui->TPrecioMod->clear();
    ui->BModiCan->setVisible(false);
    ui->BModiImp->setVisible(false);
    ui->BModi->setVisible(false);
    ui->BModVol->setVisible(false);
    ui->BModVol_2->setVisible(false);

}

void MainWindow::on_BVolver1_clicked()
{
    volver();
}

void MainWindow::on_BVolver2_clicked()
{
    volver();
}

void MainWindow::on_BVolver3_clicked()
{
    volver();
}

void MainWindow::on_BVolver_clicked()
{
    volverEliminar();
}

void MainWindow::on_BVolver_4_clicked()
{
    volverEliminar();
}

void MainWindow::on_BVolver_3_clicked()
{
    volverEliminar();
}

void MainWindow::on_BVolver_2_clicked()
{
    volverEliminar();
}

void MainWindow::on_BModVol_clicked()
{
    volverModificar();
}

void MainWindow::on_BModVol_2_clicked()
{
    volverModificar();
}

void MainWindow::on_BPrecioCon_clicked()
{
    cont++;
    precio="PRECIO";
    emit escribirServidor(QString::fromStdString("XO").toUtf8());
    stringstream pasillo=stringstream(socketAdmin.nombres);
    pasillo.str(socketAdmin.nombres);
    string pas;
    bool lleno=false;
    ui->CBTipoCon->clear();
    while(getline(pasillo, pas)){
        lleno=true;
        if (!(pas.empty())){
            cout<<"if"<<endl;
            QString pasq = QString::fromStdString(pas);
            ui->CBTipoCon->addItem(pasq);
        }
    }
    if (cont>=2&&lleno){
        ui->BImpCon->setVisible(false);
        ui->BPrecioCon->setVisible(false);
        ui->BCanCon->setVisible(false);
        ui->LConsultar->setText("         Consulte el precio de una marca");
        ui->LTipoCon->setText("Pasillo");
        ui->LTipoCon->setVisible(true);
        ui->CBTipoCon->setVisible(true);
        ui->LCDPrecioCon->setVisible(true);
        ui->BBuscarPasilloCon->setVisible(true);
        ui->LColonIma->setVisible(true);
        ui->BBuscarOtraCon->setVisible(true);
        cont=0;
    }
}

void MainWindow::on_BBuscarPasilloCon_clicked()
{
    cont++;
    QString codPas=ui->CBTipoCon->currentText();
    string pas=codPas.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codPasi=token;
    QString pasi=QString::fromStdString(codPasi);
    if (cont==1){
        cout<<"Algo"<<endl;
        pasilloCon=pasi;
    }
    emit escribirServidor("XA"+pasi.toUtf8());
    stringstream producto=stringstream(socketAdmin.nombres);
    producto.str(socketAdmin.nombres);
    string prod;
    bool lleno=false;
    ui->CBTipoCon->clear();
    while(getline(producto, prod)){
        lleno=true;
        if (!(prod.empty())){
            QString prodq = QString::fromStdString(prod);
            ui->CBTipoCon->addItem(prodq);
        }
    }
    if (cont==2&&lleno){
        ui->LTipoCon->setText("Producto");
        ui->BBuscarPasilloCon->setVisible(false);
        ui->BBuscarProdCon->setVisible(true);
        cont=0;
    }
}

void MainWindow::on_BBuscarProdCon_clicked()
{
    cont++;
    QString pasi=pasilloCon;
    QString codProd=ui->CBTipoCon->currentText();
    if (codProd=="No productos disponibles"){
        QMessageBox::information(
            this,
            tr("Aviso"),
            tr("El pasillo seleccionado no tiene productos, seleccione otro"));
    }
    else{
        string prod=codProd.toLocal8Bit().constData();
        char cstr1[prod.size() + 1];
        strcpy(cstr1, prod.c_str());
        char var1[]=":";
        char *token1 = strtok(cstr1,var1);
        string codProdu=token1;
        QString produ=QString::fromStdString(codProdu);
        if (cont==1){
            prodCon=produ;
        }
        emit escribirServidor(("BX;"+pasi+";"+produ).toUtf8());
        stringstream producto=stringstream(socketAdmin.nombres);
        producto.str(socketAdmin.nombres);
        string productos;
        bool lleno=false;
        ui->CBTipoCon->clear();
        while(getline(producto, productos)){
            lleno=true;
            if (!(productos.empty())){
                QString prodq = QString::fromStdString(productos);
                ui->CBTipoCon->addItem(prodq);
            }
        }
        if (cont==2 && lleno){
            ui->BBuscarProdCon->setVisible(false);
            ui->BBuscarPrecioCon->setVisible(true);
            ui->LTipoCon->setText("Marca");
            cont=0;
        }
    }
}

void MainWindow::on_BBuscarPrecioCon_clicked()
{
    cont++;
    QString codis=pasilloCon+";"+prodCon;
    QString marca=ui->CBTipoCon->currentText();
    string mar=marca.toLocal8Bit().constData();
    char cstr1[mar.size() + 1];
    strcpy(cstr1, mar.c_str());
    char var1[]=":";
    char *token1 = strtok(cstr1,var1);
    string codMar=token1;
    string cods=codis.toLocal8Bit().constData();
    if (marca=="No marca disponible"){
        QMessageBox::information(
            this,
            tr("Aviso"),
            tr("No hay marcas en este producto, seleccione otro"));
    }
    else{
        if (precio=="PRECIO"){
            emit escribirServidor(QString::fromStdString("YZ;"+cods+";"+codMar).toUtf8());
            if (cont>=2){
                ui->LCDPrecioCon->display(QString::fromStdString(socketAdmin.nombres));
                cont=0;
            }
        }
        else if(precio=="IMPUESTO"){
            emit escribirServidor(QString::fromStdString("XZ;"+cods+";"+codMar).toUtf8());
            if (cont>=2){
                ui->LCDPrecioCon->display(QString::fromStdString(socketAdmin.nombres));
                cont=0;
            }
        }
        else if (precio=="CANASTA"){
            if (cont>=2){
                QPixmap si(":/Images/check.jpg");
                QPixmap no(":/Images/IMG-20191110-WA0029.jpg");
                emit escribirServidor(QString::fromStdString("WZ;"+cods+";"+codMar).toUtf8());
                cout<<"Nombres ven: "<<socketAdmin.nombres<<endl;
                if (socketAdmin.nombres=="SI"){
                    cout<<"SI ventana"<<endl;
                    ui->confirmacion_2->setVisible(false);
                    ui->confirmacion_3->setVisible(true);
                    ui->confirmacion_3->setPixmap(si);
                }
                else if (socketAdmin.nombres=="NO"){
                    cout<<"NO ventana"<<endl;
                    ui->confirmacion_2->setVisible(false);
                    ui->confirmacion_4->setVisible(true);
                    ui->confirmacion_4->setPixmap(no);
                }
                cont=0;
            }

        }
    }
}

void MainWindow::on_BImpCon_clicked()
{
    cont++;
    precio="IMPUESTO";
    emit escribirServidor(QString::fromStdString("XO").toUtf8());
    stringstream pasillo=stringstream(socketAdmin.nombres);
    pasillo.str(socketAdmin.nombres);
    string pas;
    bool lleno=false;
    ui->CBTipoCon->clear();
    while(getline(pasillo, pas)){
        lleno=true;
        if (!(pas.empty())){
            cout<<"if"<<endl;
            QString pasq = QString::fromStdString(pas);
            ui->CBTipoCon->addItem(pasq);
        }
    }
    if (cont>=2&&lleno){
        ui->BImpCon->setVisible(false);
        ui->BPrecioCon->setVisible(false);
        ui->BCanCon->setVisible(false);
        ui->LConsultar->setText("         Consulte el precio de una marca");
        ui->LTipoCon->setText("Pasillo");
        ui->LTipoCon->setVisible(true);
        ui->CBTipoCon->setVisible(true);
        ui->LCDPrecioCon->setVisible(true);
        ui->BBuscarPasilloCon->setVisible(true);
        ui->porcentaje->setVisible(true);
        ui->BBuscarOtraCon->setVisible(true);
        cont=0;
    }
}

void MainWindow::on_BCanCon_clicked()
{
    precio="CANASTA";
    cont++;
    emit escribirServidor(QString::fromStdString("XO").toUtf8());
    stringstream pasillo=stringstream(socketAdmin.nombres);
    pasillo.str(socketAdmin.nombres);
    string pas;
    bool lleno=false;
    ui->CBTipoCon->clear();
    while(getline(pasillo, pas)){
        lleno=true;
        if (!(pas.empty())){
            cout<<"if"<<endl;
            QString pasq = QString::fromStdString(pas);
            ui->CBTipoCon->addItem(pasq);
        }
    }
    if (cont>=2&&lleno){
        ui->BImpCon->setVisible(false);
        ui->BPrecioCon->setVisible(false);
        ui->BCanCon->setVisible(false);
        ui->LConsultar->setText("         Consulte el precio de una marca");
        ui->LTipoCon->setText("Pasillo");
        ui->LTipoCon->setVisible(true);
        ui->CBTipoCon->setVisible(true);
        ui->BBuscarPasilloCon->setVisible(true);
        ui->confirmacion_2->setVisible(true);
        ui->BBuscarOtraCon->setVisible(true);
        cont=0;
    }
}

void MainWindow::on_BBuscarOtraCon_clicked()
{
    ui->BImpCon->setVisible(true);
    ui->BCanCon->setVisible(true);
    ui->BPrecioCon->setVisible(true);
    ui->LConsultar->setText("Consulte el precio, el impuesto o la canasta de un producto");
    ui->LCDPrecioCon->setVisible(false);
    ui->CBTipoCon->setVisible(false);
    ui->LTipoCon->setVisible(false);
    ui->BBuscarProdCon->setVisible(false);
    ui->BBuscarPasilloCon->setVisible(false);
    ui->BBuscarPrecioCon->setVisible(false);
    ui->BBuscarOtraCon->setVisible(false);
    ui->porcentaje->setVisible(false);
    ui->LColonIma->setVisible(false);
    ui->confirmacion_2->setVisible(false);
    ui->confirmacion_3->setVisible(false);
    ui->confirmacion_4->setVisible(false);

}

void MainWindow::on_BGondolas_clicked()
{
    cont++;
    emit escribirServidor(QString::fromStdString("LG").toUtf8());
    cout<<"Contador: "<<cont<<endl;
    cout<<"Recar: "<<socketAdmin.cantRecar<<endl;
    if (socketAdmin.cantRecar==0&& cont==2){
        QMessageBox::information(
            this,
            tr("Aviso"),
            tr("No hay productos para recargar"));
        cont=0;
    }
    else{
        ui->LQGong->clear();
        stringstream recargar=stringstream(socketAdmin.nombres);
        recargar.str(socketAdmin.nombres);
        string productos;
        bool lleno=false;
        while(getline(recargar, productos)){
            lleno=true;
            if (!(productos.empty())){
                QString prodq = QString::fromStdString(productos);
                cout<<"Prod recarga: "<<prodq.toLocal8Bit().constData();
                ui->LQGong->addItem(prodq);
           }
        }
        if (cont>=2){
            ui->LVeri->setText("Rellenando gondolas");
            ui->BGondolas->setVisible(false);
            ui->BInven->setVisible(false);
            ui->SGon->setVisible(true);
            ui->SGon->setValue(1);
            ui->BAgregar->setVisible(true);
            ui->LQGong->setVisible(true);
            ui->BVolverGon->setVisible(true);
            ui->LCantGon->setVisible(true);
            cont=0;
        }
    }
}

void MainWindow::on_BVolverGon_clicked()
{
     ui->LVeri->setText("Verifique la cantidad de productos que hay en las gondolas y en el inventario");
     ui->BGondolas->setVisible(true);
     ui->BInven->setVisible(true);
     ui->LQGong->setVisible(false);
     ui->LQGong->clear();
     ui->SGon->setVisible(false);
     ui->SCant->clear();
     ui->BVolverGon->setVisible(false);
     ui->BAgregar->setVisible(false);
     ui->LCantGon->setVisible(false);
}

void MainWindow::on_BFacturar_clicked()
{
    cont=0;
    emit escribirServidor(QString::fromStdString("FK").toUtf8());
    QMessageBox::information(
        this,
        tr("Aviso"),
        tr("Factura generada exitosamente"));
}

void MainWindow::on_BAgregar_clicked()
{
    QString canti=ui->SGon->text();
    emit escribirServidor(("RG;"+canti).toUtf8());
    ui->LQGong->takeItem(0);
}

void MainWindow::on_BBRPas1_clicked()
{
    emit escribirServidor(QString::fromStdString("XO").toUtf8());
    stringstream pasi=stringstream(socketAdmin.nombres);
    cout<<socketAdmin.nombres<<endl;
    pasi.str(socketAdmin.nombres);
    string pas;
    bool llen=false;
    ui->CBRPas1->clear();
    while(getline(pasi, pas)){
        llen =true;
        if (!(pas.empty())){
            QString pasq = QString::fromStdString(pas);
            ui->CBRPas1->addItem(pasq);
        }
    }
    if(llen)
        cont=0;
}

void MainWindow::on_BBRPas2_clicked()
{
    emit escribirServidor(QString::fromStdString("XO").toUtf8());
    stringstream pasi=stringstream(socketAdmin.nombres);
    cout<<socketAdmin.nombres<<endl;
    pasi.str(socketAdmin.nombres);
    string pas;
    bool llen=false;
    ui->CBRPas2->clear();
    while(getline(pasi, pas)){
        llen =true;
        if (!(pas.empty())){
            QString pasq = QString::fromStdString(pas);
            ui->CBRPas2->addItem(pasq);
        }
    }
    if(llen)
        cont=0;
}

void MainWindow::on_BBRPas3_clicked()
{
    emit escribirServidor(QString::fromStdString("XO").toUtf8());
    stringstream pasi=stringstream(socketAdmin.nombres);
    cout<<socketAdmin.nombres<<endl;
    pasi.str(socketAdmin.nombres);
    string pas;
    bool llen=false;
    ui->CBRPas3->clear();
    while(getline(pasi, pas)){
        llen =true;
        if (!(pas.empty())){
            QString pasq = QString::fromStdString(pas);
            ui->CBRPas3->addItem(pasq);
        }
    }
    if(llen)
        cont=0;
}

void MainWindow::on_BBRPas4_clicked()
{
    emit escribirServidor(QString::fromStdString("XO").toUtf8());
    stringstream pasi=stringstream(socketAdmin.nombres);
    cout<<socketAdmin.nombres<<endl;
    pasi.str(socketAdmin.nombres);
    string pas;
    bool llen=false;
    ui->CBRPas4->clear();
    while(getline(pasi, pas)){
        llen =true;
        if (!(pas.empty())){
            QString pasq = QString::fromStdString(pas);
            ui->CBRPas4->addItem(pasq);
        }
    }
    if(llen)
        cont=0;
}

void MainWindow::on_BBRPro1_clicked()
{
    QString codPas=ui->CBRPas3->currentText();
    string pas=codPas.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codPasi=token;
    QString pasi=QString::fromStdString(codPasi);
    emit escribirServidor("XA"+pasi.toUtf8());
    stringstream producto=stringstream(socketAdmin.nombres);
    producto.str(socketAdmin.nombres);
    string prod;
    bool lleno=false;
    ui->CBRPro1->clear();
    while(getline(producto, prod)){
        lleno=true;
        if (!(prod.empty())){
            QString prodq = QString::fromStdString(prod);
            ui->CBRPro1->addItem(prodq);
        }
    }
}

void MainWindow::on_BBRPro2_clicked()
{
    QString codPas=ui->CBRPas4->currentText();
    string pas=codPas.toLocal8Bit().constData();
    char cstr[pas.size() + 1];
    strcpy(cstr, pas.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    string codPasi=token;
    QString pasi=QString::fromStdString(codPasi);
    emit escribirServidor("XA"+pasi.toUtf8());
    stringstream producto=stringstream(socketAdmin.nombres);
    producto.str(socketAdmin.nombres);
    string prod;
    bool lleno=false;
    ui->CBRPro2->clear();
    while(getline(producto, prod)){
        lleno=true;
        if (!(prod.empty())){
            QString prodq = QString::fromStdString(prod);
            ui->CBRPro2->addItem(prodq);
        }
    }
}
string MainWindow::dividir(string cod)
{
    char cstr[cod.size() + 1];
    strcpy(cstr, cod.c_str());
    char var[]=":";
    char *token = strtok(cstr,var);
    return token;
}

void MainWindow::on_pushButton_6_clicked()
{
    string codigos;
    string cod=ui->CBRPas1->currentText().toLocal8Bit().constData();
    cod=dividir(cod);
    codigos=codigos+";"+cod;
    cod=ui->CBRPas2->currentText().toLocal8Bit().constData();
    cod=dividir(cod);
    codigos=codigos+";"+cod;
    cod=ui->CBRPas3->currentText().toLocal8Bit().constData();
    cod=dividir(cod);
    codigos=codigos+";"+cod;
    cod=ui->CBRPro1->currentText().toLocal8Bit().constData();
    cod=dividir(cod);
    codigos=codigos+";"+cod;
    cod=ui->CBRPas4->currentText().toLocal8Bit().constData();
    cod=dividir(cod);
    codigos=codigos+";"+cod;
    cod=ui->CBRPro2->currentText().toLocal8Bit().constData();
    cod=dividir(cod);
    codigos=codigos+";"+cod;
    emit escribirServidor(QString::fromStdString("MM;"+codigos).toUtf8());

}



void MainWindow::on_pushButton_7_clicked()
{
    cont++;
    ofstream archivo;
    emit escribirServidor(QString::fromStdString("GK").toUtf8());
    archivo.open("Entraga de compras.txt",ios::out);
    if(cont==2)
        archivo<<socketAdmin.nombres;
    archivo.close();
}
