#ifndef GRAFO_H
#define GRAFO_H
#include "vertice.h"
#include <iostream>
using namespace std;

class Grafo
{
public:
    int cont;
    Vertice *vertices[10];

    void Warshall();
    void Floyd();
    void FloydVerInt();
    void Dijkstra();
    void menu();
    bool insertar_vertice(int pos, Vertice *ver);
    bool agrega_arista(char ori, char dest);
    void vaciar_aristas(Vertice *aux);
    void eliminar_vertice();
    void eliminar_arista();
    void mostrar_grafo();
    void mostrar_aristas(char var);
    int getContador();    
    Vertice * recuperar(Vertice *buscar);
    Vertice * siguiente(Vertice *buscar);

    Grafo();
};

#endif // GRAFO_H
