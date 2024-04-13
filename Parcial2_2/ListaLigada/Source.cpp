#include "Listas.h"
#include <iostream>
#include <string>

using namespace std;

// Empleando C++ construye una aplicación que opere una Lista Ligada de números enteros.
// Las inserciones siempre deben hacerse de manera que la lista se mantenga en orden ascendente o creciente,
// es decir, de menor a mayor. Las operaciones disponibles deben ser Mostrar, Insertar y Extraer.

int main()
{
    list myList; // Usando 'myList' como el nombre válido para la instancia de la lista
    string x;
    int eleccion;

    do
    {
        cout << endl << "1. Mostrar " << endl;
        cout << "2. Insertar" << endl;
        cout << "3. Extraer" << endl;
        cout << "0. Salir" << endl;

        cout << "Elija una opción: ";
        cin >> eleccion;
        switch (eleccion)
        {
        case 1:
            myList.mostrar();
            break;
        case 2:
            cout << "Número a insertar: ";
            cin >> x;
            try {
                int num = stoi(x); // Convierte el string a entero, maneja excepciones si no es un número válido
                myList.insertar(num);
            }
            catch (const invalid_argument& ia) {
                cout << "Por favor, ingrese un número válido." << endl;
            }
            break;
        case 3:
            cout << "Número a extraer: ";
            cin >> x;
            try {
                int num = stoi(x);
                myList.extraer(num);
            }
            catch (const invalid_argument& ia) {
                cout << "Por favor, ingrese un número válido." << endl;
            }
            break;
        default:
            cout << "Elección inválida" << endl;
            break;
        }
    } while (eleccion != 0);

    return 0;
}
