#include <iostream>
#include "circular.h"  

using namespace std;

int main()
{
    int eleccion, numero;
    circular_list lista;

    do
    {
        cout << endl << "MENÚ PRINCIPAL" << endl;
        cout << "1. Insertar al final" << endl;
        cout << "2. Buscar" << endl;
        cout << "3. Imprimir" << endl;
        cout << "4. Tamaño" << endl;
        cout << "0. Salir" << endl;
        cout << "Elegir: ";
        cin >> eleccion;

        switch (eleccion)
        {
        case 1:
            cout << "Introduzca número: ";
            cin >> numero;
            lista.insertar_al_final(numero);
            break;
        case 2:
            if (lista.tamano() == 0) cout << "La lista está vacía" << endl;
            else
            {
                cout << "Introduzca número: ";
                cin >> numero;
                bool estado = lista.buscar(numero);
                circular_list::existe(estado);
            }
            break;
        case 3:
            if (lista.tamano() == 0) cout << "La lista está vacía" << endl;
            lista.imprimir();
            break;
        case 4:
            if (lista.tamano() == 0) cout << "La lista está vacía" << endl;
            else cout << "El tamaño de la lista es: " << lista.tamano() << endl;
            break;
        case 0:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Opción inválida" << endl;
            break;
        }
    } while (eleccion != 0);

    return 0;
}
