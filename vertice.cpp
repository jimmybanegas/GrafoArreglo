#include "vertice.h"

void Vertice::imprimirMatriz()
{
    for(int fila=0; fila<10; fila++)
    {
        cout<<""<<endl;
        for(int columna=0; columna<10; columna++)
        {
           cout<<matriz[fila][columna];
        }
    }
}

Vertice::Vertice()
{
    for(int fila=0; fila<10; fila++)
      for(int columna=0; columna<10; columna++)
           matriz[fila][columna] = '-'  ;

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
      for(int columna=0; columna<10; columna++)
           matriz[fila][columna] = '-'  ;

}


