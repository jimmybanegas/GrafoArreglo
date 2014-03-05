#include "grafo.h"

Grafo::Grafo()
{
    this->cont = 0;
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
        cout<<" 7. SALIR                            "<<endl;

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
        origen->matriz[origen->pos][destino->pos] = destino->nombre;
        return true;
     }
     return false;
}


void Grafo::vaciar_aristas(Vertice *aux)
{
 /*  Arista *q,*r;
        q=aux->ady;
        while(q->sgte!=NULL)
        {
            r=q;
            q=q->sgte;
            delete(r);
        }*/
}

void Grafo::eliminar_vertice()
{
      /* char var;
        Vertice *aux,*ant;
        aux=p;
        cout<<"ELIMINAR UN Vertice\n";
        if(p==NULL)
         {
             cout<<"GRAFO VACIO...!!!!";
             return;
         }
        cout<<"INGRESE NOMBRE DE VARIABLE:";
        cin>>var;

        while(aux!=NULL)
        {
            if(aux->nombre==var)
            {
                if(aux->ady!=NULL)
                    vaciar_aristas(aux);

                if(aux==p)
                {

                        p=p->sgte;
                        delete(aux);
                        cout<<"Vertice ELIMINADO...!!!!";
                        return;
                }
                else
                {
                    ant->sgte = aux->sgte;
                    delete(aux);
                    cout<<"Vertice ELIMINADO...!!!!";
                    return;
                }
            }
            else
            {
                ant=aux;
                aux=aux->sgte;
             }
        }*/
}

void Grafo::eliminar_arista()
{
      /*  char ini, fin;
        Vertice *aux, *aux2;
        Arista *q,*r;
        cout<<"\n ELIMINAR ARISTA\n";
        cout<<"INGRESE Vertice DE INICIO:";
        cin>>ini;
        cout<<"INGRESE Vertice FINAL:";
        cin>>fin;
        aux=p;
        aux2=p;
        while(aux2!=NULL)
        {
            if(aux2->nombre==fin)
            {
                break;
            }
            else
            aux2=aux2->sgte;
        }
         while(aux!=NULL)
        {
            if(aux->nombre==ini)
            {
                q=aux->ady;
                while(q!=NULL)
                {
                    if(q->destino==aux2)
                    {
                        if(q==aux->ady)
                            aux->ady=aux->ady->sgte;
                        else
                            r->sgte=q->sgte;
                        delete(q);
                        cout<<"ARISTA  "<<aux->nombre<<"----->"<<aux2->nombre<<" ELIMINADA.....!!!!";
                        return;
                    }
                }
                r=q;
                q=q->sgte;
            }
            aux = aux->sgte;
         }*/
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

