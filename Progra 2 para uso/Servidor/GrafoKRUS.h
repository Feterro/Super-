#ifndef GRAFOKRUS_H
#define GRAFOKRUS_H
#include<bits/stdc++.h>
#include <fstream>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <list>
#include "headers/arbolPas.h"
#include "GrafoArtic.h"

using namespace std;

// Creating shortcut for an integer pair
typedef  pair<int, int> iPair;

// Structure to represent a graph
struct GraphKRUS
{
    int V, E;
    vector< pair<int, iPair> > edges;
    int* numeros;
    string* nombres;

    // Constructor
    GraphKRUS(int V, int E);

    // Utility function to add an edge
    void addEdge(int u, int v, int w)
    {
        edges.push_back({w, {u, v}});
    }

    // Function to find MST using Kruskal's
    // MST algorithm
    string kruskalMST();
    void rellenarDatos (string pNombreArchivo, arbolPas repetidos);
    void cargarRelaciones (string pNombreArchivo);
    int encontrarNodo (int numero);
};

GraphKRUS montarGrafoKRUS(string pNombreArchivo, string pNombreRelaciones);
int contarNodosKRUS (string pNombreArchivo, arbolPas &repetidos);

// To represent Disjoint Sets
struct DisjointSets
{
    int *parent, *rnk;
    int n;

    // Constructor.
    DisjointSets(int n)
    {
        // Allocate memory
        this->n = n;
        parent = new int[n+1];
        rnk = new int[n+1];

        // Initially, all vertices are in
        // different sets and have rank 0.
        for (int i = 0; i <= n; i++)
        {
            rnk[i] = 0;

            //every element is parent of itself
            parent[i] = i;
        }
    }

    // Find the parent of a node 'u'
    // Path Compression
    int find(int u)
    {
        /* Make the parent of the nodes in the path
           from u--> parent[u] point to parent[u] */
        if (u != parent[u])
            parent[u] = find(parent[u]);
        return parent[u];
    }

    // Union by rank
    void merge(int x, int y)
    {
        x = find(x), y = find(y);

        /* Make tree with smaller height
           a subtree of the other tree  */
        if (rnk[x] > rnk[y])
            parent[y] = x;
        else // If rnk[x] <= rnk[y]
            parent[x] = y;

        if (rnk[x] == rnk[y])
            rnk[y]++;
    }
};


#endif // GRAFOKRUS_H
