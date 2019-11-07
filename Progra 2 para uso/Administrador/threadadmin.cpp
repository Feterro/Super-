#include "threadadmin.h"

ThreadAdmin::ThreadAdmin(QObject *parent):QThread(parent)
{
    connect(this, SIGNAL(escribirServidor(QByteArray)),&socketAdmin,SLOT(escribirServidor(QByteArray)));
}

void ThreadAdmin::run()
{
    bool fin=true;
    while(fin)
    {
        emit escribirServidor(QString::fromStdString("XD").toUtf8());
        string identificacion;
        cout<<"Digite su codigo de administrador: ";
        cin>>identificacion;
        cout<<"\n";
        emit escribirServidor(QString::fromStdString("XV;"+identificacion).toUtf8());
        this->sleep(1);
        if(socketAdmin.registro==true)
        {
            emit escribirServidor(QString::fromStdString("XB").toUtf8());
            fin=false;
            bool menu=true;
            while(menu){
                cout<<"Bienvenido!"<<endl;
                cout<<"Usted tiene las opciones de: "<<endl;
                cout<<"1.Insertar Pasillo"<<endl;
                cout<<"2.Insertar Producto"<<endl;
                cout<<"3.Insertar Marca"<<endl;
                cout<<"4.Consultar el % impuesto de un producto"<<endl;
                cout<<"5.Modificar el Precio"<<endl;
                cout<<"6.Modificar el % de impuesto"<<endl;
                cout<<"7.Modificar si el producto pertenece a la canasta basica"<<endl;
                cout<<"8.Consultar un precio"<<endl;
                cout<<"9.Consultar si un producto es de la canasta"<<endl;
                cout<<"10.Eliminar Pasillo"<<endl;
                cout<<"11.Eliminar Producto"<<endl;
                cout<<"12.Eliminar Marca"<<endl;
                cout<<"13.Eliminar cliente"<<endl;
                cout<<"14.Facturar"<<endl;
                cout<<"15.Verificar gondolas"<<endl;
                cout<<"16.Verificar inventario"<<endl;
                cout<<"17.Reportes"<<endl;
                cout<<"18.Salir"<<endl;
                cout<<"\nEscriba el numero de la opcion que desea: "<<endl;
                string resp;
                cin>>resp;
                if (resp=="1"){
                    insertarPas();
                }
                else if (resp=="2"){
                    insertarPro();
                }
                else if (resp=="3"){
                    insertarMar();
                }
                else if (resp=="4"){
                    cons(resp);
                }
                else if (resp=="5"){
                    modificar(resp);
                }
                else if (resp=="6"){
                    modificar(resp);
                }
                else if (resp=="7"){
                    modificar(resp);
                }
                else if (resp=="8"){
                    cons(resp);
                }
                else if (resp=="9"){
                    cons(resp);
                }
                else if (resp=="10"){
                    cout<<"eliminar"<<endl;
                }
                else if (resp=="11"){
                    cout<<"eliminar"<<endl;
                }
                else if (resp=="12"){
                    cout<<"eliminar"<<endl;
                }
                else if (resp=="13"){
                    cout<<"eliminar"<<endl;
                }
                else if (resp=="14"){
                    emit escribirServidor(QString::fromStdString("FK").toUtf8());
                    this->sleep(1);
                }
                else if (resp=="15"){
                    revisarGondolas();
                }
                else if (resp=="16"){
                    //princi.cargarInventario();
                }
                else if(resp=="17"){
                    //princi.generarReporte();
                    cout<<"reporte generado!"<<endl;
                }
                else if (resp=="18"){
                    cout<<"Gracias por usar el sistema"<<endl;
                    menu=false;
                    fin=true;
                    emit escribirServidor(QString::fromStdString("XD").toUtf8());
                }
            }

        }
        else
            cout<<"Codigo invalido"<<endl;
    }
}
void ThreadAdmin::revisarGondolas()
{
    cout<<"\n"<<endl;
    emit escribirServidor(QString::fromStdString("LG").toUtf8());
    this->sleep(1);
    int cont=socketAdmin.cantRecar;
    cout<<"\nDigite la cantidad de los productos uno a uno"<<endl;
    while(cont>0)
    {
        string soli;
        cout<<"\nDigite la cantidad de recarga: ";
        cin>>soli;
        emit escribirServidor(QString::fromStdString("RG;"+soli).toUtf8());
        cont--;
    }
    cout<<"\nRecarga terminada!\n"<<endl;
}

void ThreadAdmin::modificar(string resp)
{
    cout<<"\n";
    emit escribirServidor(QString::fromStdString("XO").toUtf8());
    this->sleep(1);
    string env;
    string codComp;
    cout<<"\nDigite el codigo de Pasillo que desea: "<<endl;
    cin>>env;
    cout<<"\n";
    codComp=env;
    emit escribirServidor(QString::fromStdString("XA"+codComp).toUtf8());
    this->sleep(1);
    cout<<"Digite el codigo de Producto que desea: "<<endl;
    cin>>env;
    cout<<"\n";
    codComp=codComp+";"+env;
    emit escribirServidor(QString::fromStdString("BX;"+codComp).toUtf8());
    this->sleep(1);
    cout<<"Digite el codigo de Marca que desea: "<<endl;
    cin>>env;
    codComp=codComp+";"+env;
    this->sleep(1);
    if(resp=="5")
    {
        cout<<"Digite el nuevo precio a asignar: "<<endl;
        cin>>env;
        codComp=codComp+";"+env;
        emit escribirServidor(QString::fromStdString("MX;"+codComp).toUtf8());
    }
    else if(resp=="6")
    {
        cout<<"Digite el nuevo porcentaje de impuesto a asignar: "<<endl;
        cin>>env;
        codComp=codComp+";"+env;
        emit escribirServidor(QString::fromStdString("NX;"+codComp).toUtf8());
    }
    else if(resp=="7")
    {
        emit escribirServidor(QString::fromStdString("LX;"+codComp).toUtf8());
    }
    cout<<"\n"<<endl;
    this->sleep(1);
}
void ThreadAdmin::cons(string cod)
{
    cout<<"\n";
    emit escribirServidor(QString::fromStdString("XO").toUtf8());
    this->sleep(1);
    string env;
    string codComp;
    cout<<"\nDigite el codigo de Pasillo que desea: "<<endl;
    cin>>env;
    cout<<"\n";
    codComp=env;
    emit escribirServidor(QString::fromStdString("XA"+codComp).toUtf8());
    this->sleep(1);
    cout<<"Digite el codigo de Producto que desea: "<<endl;
    cin>>env;
    cout<<"\n";
    codComp=codComp+";"+env;
    emit escribirServidor(QString::fromStdString("BX;"+codComp).toUtf8());
    this->sleep(1);
    cout<<"Digite el codigo de Marca que desea: "<<endl;
    cin>>env;
    codComp=codComp+";"+env;
    if(cod=="4")
        emit escribirServidor(QString::fromStdString("XZ;"+codComp).toUtf8());
    else if(cod=="8")
        emit escribirServidor(QString::fromStdString("YZ;"+codComp).toUtf8());
    else if(cod=="9")
        emit escribirServidor(QString::fromStdString("WZ;"+codComp).toUtf8());
    cout<<"\n\n"<<endl;
    this->sleep(1);
}
void ThreadAdmin::insertarPas()
{
    string cod;
    string nom;
    cout<<"Digite El codigo del nuevo Pasillo: ";
    cin>>cod;
    cout<<"\nDigite el nombre del nuevo Pasillo: ";
    cin>>nom;
    string codnom=cod+";"+nom;
    emit escribirServidor(QString::fromStdString("XP;"+codnom).toUtf8());
    this->sleep(1);
}

void ThreadAdmin::insertarPro()
{
    while(socketAdmin.correcto)
    {
        cout<<"\n";
        emit escribirServidor(QString::fromStdString("CO").toUtf8());
        this->sleep(1);
        string env;
        cout<<"\nDigite el codigo de Pasillo que desea: "<<endl;
        cin>>env;
        cout<<"\n";
        string cod;
        string nom;
        cout<<"Digite El codigo del nuevo Producto: ";
        cin>>cod;
        cout<<"\nDigite el nombre del nuevo Producto: ";
        cin>>nom;
        string codnom=cod+";"+nom;
        emit escribirServidor(QString::fromStdString("XR;"+env+";"+codnom).toUtf8());
        this->sleep(1);
        if(!socketAdmin.correcto)
            cout<<"Codigos incorrectos, intente de nuevo\n"<<endl;
        else
            break;
    }
}

void ThreadAdmin::insertarMar()
{
    while(socketAdmin.correcto)
    {
        string env;
        string cod;
        string nuevcod;
        string nuevnom;
        string nuevcant;
        string nuevpre;
        string nuevcan;
        cout<<"\n";
        emit escribirServidor(QString::fromStdString("XO").toUtf8());
        this->sleep(1);
        cout<<"\nDigite el codigo de Pasillo que desea: "<<endl;
        cin>>env;
        cout<<"\n";
        emit escribirServidor(QString::fromStdString("XA"+env).toUtf8());
        this->sleep(1);
        cout<<"Digite el codigo de Producto que desea: "<<endl;
        cin>>cod;
        cout<<"Digite el codigo de la nueva marca: "<<endl;
        cin>>nuevcod;
        cout<<"Digite el nombre de la nueva marca: "<<endl;
        cin>>nuevnom;
        cout<<"Digite la cantidad del nuevo producto: "<<endl;
        cin>>nuevcant;
        cout<<"Digite el precio del nuevo producto: "<<endl;
        cin>>nuevpre;
        cout<<"Digite 1 si es de canasta basica u otra cosa sino: "<<endl;
        cin>>nuevcan;
        env=env+";"+cod+";"+nuevcod+";"+nuevnom+";"+nuevcant+";"+nuevpre+";"+nuevcan;
        emit escribirServidor(QString::fromStdString("XM;"+env).toUtf8());
    }
}
