#include "GrafoKRUS.h"


GraphKRUS::GraphKRUS(int V, int E)
{
    this->V = V;
    this->E = E;
    numeros = new int[V];
    nombres = new string [V];
}

GraphKRUS montarGrafoKRUS(string pNombreArchivo, string pNombreRelaciones)
{
    SubirNodoSupermercado(pNombreArchivo);
    arbolPas repetidos = arbolPas ();
    int nodosGrafo = contarNodosKRUS("Ciudades temporales.txt",repetidos);
    GraphKRUS nuevoGrafo = GraphKRUS (nodosGrafo+1,32);
    nuevoGrafo.rellenarDatos("Ciudades temporales.txt",repetidos);
    nuevoGrafo.cargarRelaciones(pNombreRelaciones);
    remove ("Ciudades temporales.txt");
    return nuevoGrafo;
}

int contarNodosKRUS (string pNombreArchivo, arbolPas &repetidos){
    arbolPas numeros = arbolPas();
    string numero;
    int i = -1;
    int contLineas = 1;
    string linea;
    ifstream archivo (pNombreArchivo);
    while (getline(archivo, linea)){
        istringstream lineaActual (linea);
        getline(lineaActual,numero,';');
        bool temp = false;
        numeros.encontrarPasillo(temp,numeros.raiz,numero);
        if (!temp && numero != "114" && numero != "113" && numero != "112" && numero != "111"){
            numeros.InsertaBinario(numeros.raiz,numero,"");
            i++;
            contLineas++;
        }else{
            repetidos.InsertaBinario(repetidos.raiz,to_string(contLineas),"");
            temp = false;
            contLineas++;
        }
    }
    archivo.close();
    return i;
}

void GraphKRUS::rellenarDatos (string pNombreArchivo, arbolPas repetidos){
    string nombre;
    string numero;
    string linea;
    ifstream archivo (pNombreArchivo);
    int i = -1;
    int contNodos = 1;
    while (getline(archivo, linea)){
        istringstream lineaActual (linea);
        getline(lineaActual,numero,';');
        getline(lineaActual,nombre,';');
        bool lineaInvalida = false;
        repetidos.encontrarPasillo(lineaInvalida,repetidos.raiz,to_string(contNodos));
        if (lineaInvalida){
            lineaInvalida = false;
        }
        else {
            i++;
            this->numeros[i] = stoi (numero);
            this->nombres[i] = nombre;
        }
        contNodos++;
    }
    archivo.close();
}

void GraphKRUS::cargarRelaciones(string pNombreArchivo) {
    string numero1;
    string numero2;
    string numero3;
    string linea;
    ifstream archivo (pNombreArchivo);
    int contRelaciones = 0;
    while (getline(archivo, linea)){
        istringstream lineaActual (linea);
        getline(lineaActual,numero1,';');
        getline(lineaActual,numero2,';');
        getline(lineaActual,numero3,';');
        int primerNodo = encontrarNodo(stoi(numero1));
        int segundoNodo = encontrarNodo(stoi(numero2));
        int peso;
        try {
             peso = stoi (numero3);
        } catch (exception e){
        }
        if (primerNodo == -1 || segundoNodo == -1){
        } else {
           contRelaciones+=1;
          this->addEdge(primerNodo,segundoNodo,peso);
        }
    }
    archivo.close();
}


string GraphKRUS::kruskalMST()
{
    string result = "";
    result.append("Las aristas del AEM por A. de Kruskal son: ");
    result.append("\n");
    int mst_wt = 0; // Initialize result

    // Sort edges in increasing order on basis of cost
    sort(edges.begin(), edges.end());

    // Create disjoint sets
    DisjointSets ds(V);

    // Iterate through all sorted edges
    vector< pair<int, iPair> >::iterator it;
    for (it=edges.begin(); it!=edges.end(); it++)
    {
        int u = it->second.first;
        int v = it->second.second;

        int set_u = ds.find(u);
        int set_v = ds.find(v);

        // Check if the selected edge is creating
        // a cycle or not (Cycle is created if u
        // and v belong to same set)
        if (set_u != set_v)
        {
            // Current edge will be in the MST
            // so print it
             result.append(to_string(this->numeros[u]) + "---" + to_string(this->numeros[v]) + ", peso: " + to_string(it->first));
             result.append("\n");
            // Update MST weight
            mst_wt += it->first;

            // Merge two sets
            ds.merge(set_u, set_v);
        }
    }
    result.append("El costo total del AEM es: " + to_string(mst_wt));
    result.append("\n");
    ofstream out("Kruskal.txt",ios::out | ios::trunc);
    if (out.is_open()) {
         out << result <<endl;
     }
    out.close();
    return result;
}

int GraphKRUS::encontrarNodo (int numero){
    for (int i = 0; i <= this->V-1;i++){
        if (this->numeros[i]==numero){
            return i;
        }
    }
    return -1;
}
