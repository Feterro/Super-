#ifndef GRAFODIJ_H
#define GRAFODIJ_H
#include <stdio.h>
#include <limits.h>
#include <fstream>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <list>
#include "headers/arbolPas.h"
#include "GrafoArtic.h"

class GrafoDIJ
{
private:
    int V;
    int *numeros;
    std::string* nombres;

public:
    int** graph;
    GrafoDIJ(int V);

// A utility function to find the
// vertex with minimum distance
// value, from the set of vertices
// not yet included in shortest
// path tree
void addEdge (int v, int y, int w);

int minDistance(int dist[],
                bool sptSet[]);

// Function to print shortest
// path from source to j
// using parent array
void printPath(int parent[], int j);

// A utility function to print
// the constructed distance
// array
void printSolution(int dist[], int n,
                      int parent[]);

// Funtion that implements Dijkstra's
// single source shortest path
// algorithm for a graph represented
// using adjacency matrix representation
void dijkstra(int src);
void rellenarDatos (std::string pNombreArchivo, arbolPas repetidos);
void cargarRelaciones (std::string pNombreArchivo);
int encontrarNodo (int numero);
};

GrafoDIJ montarGrafoDIJ(string pNombreArchivo, string pNombreRelaciones);

#endif // GRAFODIJ_H
