#include "listas.h"

using namespace std;

int main()
{
    int eleccion;
    string valor, antes;
    bool existe;
    ListaCircularEnlazada lista;

    do
    {
        cout << endl << "MENÚ PRINCIPAL" << endl;

        cout << "1. Imprimir" << endl;
        cout << "2. Insertar en cualquier posición" << endl;
        cout << "3. Eliminar" << endl;
        cout << "4. Buscar" << endl;
        cout << "5. Tamaño" << endl;
        cout << "0. Salir" << endl;

        cout << "Elegir: ";
        cin >> eleccion;

        switch (eleccion)
        {
        case 1:
            lista.mostrarTodaLaLista();
            break;
        case 2:
            if (lista.estaVacia())
            {
                cout << "Introduce el valor: ";
                cin >> valor;
                lista.insertarEnCualquierPosicion(valor, "");
            }
            else
            {
                cout << "Introduce el valor: ";
                cin >> valor;
                cout << "Introduce antes de: ";
                cin >> antes;
                lista.insertarEnCualquierPosicion(valor, antes);
            }
            break;
        case 3:
            cout << "Introduce el valor: ";
            cin >> valor;
            lista.eliminarElemento(valor);
            break;
        case 4:
            cout << "Introduce el valor: ";
            cin >> valor;
            existe = lista.buscarPalabra(valor);
            ListaCircularEnlazada::buscado(existe);
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
