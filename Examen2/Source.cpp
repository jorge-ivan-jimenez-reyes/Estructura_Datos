//Mediante C++ y orientación a objetos, elabora un programa que construya una
//pila con los datos de los colchones almacenados en la bodega de “Almacenes Grand”.
//Para cada colchón debe contener su marca y el tamaño(King size, Matrimonial, Individual, etc.)
// La información la proporcionará el usuario.

//La aplicación debe incluir las siguientes opciones :
//a)       Opción para mostrar toda la información de la pila, indicando la información que se encuentra en el tope.
//b)       Posibilidad de insertar(push) nuevos colchones en la pila
//c)       Posibilidad de extraer(pop) colchones de la pila.

#include "Pilas.h"

int main() {
    pila s;
    cout << "Comprobación inicial" << endl;
    s.esta_vacia();

    int eleccion;

    do {
        colchon e;
        cout << endl << "------------- MENÚ PRINCIPAL ------------- " << endl;
        cout << "1. Empujar (Push)" << endl;
        cout << "2. Sacar (Pop)" << endl;
        cout << "3. Mostrar (Print)" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingrese su elección: ";
        cin >> eleccion;
        cout << endl;

        switch (eleccion) {
        case 1:
            cout << "EMPUJANDO" << endl;
            cout << "Marca: ";
            cin >> e.marca;
            cout << "Tamaño: ";
            cin >> e.tamaño;
            s.empujar(e);
            break;
        case 2:
            cout << "SACANDO" << endl;
            s.sacar();
            break;
        case 3:
            cout << "MOSTRANDO" << endl;
            s.imprimir();
            cout << endl << "TOPE: " << endl;
            s.datos_tope();
            break;
        case 0:
            cout << "Saliendo" << endl;
            break;
        default:
            cout << "Opción inválida" << endl;
        }
    } while (eleccion != 0);
    cout << "Terminado" << endl;
    return 0;
}
