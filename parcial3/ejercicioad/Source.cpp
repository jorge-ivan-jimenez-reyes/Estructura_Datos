#include "ArbolBinario.h"
#include <iostream>

using namespace std;

int main()
{
   
    Nodo* raiz;
    int eleccion, valor;

    ArbolBinario arbol;

    do
    {
        cout << endl << "1. Insertar" << endl;
        cout << "2. Buscar y mostrar sub�rbol en orden" << endl;
        cout << "0. Salir" << endl;

        cout << "Elecci�n: ";
        cin >> eleccion;

        switch (eleccion)
        {
        case 1:
            cout << "Valor: ";
            cin >> valor;
            arbol.crearArbol(valor);
            raiz = arbol.obtenerRaiz();
            arbol.insertar(raiz);
            break;
        case 2:
            cout << "Valor: ";
            cin >> valor;
            raiz = arbol.obtenerRaiz();
            arbol.buscar(raiz, valor);
            cout << endl;
            break;

        case 0:
            break;

        default:
            cout << "Elecci�n inv�lida" << endl;
            break;
        }
    } while (eleccion != 0);

    return 0;
}
