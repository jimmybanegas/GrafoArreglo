#ifndef VERTICE_H
#define VERTICE_H
#include <iostream>
using namespace std;

class Vertice
{
public:
    int pos;
    char nombre;
    char matriz[10];

    void imprimirMatriz();

    Vertice();
    Vertice(char nombre);
    Vertice(char nombre, int i);
};

#endif // VERTICE_H
