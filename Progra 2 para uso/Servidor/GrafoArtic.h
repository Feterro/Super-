#ifndef GRAFOARTIC_H
#define GRAFOARTIC_H

#include <fstream>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <list>
#include "headers/arbolPas.h"
#define NIL -1
using namespace std;

// A class that represents an undirected graph
class Graph
{
    int V;    // No. of vertices
    list<int> *adj;    // A dynamic array of adjacency lists
    void APUtil(int v, bool visited[], int disc[], int low[],
                int parent[], bool ap[], string razones[], string comparaciones[]);

public:
    Graph (string pNombreArchivo);
    Graph(int V);   // Constructor
    void addEdge(int v, int w);   // function to add an edge to graph
    string AP();    // prints articulation points
    void rellenarDatos (string pNombreArchivo, arbolPas repetidos);
    void cargarRelaciones (string pNombreArchivo);
    int encontrarNodo (int numero);
    int* numeros;
    string* nombres;
};

Graph montarGrafo(string pNombreArchivo, string pNombreRelaciones);

void SubirNodoSupermercado (string pNombreArchivo);

#endif // GRAFOARTIC_H
