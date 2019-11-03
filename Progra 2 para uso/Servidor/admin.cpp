#include "admin.h"

Admin::Admin(QObject *parent):QThread(parent)
{
    connect(this, SIGNAL(enviarFactura(qintptr, QByteArray)),&servGlo,SLOT(enviarFactura(qintptr, QByteArray)));
}

void Admin::run()
{
    bool fin=true;
    while(fin)
    {
        arbolPasillos.bloqueo=false;
        int identificacion;
        cout<<"Digite su codigo de administrador: ";
        cin>>identificacion;
        cout<<"\n";
        if(princi.validarAdministrador(arbolAdmin,identificacion))
        {
            arbolPasillos.bloqueo=true;
            fin=false;
            cout<<"Bienvenido!"<<endl;
            cout<<"Usted tiene las opciones de: "<<endl;
            cout<<"1.Borrar Cliente"<<endl;
            cout<<"2.Escribir B"<<endl;
            cout<<"3.Lista creciente"<<endl;
            cout<<"4.Consultar el % impuesto de un producto"<<endl;
            cout<<"5.Modificar el Precio"<<endl;
            cout<<"6.Modificar el % de impuesto"<<endl;
            cout<<"7.Modificar si el producto pertenece a la canasta basica"<<endl;
            cout<<"8.Consultar un precio"<<endl;
            cout<<"9.Consultar si un producto es de la canasta"<<endl;
            cout<<"10.Facturar"<<endl;
            cout<<"11.Verificar inventario"<<endl;
            cout<<"12.Verificar gondolas"<<endl;
            cout<<"13.Reportes"<<endl;
            cout<<"14.Salir"<<endl;
            bool menu;
            while(menu){
                cout<<"\nEscriba el numero de la opcion que desea: "<<endl;
                string resp;
                cin>>resp;
                if (resp=="1"){
                    int x;
                    cout<<"Digite la cedula del cliente a borrar: ";
                    cin>>x;
                    arbolClientes.eliminar(x);
                    cout<<endl<<"Cliente borrado"<<endl;
                }
                else if (resp=="2"){
                    arbolClientes.escribir();
                }
                else if (resp=="3"){
                    arbolClientes.listaCreciente();
                }
                else if (resp=="4"){
                    int x;
                    cout<<"Digite la cedula del cliente a insertar: ";
                    cin>>x;
                    arbolClientes.insertar(x,"Andres Aguilar","12345678","23","Hola");
                }
                else if (resp=="5"){
                    //princi.ModificarPrecio();
                }
                else if (resp=="6"){
                    princi.ModificarImpuesto();
                }
                else if (resp=="7"){
                    princi.ModificarCanasta();
                }
                else if (resp=="8"){
                    string precio=princi.consultarUnPrecioAdm();
                    cout<<precio<<endl;
                }
                else if (resp=="9"){
                    string canasta=princi.ConsultarCanasta();
                    cout<<canasta<<endl;
                }
                else if (resp=="10"){
                    if(!princi.cola.ListaVacia())
                    {
                        qintptr descrip=princi.cola.primero->descriptor;
                        string factura=princi.agregarListaOrdenada();
                        emit enviarFactura(descrip, QByteArray::fromStdString(factura));
                    }
                    else
                        cout<<"No se han realizado compras aun"<<endl;
                }
                else if (resp=="11"){
                    princi.revisarGondolas();
                }
                else if (resp=="12"){
                    princi.cargarInventario();
                }
                else if(resp=="13"){
                    princi.generarReporte();
                    cout<<"reporte generado!"<<endl;
                }
                else if (resp=="14"){
                    cout<<"Gracias por usar el sistema"<<endl;
                    menu=false;
                    fin=true;
                }
            }

        }
        else
            cout<<"Codigo invalido"<<endl;
    }
}

