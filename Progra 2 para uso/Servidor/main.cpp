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
GraphKRUS grafoKruskal = montarGrafoKRUS("Ciudades.txt", "Conexiones.txt");
GrafoDIJ grafoDijkstra=montarGrafoDIJ("Ciudades.txt", "Conexiones.txt");

string result2 = grafoRecorridos.Anchura();
//cout<<result2<<endl;
string result = grafoRecorridos.Profundidad();
//cout<<result<<endl<<endl;
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
//    string result = grafoArt.AP();
//    //cout<<result<<endl;
//    result = grafoRecorridos.Profundidad();
//    //cout<<result<<endl<<endl;
//    result = grafoRecorridos.Anchura();
//    //cout<<result<<endl;
//    result = grafoPrim.primMST();
//    //cout<<result<<endl;
//    result = grafoKruskal.kruskalMST();
//    //cout<<result<<endl;
//    result = grafoDijkstra.dijkstra(0);
//    //cout<<result;

//    arbolClientes.eliminar(3219657);



    return a.exec();
}
