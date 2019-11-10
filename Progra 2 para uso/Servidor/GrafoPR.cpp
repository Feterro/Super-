#include "GrafoPR.h"
#include <fstream>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

GraphPR::GraphPR(int V)
{
    this->V = V;
    adj = new list<iPair> [V];
    numeros = new int[V];
    nombres = new string [V];
}

void GraphPR::addEdge(int u, int v, int w)
{
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}

// Prints shortest paths from src to all other vertices
string GraphPR::primMST()
{
    string result = "";
    // Create a priority queue to store vertices that
    // are being preinMST. This is weird syntax in C++.
    // Refer below link for details of this syntax
    // http://geeksquiz.com/implement-min-heap-using-stl/
    priority_queue< iPair, vector <iPair> , greater<iPair> > pq;

    int src = 0; // Taking vertex 0 as source

    // Create a vector for keys and initialize all
    // keys as infinite (INF)
    vector<int> key(V, INF);

    // To store parent array which in turn store MST
    vector<int> parent(V, -1);

    // To keep track of vertices included in MST
    vector<bool> inMST(V, false);

    // Insert source itself in priority queue and initialize
    // its key as 0.
    pq.push(make_pair(0, src));
    key[src] = 0;

    /* Looping till priority queue becomes empty */
    while (!pq.empty())
    {
        // The first vertex in pair is the minimum key
        // vertex, extract it from priority queue.
        // vertex label is stored in second of pair (it
        // has to be done this way to keep the vertices
        // sorted key (key must be first item
        // in pair)
        int u = pq.top().second;
        pq.pop();

        inMST[u] = true;  // Include vertex in MST

        // 'i' is used to get all adjacent vertices of a vertex
        list< pair<int, int> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
        {
            // Get vertex label and weight of current adjacent
            // of u.
            int v = (*i).first;
            int weight = (*i).second;

            //  If v is not in MST and weight of (u,v) is smaller
            // than current key of v
            if (inMST[v] == false && key[v] > weight)
            {
                // Updating key of v
                key[v] = weight;
                pq.push(make_pair(key[v], v));
                parent[v] = u;
            }
        }
    }

    int costo = 0;
    result.append("Las aristas del AEM por A. de Prim son: ");
    result.append("\n");
    // Print edges of MST using parent array
    for (int i = 1; i < V; ++i){
       result.append(to_string (this->numeros[parent[i]]) + "---" + to_string (this->numeros[i]));
       list <iPair> x = this->adj[parent[i]];
       list< pair<int, int> >::iterator cont;
       for (cont = x.begin(); cont != x.end(); ++cont)
       {
           if ((*cont).first==i){
               result.append(", peso: "+to_string((*cont).second));
               costo+=(*cont).second;
           }
       }
       result.append("\n");
    }
    result.append("El costo total del AEM es: "+to_string(costo));

    ofstream out("Prim.txt",ios::out | ios::trunc);
    if (out.is_open()) {
         out << result <<endl;
     }
    out.close();
    return result;
}


int contarNodosPR (string pNombreArchivo, arbolPas &repetidos){
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



GraphPR montarGrafoPR(string pNombreArchivo, string pNombreRelaciones)
{
    SubirNodoSupermercado(pNombreArchivo);
    arbolPas repetidos = arbolPas ();
    int nodosGrafo = contarNodosPR("Ciudades temporales.txt",repetidos);
    GraphPR nuevoGrafo = GraphPR (nodosGrafo+1);
    nuevoGrafo.rellenarDatos("Ciudades temporales.txt",repetidos);
    nuevoGrafo.cargarRelaciones(pNombreRelaciones);
    remove ("Ciudades temporales.txt");
    return nuevoGrafo;
}

void GraphPR::cargarRelaciones(string pNombreArchivo) {
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

void GraphPR::rellenarDatos (string pNombreArchivo, arbolPas repetidos){
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

int GraphPR::encontrarNodo (int numero){
    for (int i = 0; i <= this->V-1;i++){
        if (this->numeros[i]==numero){
            return i;
        }
    }
    return -1;
}


