//Empleando C++ construye una aplicaci�n que opere la llegada y descarga de trailers en la Central de Abastos, mediante la implementaci�n din�mica del TDA Cola.
//
//Para cada tr�iler se deben registrar sus placas y el producto que transporta.
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
        cout << endl << "--------- MEN� PRINCIPAL ---------" << endl;
        cout << "1. Llegada" << endl;
        cout << "2. Descarga" << endl;
        cout << "3. Mostrar cola" << endl;
        cout << "4. Tama�o" << endl;
        cout << "5. Mostrar cabeza" << endl;
        cout << "6. Mostrar cola" << endl;
        cout << "7. �Est� vac�a?" << endl;
        cout << "0. Salir" << endl;

        cout << "ELECCI�N: ";
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
            cout << "Tama�o: " << muelle.tamano() << endl;
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
            cout << "�Adi�s!" << endl;
            break;
        default:
            cout << "Elecci�n inv�lida" << endl;
        }
    } while (eleccion != 0);

    return 0;
}
