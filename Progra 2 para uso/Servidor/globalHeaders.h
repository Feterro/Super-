#ifndef GLOBALHEADERS_H
#define GLOBALHEADERS_H

#include "headers/arbolb.h"
#include "headers/arbolInventario.h"
#include "headers/avlProducto.h"
#include "headers/ciudades.h"
#include "headers/nodos.h"
#include "headers/rojinegro.h"
#include "Principal.h"
#include "GrafoArtic.h"

extern  ArbolB arbolClientes;
extern  ArbolB arbolAdmin;
extern  arbolPas arbolPasillos;
extern  ArbolInventario arbolInventario;
extern  Ciudad listaCiudades;
extern  Principal princi;
extern  Graph grafoArt;
extern  Graph grafoRecorridos;

#endif // GLOBALHEADERS_H
