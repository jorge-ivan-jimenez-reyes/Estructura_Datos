//Mediante C++ y orientaci�n a objetos, elabora un programa que construya una
//pila con los datos de los colchones almacenados en la bodega de �Almacenes Grand�.
//Para cada colch�n debe contener su marca y el tama�o(King size, Matrimonial, Individual, etc.)
// La informaci�n la proporcionar� el usuario.

//La aplicaci�n debe incluir las siguientes opciones :
//a)       Opci�n para mostrar toda la informaci�n de la pila, indicando la informaci�n que se encuentra en el tope.
//b)       Posibilidad de insertar(push) nuevos colchones en la pila
//c)       Posibilidad de extraer(pop) colchones de la pila.

#include "Pilas.h"

int main() {
    pila s;
    cout << "Comprobaci�n inicial" << endl;
    s.esta_vacia();

    int eleccion;

    do {
        colchon e;
        cout << endl << "------------- MEN� PRINCIPAL ------------- " << endl;
        cout << "1. Empujar (Push)" << endl;
        cout << "2. Sacar (Pop)" << endl;
        cout << "3. Mostrar (Print)" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingrese su elecci�n: ";
        cin >> eleccion;
        cout << endl;

        switch (eleccion) {
        case 1:
            cout << "EMPUJANDO" << endl;
            cout << "Marca: ";
            cin >> e.marca;
            cout << "Tama�o: ";
            cin >> e.tama�o;
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
            cout << "Opci�n inv�lida" << endl;
        }
    } while (eleccion != 0);
    cout << "Terminado" << endl;
    return 0;
}
