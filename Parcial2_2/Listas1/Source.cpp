#include "Lista.h" 
#include <iostream>
using namespace std;

// Utilizando C++ construye una aplicaci�n que implemente la operaci�n INSERTAR en
// una LISTA ENLAZADA de palabras. Debe existir la posibilidad de insertar al principio,
// al final o en posici�n intermedia. Tambi�n se pide la opci�n de mostrar la lista completa.

int main()
{
    lista l; // Cambi� "list" por "lista" para que coincida con tus cambios
    string x;
    int eleccion;

    do
    {
        cout << endl << "1. Insertar al inicio" << endl;
        cout << "2. Insertar en una posici�n" << endl;
        cout << "3. Insertar al final" << endl;
        cout << "4. Mostrar" << endl;
        cout << "0. Salir" << endl;

        cout << "Elija una opci�n: ";
        cin >> eleccion;
        switch (eleccion)
        {
        case 1:
            cout << "Ingrese el texto a insertar: ";
            cin >> x;
            l.insertar_al_inicio(x);
            break;
        case 2:
            cout << "Ingrese el texto a insertar: ";
            cin >> x;
            cout << "Ingrese la posici�n: ";
            int pos;
            cin >> pos;
            l.insertar_en_posicion(x, pos - 1); 
            break;
        case 3:
            cout << "Ingrese el texto a insertar: ";
            cin >> x;
            l.insertar_al_final(x);
            break;
        case 4:
            l.imprimir();
            break;
        default:
            cout << "Opci�n inv�lida" << endl;
            break;
        }
    } while (eleccion != 0);

    return 0;
}
