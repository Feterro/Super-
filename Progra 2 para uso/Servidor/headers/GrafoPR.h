#ifndef GRAFOPR_H
#define GRAFOPR_H
#include "headers/arbolPas.h"
#include "GrafoArtic.h"
#include <fstream>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include<bits/stdc++.h>

using namespace std;
# define INF 0x3f3f3f3f

// iPair ==>  Integer Pair
typedef pair<int, int> iPair;

// This class represents a directed graph using
// adjacency list representation
class GraphPR
{
    int V;    // No. of vertices

    // In a weighted graph, we need to store vertex
    // and weight pair for every edge
    list< pair<int, int> > *adj;

public:
    GraphPR(int V);  // Constructor

    // function to add an edge to graph
    void addEdge(int u, int v, int w);

    // Print MST using Prim's algorithm
    void primMST();
    void rellenarDatos (string pNombreArchivo, arbolPas repetidos);
    void cargarRelaciones (string pNombreArchivo);
    int encontrarNodo (int numero);
    int* numeros;
    string* nombres;
};

GraphPR montarGrafoPR(string pNombreArchivo, string pNombreRelaciones);

// Allocates memory for adjacency list

#endif // GRAFOPR_H
