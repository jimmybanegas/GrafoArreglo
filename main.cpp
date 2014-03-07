#include <QCoreApplication>
#include "grafo.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Grafo miGrafo;

    int op;

        do
        {
            int i=miGrafo.getContador();
            miGrafo.menu();

            cin>>op;

            switch(op)
            {
                case 1:
                    {
                      char nombre;
                      cout<<"INGRESE LETRA : ";
                      cin>>nombre;

                      if(miGrafo.insertar_vertice(i, new Vertice(nombre,i)))
                      {
                          cout<<"INGRESADO"<<endl;
                      }
                    }
                    break;
                case 2:
                    {
                      char origen;
                      char destino;
                      cout<<"INGRESE ORIGEN: ";
                      cin>>origen;
                      cout<<"INGRESE DESTINO: ";
                      cin>>destino;

                      if(miGrafo.agrega_arista(origen, destino))
                      {
                          cout<<"INGRESADO"<<endl;
                      }
                      else
                           cout<<"NO SE PUEDE"<<endl;
                    }
                    break;
                case 3: // miGrafo.eliminar_nodo();
                        break;
                case 4: // miGrafo.eliminar_arista();
                        break;
                case 5:  miGrafo.mostrar_grafo();
                        break;
                case 6:
                    {
                      char nombre;
                      cout<<"INGRESE LETRA DE GRAFO A MOSTRAR: ";
                      cin>>nombre;

                      miGrafo.mostrar_aristas(nombre);

                    }
                        break;
                case 7:
                   {
                    char nombre;
                    cout<<"INGRESE LETRA PARA VER SI SIGUIENTE: ";
                    cin>>nombre;

                    Vertice *sig = miGrafo.siguiente(new Vertice(nombre));

                    if(sig!=NULL)
                    {
                       cout<<sig->nombre;
                       //sig->imprimirMatriz();
                    }
                    else
                    {
                      cout<<"NO TIENE UN SIGUIENTE ";
                    }

                   }
                break;
                case 8:
                    {
                      miGrafo.imprimirMatriz();
                    }
                        break;
                default: cout<<"OPCION NO VALIDA...!!!";
                         break;


            }

           // cout<<endl<<endl;
            //system("pause");  system("cls");

        }while(op!=7);

    return a.exec();
}
