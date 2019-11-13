#include "admin.h"

Admin::Admin(QObject *parent):QThread(parent)
{

}

void Admin::SocketConnection()
{
    socketCli=new QTcpSocket(this);

    socketCli->connectToHost("LocalHost",1234);

    if(socketCli->waitForConnected(5000))
    {
        connect(this->socketCli,SIGNAL(connected()),this,SLOT(connected()));
        connect(this->socketCli,SIGNAL(disconnected()),this,SLOT(disconnected()));
        connect(this->socketCli,SIGNAL(readyRead()),this,SLOT(readyRead()));


        qDebug()<< "Administrador conectado!";
    }
    else
    {
        qDebug()<<"Imposible conectarse";
    }
}
void Admin:: connected()
{

}
void Admin::disconnected()
{
    qDebug()<<"Conexion perdida";
}
void Admin::readyRead()
{
    QByteArray info=socketCli->readAll();
    string infoConv=info.toStdString();
   //cout<<infoConv<<endl;
    if(infoConv.substr(0,2)=="AV"||infoConv.substr(0,2)=="AN")
    {
        cambiarRegistro(infoConv);
    }
    else if(infoConv.substr(0,2)=="LE")
    {
        string codVal=infoConv;
        char cstr[codVal.size() + 1];
        strcpy(cstr, codVal.c_str());
        char var[]=";";
        char *token = strtok(cstr,var);
        token = strtok(NULL,var);
        string lectura=token;
        aviso=lectura;
    }
    else if(infoConv.substr(0,2)=="MM")
    {
        string codVal=infoConv;
        char cstr[codVal.size() + 1];
        strcpy(cstr, codVal.c_str());
        char var[]=";";
        char *token = strtok(cstr,var);
        ofstream archivo;
        archivo.open("Reporte.txt",ios::out);
        archivo<<token;
        archivo.close();
    }
    else if(infoConv.substr(0,2)=="MA")
    {
        char cstr[infoConv.size() + 1];
        strcpy(cstr, infoConv.c_str());
        char var[]=";";
        char *token = strtok(cstr,var);
        token = strtok(NULL,var);
        if (token==nullptr){
            this->nombres="No pasillos disponibles";
        }
        else{
            this->nombres=token;
        }
    }
    else if(infoConv.substr(0,2)=="MB"||infoConv.substr(0,2)=="MC")
    {
        char cstr[infoConv.size() + 1];
        strcpy(cstr, infoConv.c_str());
        char var[]=";";
        char *token = strtok(cstr,var);
        token = strtok(NULL,var);
        if (token==nullptr){
            if (infoConv.substr(0,2)=="MB"){
                this->nombres="No productos disponibles";
            }
            else if (infoConv.substr(0,2)=="MC"){
                this->nombres="No marcas disponibles";
            }
        }
        else{
            this->nombres=token;
            cout<<"Nombres: "<<nombres<<endl;
       }
    }
    else if(infoConv.substr(0,2)=="VF")
    {
        correccion(infoConv);
    }
    else if(infoConv.substr(0,2)=="LG")
    {
        //cout<<infoConv<<endl;
        char cstr[infoConv.size() + 1];
        strcpy(cstr, infoConv.c_str());
        char var[]=";";
        char *token = strtok(cstr,var);
        token = strtok(NULL,var);
        string canti=token;
        this->cantRecar=stoi(canti);
        cout<<"Recarga: "<<cantRecar<<endl;
        if(this->cantRecar>0){
            token = strtok(NULL,var);
            nombres=nombres+token;
        }
    }
}
void Admin::escribirServidor(QByteArray info)
{
    this->socketCli->write(info);
}
void Admin::cambiarRegistro(string infoConv)
{
    if(infoConv=="AV")
    {
        this->registro=true;
    }
    else if(infoConv=="AN")
    {
        this->registro=false;
    }
}

void Admin::correccion(string vali)
{
   //cout<<"VALI="<<vali<<endl;
    if(vali=="VF")
        this->correcto=false;
    else
        this->correcto=true;
}
