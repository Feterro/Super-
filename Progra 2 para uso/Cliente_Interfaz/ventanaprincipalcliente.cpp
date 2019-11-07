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
    ui->BCancelar->setVisible(false);
    ui->LDatos->setVisible(false);
    ui->BIngresar->setEnabled(false);
    ui->LVerExitosa->setVisible(false);
    ui->LDisfrute->setVisible(false);
    ui->LResEx->setVisible(false);
    ui->LDatos->setVisible(false);
    ui->BRegistrar->setVisible(false);
    ui->BCancelar->setVisible(false);
    ui->tabsClientes->setTabText(0, "Ingresar");
    ui->tabsClientes->setTabText(1, "Consultar Precio");
    ui->tabsClientes->setTabText(2, "Consultar Canasta");
    ui->tabsClientes->setTabText(3, "Consultar Impuesto");
    ui->tabsClientes->setTabText(5, "Ver Facturas");
    ui->tabsClientes->setTabText(4, "Comprar");
    ui->tabsClientes->setTabEnabled(4, false);
    ui->tabsClientes->setTabEnabled(5, false);
    ui->CBMarcas->setVisible(false);
    ui->CBProductos->setVisible(false);
    ui->BBuscarProd->setVisible(false);
    ui->BBuscarPrecio->setVisible(false);
    ui->LCDPrecio->setDecMode();
    ui->BBuscarPasillo->setEnabled(false);
    QPixmap colon(":/ima/Images/colon4.jpg");
    ui->LColonIma->setPixmap(colon);

    connect(this, SIGNAL(escribirServidor(QByteArray)),&socketCli,SLOT(escribirServidor(QByteArray)));
}

ventanaPrincipalCliente::~ventanaPrincipalCliente()
{
    delete ui;
}
string codPas;
string codProd;
string codMar;
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
    //Menu de cliente no registrado
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
        ui->BCancelar->setVisible(true);
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
    thread()->sleep(1);
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
    QVariant ciu=ui->CBCiudad->itemData (ui->CBCiudad-> currentIndex ());
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
        cout<<"Else"<<endl;
        if (ciu=="San Jose"){
            codCiu="11";
        }
        else if (ciu=="Cartago"){
            codCiu="22";
        }
        else if (ciu=="Heredia"){
            codCiu="33";
        }
        else if (ciu=="Liberia"){
            codCiu="55";
        }
        else if (ciu=="P4"){
            codCiu="114";
        }
        else if (ciu=="Buenos Aires"){
            codCiu="88";
        }
        else if (ciu=="Tilarán"){
            codCiu="99";
        }
        else if (ciu=="Bagaces"){
            codCiu="66";
        }
        else if (ciu=="P3"){
            codCiu="113";
        }
        else if (ciu=="Puerto Viejo"){
            codCiu="100";
        }
        else if (ciu=="Pital"){
            codCiu="12";
        }
        else if (ciu=="Siquirres"){
            codCiu="49";
        }
        else if (ciu=="Matina"){
            codCiu="18";
        }
        else if (ciu=="P2"){
            codCiu="112";
        }
        else if (ciu=="Telire"){
            codCiu="95";
        }
        else if (ciu=="Parrita"){
            codCiu="120";
        }
        else if (ciu=="Samara"){
            codCiu="122";
        }
        else if (ciu=="Jacó"){
            codCiu="09";
        }
        else if (ciu=="P1"){
            codCiu="111";
        }
        string nuevReg=";"+cedula+";"+nombre+";"+codCiu+";"+telefono+";"+correo+";";
        emit escribirServidor(QString::fromStdString("RE"+nuevReg).toUtf8());
        thread()->sleep(1);
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
            ui->BCancelar->setVisible(false);
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
    thread()->sleep(1);
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
    thread()->sleep(1);
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
        thread()->sleep(1);
        stringstream pasillo=stringstream(socketCli.nombresCB);
        pasillo.str(socketCli.nombresCB);
        string pas;
        bool lleno=false;
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
