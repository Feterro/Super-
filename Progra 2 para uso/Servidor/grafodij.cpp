#include "grafodij.h"

GrafoDIJ::GrafoDIJ(int V)
{
    this->V = V;
    this->graph = new int*[V];
    for (int i = 0;i<V;i++){
        this->graph[i] = new int [V];
    }
    for (int i = 0;i<V;i++){
        for (int i2 = 0;i2<V;i2++){
            this->graph[i][i2] = 0;
        }
    }
    numeros = new int[V];
    nombres = new string [V];
}

void GrafoDIJ::addEdge (int v, int y, int w){
        this->graph[v][y] = w;
        this->graph[y][v] = w;
    }

int GrafoDIJ::minDistance(int dist[],
                bool sptSet[])
{

    // Initialize min value
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (sptSet[v] == false &&
                   dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}

// Function to print shortest
// path from source to j
// using parent array
void GrafoDIJ::printPath(int parent[], int j)
{

    // Base Case : If j is source
    if (parent[j] == - 1)
        return;

    printPath(parent, parent[j]);

    cout<<this->numeros[j]<<"->";
}

// A utility function to print
// the constructed distance
// array
void GrafoDIJ::printSolution(int dist[], int n,
                      int parent[])
{
    int src = 0;
    for (int i = 1; i < V; i++)
    {

        cout<<this->numeros[src]<<"---"<<this->numeros[i]<<" "<<dist[i]<<"   "<<this->numeros[src]<<"->";
        printPath(parent, i);
        cout<<endl;
    }
}

// Funtion that implements Dijkstra's
// single source shortest path
// algorithm for a graph represented
// using adjacency matrix representation
void GrafoDIJ::dijkstra(int src)
{

    // The output array. dist[i]
    // will hold the shortest
    // distance from src to i
    int dist[V];

    // sptSet[i] will true if vertex
    // i is included / in shortest
    // path tree or shortest distance
    // from src to i is finalized
    bool sptSet[V];

    // Parent array to store
    // shortest path tree
    int parent[V];

    // Initialize all distances as
    // INFINITE and stpSet[] as false
    for (int i = 0; i < V; i++)
    {
        parent[0] = -1;
        dist[i] = INT_MAX;
        sptSet[i] = false;
    }

    // Distance of source vertex
    // from itself is always 0
    dist[src] = 0;

    // Find shortest path
    // for all vertices
    for (int count = 0; count < V - 1; count++)
    {
        // Pick the minimum distance
        // vertex from the set of
        // vertices not yet processed.
        // u is always equal to src
        // in first iteration.
        int u = minDistance(dist, sptSet);

        // Mark the picked vertex
        // as processed
        sptSet[u] = true;

        // Update dist value of the
        // adjacent vertices of the
        // picked vertex.
        for (int v = 0; v < V; v++)

            // Update dist[v] only if is
            // not in sptSet, there is
            // an edge from u to v, and
            // total weight of path from
            // src to v through u is smaller
            // than current value of
            // dist[v]
            if (!sptSet[v] && graph[u][v] &&
                dist[u] + graph[u][v] < dist[v])
            {
                parent[v] = u;
                dist[v] = dist[u] + graph[u][v];
            }
    }

    // print the constructed
    // distance array
    printSolution(dist, V, parent);
}

int contarNodosDIJ (string pNombreArchivo, arbolPas &repetidos){
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

void GrafoDIJ::cargarRelaciones(string pNombreArchivo) {
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

void GrafoDIJ::rellenarDatos (string pNombreArchivo, arbolPas repetidos){
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

int GrafoDIJ::encontrarNodo (int numero){
    for (int i = 0; i <= this->V-1;i++){
        if (this->numeros[i]==numero){
            return i;
        }
    }
    return -1;
}

GrafoDIJ montarGrafoDIJ(string pNombreArchivo, string pNombreRelaciones)
{
    SubirNodoSupermercado(pNombreArchivo);
    arbolPas repetidos = arbolPas ();
    int nodosGrafo = contarNodosDIJ("Ciudades temporales.txt",repetidos);
    GrafoDIJ nuevoGrafo = GrafoDIJ (nodosGrafo+1);
    nuevoGrafo.rellenarDatos("Ciudades temporales.txt",repetidos);
    nuevoGrafo.cargarRelaciones(pNombreRelaciones);
    remove ("Ciudades temporales.txt");
    return nuevoGrafo;
}




