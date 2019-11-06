#ifndef AVLPRODUCTOS_H
#define AVLPRODUCTOS_H
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
#include "nodos.h"
using namespace std;
class AVLProducto{
public:
    pnodoProd raiz;
    AVLProducto():raiz(NULL){}
    bool Hh;
    void InordenR(pnodoProd raiz);
    void InsertarBalanceado(nodoProducto *r, nodoProducto *r2, bool Hh, string codPas, string codProd, string nomProd);
    void RotacionDobleIzquierda(nodoProducto *n1, nodoProducto *n2);
    void RotacionDobleDerecha(nodoProducto *n1, nodoProducto *n2);
    void RotacionSimpleIzquierda(nodoProducto *n1, nodoProducto *n2);
    void RotacionSimpleDerecha(nodoProducto *n1, nodoProducto *n2);
    void EnlaceAvl(nodoPasillo *nodoPas,nodoProducto *nodoPro);
    string EnlaceAvlServ(nodoPasillo *nodoPas,string req);
    string EnlaceAvlServPro(nodoPasillo *nodoPas,string req);
    void InordenPro(pnodoProd R);
    void EnlaceRN(nodoProducto *nodoPro, nodoMarca *nodoMar);
    string EnlaceRNServ(nodoProducto *nodoPro, string serv);
    void MostrarProductos(pnodoProd ra);
    bool validarProducto2(pnodoProd ra,string codPas, string codProd, bool valido);
    void MostrarMarcas2(pnodoProd ra, string codProd);
    bool validarMarcas2(pnodoProd ra,string codProd, string codMar, bool valido);
    pnodoMarca encontrarNodo2(pnodoProd ra, string codProd, string codMar, pnodoMarca marca);
    string InordenProServ(pnodoProd R);
    pnodoProd encontrarNodoProd2(pnodoProd ra, string codProd, pnodoProd prod);
    void BorrarBalanceado(pnodoProd &raiz, bool &Hh, string &codProd);
    void Borrar(pnodoProd &D, pnodoProd &q, bool &Hh);
    void Equilibrar1(pnodoProd &n, bool &Hh);
    void Equilibrar2(pnodoProd &n, bool &Hh);
    void borrarProducto (string codProducto);
    void borrarMarca (pnodoProd &R, string codProducto, string codMarca);
    void borrarMarca (string codProducto, string codMarca);
    pnodoProd buscarNodoAVL(pnodoProd pRaiz, string codProducto);


    friend class lista;
};
#endif // AVLPRODUCTOS_H
