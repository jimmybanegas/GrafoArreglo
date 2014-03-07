#include "grafo.h"

Grafo::Grafo()
{
    this->cont = 0;

    for(int fila=0; fila<10; fila++)
      for(int columna=0; columna<10; columna++)
           matriz[fila][columna] = '-'  ;

}

void Grafo::menu()
{
        cout<<"\n\tREPRESENTACION DE GRAFOS CON ARREGLOS\n\n";
        cout<<" 1. INSERTAR UN VERTICE                 "<<endl;
        cout<<" 2. INSERTAR UNA ARISTA              "<<endl;
        cout<<" 3. ELIMINAR UN NODO                 "<<endl;
        cout<<" 4. ELIMINAR UNA ARISTA              "<<endl;
        cout<<" 5. MOSTRAR  GRAFO                   "<<endl;
        cout<<" 6. MOSTRAR ARISTAS DE UN VERTICE       "<<endl;
        cout<<" 7. MOSTRAR SIGUIENTE       "            <<endl;
        cout<<" 8. MOSTRAR MATRIZ DE ADYACENCIA       " <<endl;
        cout<<" 9. SALIR                            "<<endl;

        cout<<"\n INGRESE OPCION: ";
}

bool Grafo::insertar_vertice(int pos, Vertice *ver)
{
    if(pos<0 || pos>10 || pos>cont )
        return false;

    if(cont>10-1)
       return false;

    int i=cont;

    do
    {
      vertices[i]=vertices[i-1];
      i--;
    }while(i>pos);

    vertices[pos]=ver;
    cont++;
    return true;
}



bool Grafo::agrega_arista(char ori, char dest)
{
    Vertice *origen =recuperar(new Vertice(ori)) ;
    Vertice *destino = recuperar(new Vertice(dest));

    if( origen!=NULL && destino!=NULL)
     {
        origen->matriz[destino->pos] = destino->nombre;
        this->matriz[origen->pos][destino->pos] = destino->nombre;
        return true;
     }
     return false;
}


void Grafo::vaciar_aristas(Vertice *aux)
{

}

void Grafo::eliminar_vertice()
{

}

void Grafo::eliminar_arista()
{

}

void Grafo::mostrar_grafo()
{
    for(int fila=0; fila<cont; fila++)
    {
        cout<< vertices[fila]->nombre<<vertices[fila]->pos<<endl;
       // vertices[fila]->imprimirMatriz();
    }

}

void Grafo::mostrar_aristas(char var)
{
        Vertice *imp = recuperar(new Vertice(var));

        if(imp!=NULL)
        {
            imp->imprimirMatriz();
        }

}

int Grafo::getContador()
{
   return this->cont;
}

Vertice *Grafo::recuperar(Vertice *buscar)
{
    if(cont>0)
    {
        for(int i=0;i<cont;i++)
           if(vertices[i]->nombre == buscar->nombre)
               return vertices[i];
    }
    return NULL;
}

Vertice *Grafo::siguiente(Vertice *buscar)
{
    if(cont>0)
    {
        for(int i=0;i<cont;i++)
           if(vertices[i]->nombre == buscar->nombre)
           {
                if(i+1<cont)
                  return vertices[i+1];
                else
                    return NULL;
           }

    }
    return NULL;
}

void Grafo::imprimirMatriz()
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

