#include "ListaDoblementeEnlazadaDePalabras.h"

using namespace std;

int main()
{
    int eleccion;
    string valor, despuesDe;
    ListaDoblementeEnlazadaDePalabras lista;

    do
    {
        cout << endl << "MENÚ PRINCIPAL" << endl;

        cout << "1) Insertar elemento en cualquier posición" << endl;
        cout << "2) Eliminar elemento" << endl;
        cout << "3) Mostrar lista de cabeza a cola" << endl;
        cout << "4) Mostrar lista de cola a cabeza" << endl;
        cout << "5) Tamaño" << endl;
        cout << "0) Salir" << endl;

        cout << "Elección: ";
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
                cout << "Introducir después de: ";
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
            cout << "Tamaño: " << lista.tamano() << endl;
            break;

        case 0:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Elección inválida" << endl;
            break;
        }
    } while (eleccion != 0);

    return 0;
}
