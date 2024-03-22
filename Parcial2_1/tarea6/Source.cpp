//Empleando C++ construye una aplicación que opere la llegada y descarga de trailers en la Central de Abastos, mediante la implementación dinámica del TDA Cola.
//
//Para cada tráiler se deben registrar sus placas y el producto que transporta.
#include <iostream>
#include "cola.h"

using namespace std;

int main()
{
   

    cola muelle;
    int eleccion;

    do
    {
        remolque camion;
        cout << endl << "--------- MENÚ PRINCIPAL ---------" << endl;
        cout << "1. Llegada" << endl;
        cout << "2. Descarga" << endl;
        cout << "3. Mostrar cola" << endl;
        cout << "4. Tamaño" << endl;
        cout << "5. Mostrar cabeza" << endl;
        cout << "6. Mostrar cola" << endl;
        cout << "7. ¿Está vacía?" << endl;
        cout << "0. Salir" << endl;

        cout << "ELECCIÓN: ";
        cin >> eleccion;

        switch (eleccion)
        {
        case 1:
            cout << "Placa: ";
            cin >> camion.placa;
            cout << "Producto: ";
            cin >> camion.producto;
            muelle.encolar(camion);
            break;
        case 2:
            cout << "Descargando..." << endl;
            muelle.desencolar();
            break;
        case 3:
            muelle.imprimir();
            break;
        case 4:
            cout << "Tamaño: " << muelle.tamano() << endl;
            break;
        case 5:
            muelle.mostrar_cabeza();
            break;
        case 6:
            muelle.mostrar_cola();
            break;
        case 7:
            muelle.esta_vacia();
            break;
        case 0:
            cout << "¡Adiós!" << endl;
            break;
        default:
            cout << "Elección inválida" << endl;
        }
    } while (eleccion != 0);

    return 0;
}
