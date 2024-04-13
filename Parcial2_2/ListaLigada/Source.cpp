#include "Listas.h"
#include <iostream>
#include <string>

using namespace std;

// Empleando C++ construye una aplicaci�n que opere una Lista Ligada de n�meros enteros.
// Las inserciones siempre deben hacerse de manera que la lista se mantenga en orden ascendente o creciente,
// es decir, de menor a mayor. Las operaciones disponibles deben ser Mostrar, Insertar y Extraer.

int main()
{
    list myList; // Usando 'myList' como el nombre v�lido para la instancia de la lista
    string x;
    int eleccion;

    do
    {
        cout << endl << "1. Mostrar " << endl;
        cout << "2. Insertar" << endl;
        cout << "3. Extraer" << endl;
        cout << "0. Salir" << endl;

        cout << "Elija una opci�n: ";
        cin >> eleccion;
        switch (eleccion)
        {
        case 1:
            myList.mostrar();
            break;
        case 2:
            cout << "N�mero a insertar: ";
            cin >> x;
            try {
                int num = stoi(x); // Convierte el string a entero, maneja excepciones si no es un n�mero v�lido
                myList.insertar(num);
            }
            catch (const invalid_argument& ia) {
                cout << "Por favor, ingrese un n�mero v�lido." << endl;
            }
            break;
        case 3:
            cout << "N�mero a extraer: ";
            cin >> x;
            try {
                int num = stoi(x);
                myList.extraer(num);
            }
            catch (const invalid_argument& ia) {
                cout << "Por favor, ingrese un n�mero v�lido." << endl;
            }
            break;
        default:
            cout << "Elecci�n inv�lida" << endl;
            break;
        }
    } while (eleccion != 0);

    return 0;
}
