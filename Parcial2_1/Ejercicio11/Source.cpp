#include "cola.h"
#include <string>

int main() {
    cola C20, C25, D10;
    string turno, cola;
    int opcion;

    do {
        cout << endl << " MEN� PRINCIPAL " << endl;
        cout << "1. Encolar" << endl;
        cout << "2. Desencolar" << endl;
        cout << "3. Imprimir" << endl;
        cout << "4. Fusionar colas" << endl;
        cout << "0. Salir" << endl;

        cout << "Ingrese su opci�n: ";
        cin >> opcion;

        switch (opcion) {
        case 1: {
            cout << "Ingrese el turno: ";
            cin >> turno;
            cout << "�En qu� cola desea agregar el turno? (C20 / C25): ";
            cin >> cola;

            if (cola == "C20")
                C20.encolar(turno);
            else if (cola == "C25")
                C25.encolar(turno);
            else
                cout << "Cola inv�lida" << endl;
            break;
        }
        case 2: {
            cout << "�De qu� cola desea eliminar el turno? (C20 / C25): ";
            cin >> cola;

            if (cola == "C20")
                C20.desencolar();
            else if (cola == "C25")
                C25.desencolar();
            else
                cout << "Cola inv�lida" << endl;
            break;
        }
        case 3: {
            cout << "C20: " << endl;
            C20.imprimir();
            cout << "C25: " << endl;
            C25.imprimir();
            cout << "D10: " << endl;
            D10.imprimir();
            break;
        }
        case 4: {
            // Si ambas colas tienen elementos, toma 1 de cada una; si una cola tiene elementos y la otra est� vac�a, toma todos los elementos de la cola con elementos
            while (!C20.estaVacia() || !C25.estaVacia()) {
                if (!C20.estaVacia())
                    D10.encolar(C20.desencolar());
                if (!C25.estaVacia())
                    D10.encolar(C25.desencolar());
            }
            break;
        }
        default:
            cout << "Opci�n inv�lida" << endl;
            break;
        }
    } while (opcion != 0);
}
