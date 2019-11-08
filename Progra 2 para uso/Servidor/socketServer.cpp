#include "socketServer.h"

serverSocket::serverSocket(QObject *parent) : QTcpSocket(parent)
{
    QThreadPool::globalInstance()->setMaxThreadCount(10);
}

void serverSocket::setSocket(qintptr handle)
{
    socket=new QTcpSocket(this);

    connect(socket,SIGNAL(connected()),this,SLOT(connected()));
    connect(socket,SIGNAL(disconnected()),this,SLOT(disconnected()));
    connect(socket,SIGNAL(readyRead()),this,SLOT(readyRead()));

    socket->setSocketDescriptor(handle);
}
void serverSocket:: connected()
{

}
void serverSocket::disconnected()
{
    qDebug()<<"Conexion desestablecida";
}

void serverSocket::readyRead()
{
    QByteArray info=socket->readAll();
    //qDebug()<<info<<endl;
    string infoConv=info.toStdString();
    if(infoConv.substr(0,2)=="IN"||infoConv.substr(0,2)=="RK"||infoConv.substr(0,2)=="KA"||infoConv.substr(0,2)=="RE"||infoConv.substr(0,2)=="CO"||infoConv.substr(0,2)=="CA"||infoConv.substr(0,2)=="CB"||infoConv.substr(0,2)=="CF"||infoConv.substr(0,2)=="ZP"||infoConv.substr(0,2)=="ZC"||infoConv.substr(0,2)=="ZR")
          this->funcionesCliente(infoConv);
    else if(infoConv.substr(0,2)=="EM"||infoConv.substr(0,2)=="ER"||infoConv.substr(0,2)=="EP"||infoConv.substr(0,2)=="RG"||infoConv.substr(0,2)=="LG"||infoConv.substr(0,2)=="FK"||infoConv.substr(0,2)=="WZ"||infoConv.substr(0,2)=="YZ"||infoConv.substr(0,2)=="NX"||infoConv.substr(0,2)=="LX"||infoConv.substr(0,2)=="MX"||infoConv.substr(0,2)=="XZ"||infoConv.substr(0,2)=="BX"||infoConv.substr(0,2)=="XO"||infoConv.substr(0,2)=="XA"||infoConv.substr(0,2)=="XB"||infoConv.substr(0,2)=="XD"||infoConv.substr(0,2)=="XV"||infoConv.substr(0,2)=="XP"||infoConv.substr(0,2)=="XR"||infoConv.substr(0,2)=="XM"||infoConv.substr(0,2)=="XC")
        this->funcionesAdministrador(infoConv);
}
void serverSocket::funcionesAdministrador(string infoConv)
{
    if(infoConv.substr(0,2)=="XB")
    {
        arbolPasillos.bloqueo=true;
    }
    else if(infoConv.substr(0,2)=="XD")
    {
        arbolPasillos.bloqueo=false;
    }
    else if(infoConv.substr(0,2)=="LG")
    {
        string lis=princi.enlistarGondolas();
        //cout<<lis<<endl;
        int num=0;
        pnodoVenta aux=princi.ventas.primero;
        while(num<princi.ventas.largoLista())
        {
            cout<<aux->codPasillo<<"~";
            aux=aux->siguiente;
            num++;
        }
        QByteArray listaPro(lis.c_str(), lis.length());
        this->socket->write("LG;"+listaPro);
    }
    else if(infoConv.substr(0,2)=="RG")
    {
        char cstr[infoConv.size() + 1];
        strcpy(cstr, infoConv.c_str());
        char var[]=";";
        char *token = strtok(cstr,var);
        token = strtok(NULL,var);
        string cantidad=token;
        princi.revisarGondolas(stoi(cantidad));
    }
    else if(infoConv.substr(0,2)=="EP")
    {
        char cstr[infoConv.size() + 1];
        strcpy(cstr, infoConv.c_str());
        char var[]=";";
        char *token = strtok(cstr,var);
        token = strtok(NULL,var);
        arbolPasillos.borrarPasillo(token);
        arbolPasillos.InordenTriple(arbolPasillos.raiz);
    }
    else if(infoConv.substr(0,2)=="ER")
    {
        char cstr[infoConv.size() + 1];
        strcpy(cstr, infoConv.c_str());
        char var[]=";";
        char *token = strtok(cstr,var);
        token = strtok(NULL,var);
        string codPas=token;
        token = strtok(NULL,var);
        arbolPasillos.borrarProducto(codPas,token);
        arbolPasillos.InordenTriple(arbolPasillos.raiz);
    }
    else if(infoConv.substr(0,2)=="EM")
    {
        char cstr[infoConv.size() + 1];
        strcpy(cstr, infoConv.c_str());
        char var[]=";";
        char *token = strtok(cstr,var);
        token = strtok(NULL,var);
        string codPas=token;
        token = strtok(NULL,var);
        string codPro=token;
        token = strtok(NULL,var);
        arbolPasillos.borrarMarca(codPas,codPro,token);
        arbolPasillos.InordenTriple(arbolPasillos.raiz);
    }
    else if(infoConv.substr(0,2)=="YZ")
    {
        char cstr[infoConv.size() + 1];
        strcpy(cstr, infoConv.c_str());
        char var[]=";";
        char *token = strtok(cstr,var);
        string codi=token;
        token = strtok(NULL,var);
        string codPas=token;
        token = strtok(NULL,var);
        string codPro=token;
        token = strtok(NULL,var);
        string codMar=token;
        string dev=princi.consultarUnPrecio(codPas,codPro,codMar);
        QByteArray listaPro(dev.c_str(), dev.length());
        this->socket->write("MB;"+listaPro);
    }
    else if(infoConv.substr(0,2)=="WZ")
    {
        char cstr[infoConv.size() + 1];
        strcpy(cstr, infoConv.c_str());
        char var[]=";";
        char *token = strtok(cstr,var);
        string codi=token;
        token = strtok(NULL,var);
        string codPas=token;
        token = strtok(NULL,var);
        string codPro=token;
        token = strtok(NULL,var);
        string codMar=token;
        string dev=princi.ConsultarCanasta(codPas,codPro,codMar);
        QByteArray listaPro(dev.c_str(), dev.length());
        this->socket->write("MB;"+listaPro);
    }
    else if(infoConv.substr(0,2)=="NX")
    {
        char cstr[infoConv.size() + 1];
        strcpy(cstr, infoConv.c_str());
        char var[]=";";
        char *token = strtok(cstr,var);
        string codi=token;
        token = strtok(NULL,var);
        string codPas=token;
        token = strtok(NULL,var);
        string codPro=token;
        token = strtok(NULL,var);
        string codMar=token;
        token = strtok(NULL,var);
        string porce=token;
        pnodoInventario invent=arbolInventario.encontrarNodo(arbolInventario.raiz, codPas, codPro, codMar, invent);
        int porcen=stoi(porce);
        invent->impuesto=porcen;
        this->socket->write("LE;Cambio de impuesto realizado");
        cout<<invent->codMarca<<" "<<invent->nombre<<"  "<<invent->impuesto<<" "<<invent->codCanasta<<endl;
    }
    else if(infoConv.substr(0,2)=="LX")
    {
        char cstr[infoConv.size() + 1];
        strcpy(cstr, infoConv.c_str());
        char var[]=";";
        char *token = strtok(cstr,var);
        string codi=token;
        token = strtok(NULL,var);
        string codPas=token;
        token = strtok(NULL,var);
        string codPro=token;
        token = strtok(NULL,var);
        string codMar=token;
        pnodoInventario invent=arbolInventario.encontrarNodo(arbolInventario.raiz, codPas, codPro, codMar, invent);
        if(invent->codCanasta==true)
            invent->codCanasta=false;
        else
            invent->codCanasta=true;
        this->socket->write("LE;Cambio de canasta realizado");
        cout<<invent->codMarca<<" "<<invent->nombre<<"  "<<invent->impuesto<<" "<<invent->codCanasta<<endl;
    }
    else if(infoConv.substr(0,2)=="BX")
    {
        string codVal=infoConv;
        char cstr[codVal.size() + 1];
        strcpy(cstr, codVal.c_str());
        char var[]=";";
        char *token = strtok(cstr,var);
        token = strtok(NULL,var);
        string codiPas=token;
        token = strtok(NULL,var);
        string codiPro=token;
   // bool val=false;
   // val=arbolPasillos.ValidarProducto1(arbolPasillos.raiz,codiPas,codiPro,val);
        AVLProducto arb;
        string devolv=arb.EnlaceAvlServPro(arbolPasillos.raiz,infoConv);
        QByteArray listaPro(devolv.c_str(), devolv.length());
        this->socket->write("MC;"+listaPro);
    }
    else if(infoConv.substr(0,2)=="XO")
    {
        string devolver=arbolPasillos.InordenServ(arbolPasillos.raiz);
        QByteArray listaPa(devolver.c_str(), devolver.length());
        this->socket->write("MA;"+listaPa);
    }
    else if(infoConv.substr(0,2)=="XA")
    {
        AVLProducto arb;
        string devolver=arb.EnlaceAvlServ(arbolPasillos.raiz,infoConv.substr(2,4));
        QByteArray listaPro(devolver.c_str(), devolver.length());
        this->socket->write("MB;"+listaPro);
    }
    else if(infoConv.substr(0,2)=="XV")
    {
        string codVal=infoConv;
        char cstr[codVal.size() + 1];
        strcpy(cstr, codVal.c_str());
        char var[]=";";
        char *token = strtok(cstr,var);
        token = strtok(NULL,var);
        string iden=token;
        stringstream cb(iden);
        int identi;
        cb>>identi;
        if(princi.validarAdministrador(arbolAdmin,identi))
            this->socket->write("AV");
        else
            this->socket->write("AN");
    }
    else if(infoConv.substr(0,2)=="XP")
    {
        string codVal=infoConv;
        cout<<codVal<<endl;
        char cstr[codVal.size() + 1];
        strcpy(cstr, codVal.c_str());
        char var[]=";";
        char *token = strtok(cstr,var);
        token = strtok(NULL,var);
        string codigo=token;
        token = strtok(NULL,var);
        string nombre=token;
        int largoIni=0;
        int largoCambio=0;
        largoIni=arbolPasillos.largoArbol(arbolPasillos.raiz, largoIni);
        arbolPasillos.InsertaBinario(arbolPasillos.raiz,codigo,nombre);
        largoCambio=arbolPasillos.largoArbol(arbolPasillos.raiz, largoCambio);
        if (largoIni!=largoCambio)
            socket->write("LE;Pasillo Agregado con exito");
        else
            socket->write("LE;El codigo deseado ya existe");
    }
    else if(infoConv.substr(0,2)=="XR")
    {
        string codVal=infoConv;
        //cout<<codVal<<endl;
        char cstr[codVal.size() + 1];
        strcpy(cstr, codVal.c_str());
        char var[]=";";
        char *token = strtok(cstr,var);
        token = strtok(NULL,var);
        string codPasi=token;
        token = strtok(NULL,var);
        string codigo=token;
        token = strtok(NULL,var);
        string nombre=token;
        bool valido=false;
        valido=arbolPasillos.encontrarPasillo(valido, arbolPasillos.raiz, codPasi);
        if(valido)
        {
            bool valid=false;
            valid=arbolPasillos.ValidarProducto1(arbolPasillos.raiz, codPasi, codigo, valid);
            if(!valid)
            {
                cout<<"valido"<<endl;
                pnodoProd nuevo=new nodoProducto(codPasi, codigo, nombre);
                AVLProducto arbolprod;
                arbolprod.EnlaceAvl(arbolPasillos.raiz, nuevo);
                this->socket->write("LE;Producto agregado con exito");
                arbolPasillos.InordenTriple(arbolPasillos.raiz);
            }
            else
                this->socket->write("VF");
        }
        else
            this->socket->write("VF");
    }
    else if(infoConv.substr(0,2)=="XM")
    {
        string codVal=infoConv;
        //cout<<codVal<<endl;
        char cstr[codVal.size() + 1];
        strcpy(cstr, codVal.c_str());
        char var[]=";";
        char *token = strtok(cstr,var);
        token = strtok(NULL,var);
        string codPasi=token;
        token = strtok(NULL,var);
        string codPro=token;
        token = strtok(NULL,var);
        string codMar=token;
        token = strtok(NULL,var);
        string nombre=token;
        token = strtok(NULL,var);
        string cant=token;
        token = strtok(NULL,var);
        string precio=token;
        token = strtok(NULL,var);
        string canasta=token;
        princi.insertarMarca(codPasi,codPro,codMar,nombre,cant,precio,canasta);
        arbolPasillos.InordenTriple(arbolPasillos.raiz);
        this->socket->write("LE;Proceso de insercion terminado");
    }
    else if(infoConv.substr(0,2)=="XZ")
    {
        char cstr[infoConv.size() + 1];
        strcpy(cstr, infoConv.c_str());
        char var[]=";";
        char *token = strtok(cstr,var);
        string codi=token;
        token = strtok(NULL,var);
        string codPas=token;
        token = strtok(NULL,var);
        string codPro=token;
        token = strtok(NULL,var);
        string codMar=token;
        string dev=princi.ConsultarImpuesto(codPas,codPro,codMar);
        QByteArray listaPro(dev.c_str(), dev.length());
        this->socket->write("MB;"+listaPro);
    }
    else if(infoConv.substr(0,2)=="MX")
    {
        char cstr[infoConv.size() + 1];
        strcpy(cstr, infoConv.c_str());
        char var[]=";";
        char *token = strtok(cstr,var);
        string codi=token;
        token = strtok(NULL,var);
        string codPas=token;
        token = strtok(NULL,var);
        string codPro=token;
        token = strtok(NULL,var);
        string codMar=token;
        token = strtok(NULL,var);
        string prec=token;
        pnodoMarca mar=arbolPasillos.encontrarNodo1(arbolPasillos.raiz, codPas, codPro, codMar, mar);
        float preci=stof(prec);
        mar->precio=preci;
        this->socket->write("LE;Cambio de precio realizado");
        arbolPasillos.InordenTriple(arbolPasillos.raiz);
    }
    else if (infoConv.substr(0,2)=="FK") {
        int fac=princi.cola.primero->cedula;
        string fact=to_string(fac);
        pnodoCola auxi=princi.cliente.primeroClie;
        int cantF=0;
        while(auxi->siguiente!=NULL)
        {
            if(auxi->cedula==princi.cola.primero->cedula)
            {
                cantF=auxi->cantFact;
            }
            auxi=auxi->siguiente;
        }
        string cantf=to_string(cantF);
        string nombre=fact+"_"+cantf+".txt";
        cout<<nombre<<endl;
        string factura=princi.agregarListaOrdenada();
        cout<<"\n\n"<<factura<<endl;
        crearFactura(nombre,factura);

//        cout<<"VENTAS"<<endl;
//        pnodoVenta aux=princi.ventas.primero;
//        while(aux->siguiente!=NULL)
//        {
//            cout<<aux->codPasillo<<"~";
//            aux=aux->siguiente;
//        }
    }
}
void serverSocket::funcionesCliente(string infoConv)
{
    if(infoConv.substr(0,2)=="IN")
    {
        if(arbolPasillos.bloqueo==false)
        {
            this->verificarCed(infoConv);
        }
        else
            this->socket->write("BK");
    }
    else if(infoConv.substr(0,2)=="KA")
    {
        if(arbolPasillos.bloqueo==false)
        {
            char cstr[infoConv.size() + 1];
            strcpy(cstr, infoConv.c_str());
            char var[]=";";
            char *token = strtok(cstr,var);
            token = strtok(NULL,var);
            string cedu=token;
            int ced=stoi(cedu);
            string canti;
            pnodoCola auxi=princi.cliente.primeroClie;
            while(auxi->siguiente!=NULL)
            {
                if(auxi->cedula==ced)
                {
                    canti=to_string(auxi->cantFact-1);
                }
                auxi=auxi->siguiente;
            }
            string escr="Usted tiene "+canti+" facturas, digite el numero de cual desea ver\n";
            QByteArray listaPa(escr.c_str(), escr.length());
            this->socket->write("MB;"+listaPa);
        }

    }
    else if(infoConv.substr(0,2)=="RK")
    {
        char cstr[infoConv.size() + 1];
        strcpy(cstr, infoConv.c_str());
        char var[]=";";
        char *token = strtok(cstr,var);
        token = strtok(NULL,var);
        string nombre=token;
        cout<<nombre<<endl;
        string factura=princi.consultarFactura(nombre);
        QByteArray listaPa(factura.c_str(), factura.length());
        this->socket->write("MB;"+listaPa);
    }
    else if(infoConv.substr(0,2)=="RE")
    {
        if(arbolPasillos.bloqueo==false)
        {
            this->agregar(infoConv);
        }
            else
                this->socket->write("BK");

    }
    else if(infoConv.substr(0,2)=="CO")
    {
        if(arbolPasillos.bloqueo==false)
        {
            string devolver=arbolPasillos.InordenServ(arbolPasillos.raiz);
            QByteArray listaPa(devolver.c_str(), devolver.length());
            this->socket->write("MA;"+listaPa);
        }
        else
            this->socket->write("BK");
    }
    else if(infoConv.substr(0,2)=="CA")
    {
        if(arbolPasillos.bloqueo==false)
        {
      //  bool val=false;
      //  val=arbolPasillos.encontrarPasillo(val,arbolPasillos.raiz,infoConv.substr(2,4));
      //  if(val)
       // {
         AVLProducto arb;
         string devolver=arb.EnlaceAvlServ(arbolPasillos.raiz,infoConv.substr(2,4));
         QByteArray listaPro(devolver.c_str(), devolver.length());
         this->socket->write("MB;"+listaPro);
        }
        else
            this->socket->write("BK");
        //}
        //else
          //  this->socket->write("VF");
    }
    else if(infoConv.substr(0,2)=="CB")
    {
        if(arbolPasillos.bloqueo==false)
        {
            string codVal=infoConv;
            char cstr[codVal.size() + 1];
            strcpy(cstr, codVal.c_str());
            char var[]=";";
            char *token = strtok(cstr,var);
            token = strtok(NULL,var);
            string codiPas=token;
            token = strtok(NULL,var);
            string codiPro=token;
           // bool val=false;
           // val=arbolPasillos.ValidarProducto1(arbolPasillos.raiz,codiPas,codiPro,val);

                AVLProducto arb;
                string devolv=arb.EnlaceAvlServPro(arbolPasillos.raiz,infoConv);
                QByteArray listaPro(devolv.c_str(), devolv.length());
                this->socket->write("MC;"+listaPro);
        }
        else
            this->socket->write("BK");
            //else
            //    this->socket->write("VF");
    }
    else if(infoConv.substr(0,2)=="CF")
    {
        if(arbolPasillos.bloqueo==false)
        {
            char cstr[infoConv.size() + 1];
            strcpy(cstr, infoConv.c_str());
            char var[]=";";
            char *token = strtok(cstr,var);
            string codi=token;
            token = strtok(NULL,var);
            string codPas=token;
            token = strtok(NULL,var);
            string codPro=token;
            token = strtok(NULL,var);
            string codMar=token;
            token = strtok(NULL,var);
            string canti=token;
            stringstream camb(canti);
            int cantidad;
            camb>>cantidad;
            token = strtok(NULL,var);
            string cedula=token;
            stringstream camb2(cedula);
            int ced;
            camb2>>ced;
    //        bool val=false;
    //        val=arbolPasillos.validarMarca(arbolPasillos.raiz,codPas,codPro,codMar,val);
    //        if(val)
    //        {
                //***********************************
                bool rep=true;
                if(codi!="CFD")
                {
                    rep=princi.cola.agregarCliente(princi.cola,ced);
                    princi.agregarCola(arbolClientes,ced,this->socket->socketDescriptor());
                }
                if(rep==true)
                {
                    pnodoCola aux=princi.cola.primero;
                    princi.comprar(cantidad,codPas,codPro,codMar);
                   // for(int i=0;i<princi.cola.largoLista();i++)
                  //  {
                  //      cout<<"cedCli "<<aux->cedula<<"->";
                  //      pnodoPila auxi=aux->pila;
                  //      while(auxi!=NULL)
                  //     {
                   //         cout<<"peticion "<<auxi->codMarc<<" "<<auxi->cant<<endl;
                   //         auxi=auxi->siguiente;
                    //    }
                     //   aux=aux->siguiente;
                    //}
                    //this->socket->write("MC; ");
                }
                else
                    this->socket->write("MC;Usted ya se encuentra en la lista de facturacion");
    //        }
    //        else
    //            this->socket->write("VF");
        }
        else
            this->socket->write("BK");
    }
    else if(infoConv.substr(0,2)=="ZP")
    {
        if(arbolPasillos.bloqueo==false)
        {
            char cstr[infoConv.size() + 1];
            strcpy(cstr, infoConv.c_str());
            char var[]=";";
            char *token = strtok(cstr,var);
            string codi=token;
            token = strtok(NULL,var);
            string codPas=token;
            token = strtok(NULL,var);
            string codPro=token;
            token = strtok(NULL,var);
            string codMar=token;
            string dev=princi.consultarUnPrecio(codPas,codPro,codMar);
            QByteArray listaPro(dev.c_str(), dev.length());
            this->socket->write("MB;"+listaPro);
        }
        else
            this->socket->write("BK");
    }
    else if(infoConv.substr(0,2)=="ZR")
    {
        if(arbolPasillos.bloqueo==false)
        {
            char cstr[infoConv.size() + 1];
            strcpy(cstr, infoConv.c_str());
            char var[]=";";
            char *token = strtok(cstr,var);
            string codi=token;
            token = strtok(NULL,var);
            string codPas=token;
            token = strtok(NULL,var);
            string codPro=token;
            token = strtok(NULL,var);
            string codMar=token;
            string dev=princi.ConsultarImpuesto(codPas,codPro,codMar);
            QByteArray listaPro(dev.c_str(), dev.length());
            this->socket->write("MB;"+listaPro);
       }
        else
            this->socket->write("BK");
    }
    else if(infoConv.substr(0,2)=="ZC")
    {
        if(arbolPasillos.bloqueo==false)
        {
            char cstr[infoConv.size() + 1];
            strcpy(cstr, infoConv.c_str());
            char var[]=";";
            char *token = strtok(cstr,var);
            string codi=token;
            token = strtok(NULL,var);
            string codPas=token;
            token = strtok(NULL,var);
            string codPro=token;
            token = strtok(NULL,var);
            string codMar=token;
            string dev=princi.ConsultarCanasta(codPas,codPro,codMar);
            QByteArray listaPro(dev.c_str(), dev.length());
            this->socket->write("MB;"+listaPro);
        }
        else
            this->socket->write("BK");
    }

}

void serverSocket::verificarCed(string info)
{
    Principal prin;
    string infobusc=info.substr(2,7);
    stringstream ss(infobusc);
    int infoConv;
    ss>>infoConv;
    if(arbolPasillos.bloqueo==false)
    {
        if(prin.validarCliente(arbolClientes,infoConv))
        {
            this->socket->write("EXI");//flush
        }
        else if(!prin.validarCliente(arbolClientes,infoConv))
        {
            this->socket->write("FALL");//flush
        }
    }
    else
        this->socket->write("BK");

}

void serverSocket::agregar(string infoConv)
{
    if(arbolPasillos.bloqueo==false)
    {
        char cstr[infoConv.size() + 1];
        strcpy(cstr, infoConv.c_str());
        char var[]=";";
        char *token = strtok(cstr,var);
        token = strtok(NULL,var);
        string cedu=token;
        token = strtok(NULL,var);
        string nomb=token;
        token = strtok(NULL,var);
        string ciud=token;
        token = strtok(NULL,var);
        string tele=token;
        token = strtok(NULL,var);
        string corr=token;
        stringstream conv(cedu);
        int ceduTrans;
        conv>>ceduTrans;
        arbolClientes.insertar(ceduTrans,nomb,tele,ciud,corr);
        arbolClientes.listaCreciente();
    }
    else
        this->socket->write("BK");
}
void serverSocket::crearFactura(string nombre, string texto)
{
    ofstream archivo;
    archivo.open(nombre,ios::out);
    archivo<<texto;
    archivo.close();
}
