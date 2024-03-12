#include <iostream>
#include "pilaligada.h"

using namespace std;

int main() {
    Pila pila;
    Empleado empleado;
    pila.estaVacia();

    int eleccion;

    do {
        cout << endl << "------------- MEN� PRINCIPAL ------------- " << endl;
        cout << "1. Empujar" << endl;
        cout << "2. Sacar" << endl;
        cout << "3. Imprimir" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingrese su elecci�n: ";
        cin >> eleccion;
        cout << endl;

        switch (eleccion) {
        case 1:
            cout << "Contratando" << endl;
            cout << "Ingrese ID: ";
            cin >> empleado.ID;
            cout << "Ingrese Nombre: ";
            cin >> empleado.Nombre;
            cout << "Ingrese Salario: ";
            cin >> empleado.Salario;
            pila.empujar(empleado);
            break;
        case 2:
            cout << "Despidiendo" << endl;
            pila.sacar();
            break;
        case 3:
            cout << "Mostrando" << endl;
            pila.imprimir();
            break;
        case 0:
            cout << "Saliendo" << endl;
            break;
        default:
            cout << "Elecci�n inv�lida" << endl;
        }
    } while (eleccion != 0);
    cout << "Finalizado" << endl;
    return 0;
}
