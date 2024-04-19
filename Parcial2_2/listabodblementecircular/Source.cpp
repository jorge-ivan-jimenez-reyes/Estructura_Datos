#include "ListaDoblementeEnlazadaDePalabras.h"

using namespace std;

int main()
{
    int eleccion;
    string valor, despuesDe;
    ListaDoblementeEnlazadaDePalabras lista;

    do
    {
        cout << endl << "MEN� PRINCIPAL" << endl;

        cout << "1) Insertar elemento en cualquier posici�n" << endl;
        cout << "2) Eliminar elemento" << endl;
        cout << "3) Mostrar lista de cabeza a cola" << endl;
        cout << "4) Mostrar lista de cola a cabeza" << endl;
        cout << "5) Tama�o" << endl;
        cout << "0) Salir" << endl;

        cout << "Elecci�n: ";
        cin >> eleccion;

        switch (eleccion)
        {
        case 1:
            if (lista.estaVacia())
            {
                cout << "Introduzca valor: ";
                cin >> valor;
                lista.insertarEnCualquierPosicion(valor, "");
            }
            else
            {
                cout << "Introduzca valor: ";
                cin >> valor;
                cout << "Introducir despu�s de: ";
                cin >> despuesDe;
                lista.insertarEnCualquierPosicion(valor, despuesDe);
            }
            break;

        case 2:
            cout << "Introduzca valor: ";
            cin >> valor;
            lista.eliminarElemento(valor);
            break;

        case 3:
            lista.mostrarDeCabezaACola();
            break;

        case 4:
            lista.mostrarDeColaACabeza();
            break;

        case 5:
            cout << "Tama�o: " << lista.tamano() << endl;
            break;

        case 0:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Elecci�n inv�lida" << endl;
            break;
        }
    } while (eleccion != 0);

    return 0;
}
