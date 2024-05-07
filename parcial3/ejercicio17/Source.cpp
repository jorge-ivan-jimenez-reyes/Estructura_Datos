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
        cout << "2. En Orden" << endl;
        cout << "3. Pre Orden" << endl;
        cout << "4. Post Orden" << endl;
        cout << "0. Salir" << endl;

        cout << "Elección: ";
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
            cout << "En Orden: ";
            raiz = arbol.obtenerRaiz();
            arbol.enOrden(raiz);
            cout << endl;
            break;

        case 3:
            cout << "Pre Orden: ";
            raiz = arbol.obtenerRaiz();
            arbol.preOrden(raiz);
            cout << endl;
            break;

        case 4:
            cout << "Post Orden: ";
            raiz = arbol.obtenerRaiz();
            arbol.postOrden(raiz);
            cout << endl;
            break;

        case 0:
            break;

        default:
            cout << "Elección inválida" << endl;
            break;
        }
    } while (eleccion != 0);

    return 0;
}
