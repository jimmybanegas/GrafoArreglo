#include "vertice.h"

void Vertice::imprimirMatriz()
{
    for(int fila=0; fila<10; fila++)
    {
           cout<<matriz[fila];
    }
}

Vertice::Vertice()
{
    for(int fila=0; fila<10; fila++)
           matriz[fila] = '-'  ;

}

Vertice::Vertice(char nombre)
{
   this->nombre = nombre;

}

Vertice::Vertice(char nombre, int i)
{
    this->nombre = nombre;
    this->pos = i;
    for(int fila=0; fila<10; fila++)
           matriz[fila] = '-'  ;

}


