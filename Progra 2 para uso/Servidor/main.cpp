#include <QCoreApplication>
#include "globalServer.h"
#include "admin.h"
#include "socketServer.h"
#include "globalHeaders.h"
#include "Prograprincipal.h"
#include "GrafoPR.h"

ArbolB arbolClientes=ArbolB(5);
ArbolB arbolAdmin=ArbolB(5);
arbolPas arbolPasillos;
ArbolInventario arbolInventario;
Ciudad listaCiudades;
Principal princi;
Servidor servGlo;
Graph grafoArt = montarGrafo("Ciudades.txt", "Ptos de articulacion.txt");
Graph grafoRecorridos = montarGrafo("Ciudades.txt", "Conexiones.txt");
GraphPR grafoPrim = montarGrafoPR("Ciudades.txt", "Conexiones.txt");


int main(int argc, char *argv[])
{
    qRegisterMetaType<qintptr>("qintptr");
    arbolClientes.cargarClientes("Clientes.txt");
    //arbolClientes.listaCreciente();
    cout<<endl;

    arbolAdmin.cargarAdmins("Administradores.txt");
    //arbolAdmin.listaCreciente();
    cout<<endl;

    arbolPasillos=arbolPasillos.arbolMarcas();
    //arbolPasillos.InordenTriple(arbolPasillos.raiz);
    cout<<"\n"<<endl;

    arbolInventario=arbolInventario.agregarInventario();
    cout<<"\n"<<endl;

    listaCiudades=listaCiudades.agregarCiudades();
    cout<<"\n"<<endl;

    QCoreApplication a(argc, argv);
    servGlo.inicioServidor();

//    Admin administrador;
//    administrador.start();

//Metodos de grafos:
//     string result = grafoArt.AP();
//     cout<<result<<endl;
//     result = grafoRecorridos.Profundidad();
//    cout<<result<<endl<<endl;
//     result = grafoRecorridos.Anchura();
//     cout<<result<<endl;
    string result = grafoPrim.primMST();
    cout<<result;


    return a.exec();
}
