#ifndef ROJINEGRO_H
#define ROJINEGRO_H
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
#include "nodos.h"
#include "arbolPas.h"
using namespace std;

class RN{
public:
    nodoMarca *raiz;
	RN() { raiz = NULL; }
	void rotarIzquierda(nodoMarca *&, nodoMarca *&);
	void rotarDerecha(nodoMarca *&, nodoMarca *&);
	void balancearArbol(nodoMarca *&, nodoMarca *&);
	void insert(const string &codPasilo,const string &nombre,const string &codProducto,const string &codMar,const int &gon, const float &val);
	void levelOrder();
	pnodoMarca insertarNodo(pnodoMarca raiz, pnodoMarca pt);
	void InordenMar(pnodoMarca R);
    string InordenMarServ(pnodoMarca R);
	void MostrarMarcas3(pnodoMarca ra);
	bool validarMarcas3(pnodoMarca ra, string codMar,bool encontrado);
	pnodoMarca encontrarNodo3(pnodoMarca ra, string codMar, pnodoMarca marca);
    void fixDoubleBlack(nodoMarca *x);
//    void deleteNode(nodoMarca *v) {
//       nodoMarca *u = BSTreplace(v);

//       // True when u and v are both black
//       bool uvBlack = ((u == NULL or u->color == NEGRO) and (v->color == NEGRO));
//       nodoMarca *parent = v->padre;

//       if (u == NULL) {
//         // u is NULL therefore v is leaf
//         if (v == raiz) {
//           // v is root, making root null
//           raiz = NULL;
//         } else {
//           if (uvBlack) {
//             // u and v both black
//             // v is leaf, fix double black at v
//             fixDoubleBlack(v);
//           } else {
//             // u or v is red
//             if (v->sibling() != NULL)
//               // sibling is not null, make it red"
//               v->sibling()->color = ROJO;
//           }

//           // delete v from the tree
//           if (v->isOnLeft()) {
//             parent->hIzq = NULL;
//           } else {
//             parent->hDer = NULL;
//           }
//         }
//         delete v;
//         return;
//       }

//       if (v->hIzq == NULL or v->hDer == NULL) {
//         // v has 1 child
//         if (v == raiz) {
//           // v is root, assign the value of u to v, and delete u
//           v->codMarca = u->codMarca;
//           v->codPasillo = u->codPasillo;
//           v->codProducto = u->codProducto;
//           v->hIzq = v->hDer = NULL;
//           delete u;
//         } else {
//           // Detach v from tree and move u up
//           if (v->isOnLeft()) {
//             parent->hIzq = u;
//           } else {
//             parent->hDer = u;
//           }
//           delete v;
//           u->padre = parent;
//           if (uvBlack) {
//             // u and v both black, fix double black at u
//             fixDoubleBlack(u);
//           } else {
//             // u or v red, color u black
//             u->color = NEGRO;
//           }
//         }
//         return;
//       }

//       // v has 2 children, swap values with successor and recurse
//       swapValues(u, v);
//       deleteNode(u);
//     }
};
#endif // ROJINEGRO_H
