#include "ListaDoble.h"

using namespace std;

int main()
{
    int eleccion;
    string valor, despues_de;
    ListaDoblementeEnlazada lista;

    do
    {
        cout << endl << "MENÚ PRINCIPAL" << endl;

        cout << "1) Insertar elemento en cualquier posición" << endl;
        cout << "2) Eliminar elemento" << endl;
        cout << "3) Mostrar lista de inicio a fin" << endl;
        cout << "4) Mostrar lista de fin a inicio" << endl;
        cout << "5) Tamaño" << endl;
        cout << "0) Salir" << endl;

        cout << "Elegir: ";
        cin >> eleccion;

        switch (eleccion)
        {
        case 1:
            if (lista.esta_vacia())
            {
                cout << "Introduzca valor: ";
                cin >> valor;
                lista.insertar_en_cualquier_posicion(valor, "");
            }
            else
            {
                cout << "Introduzca valor: ";
                cin >> valor;
                cout << "Introducir después de: ";
                cin >> despues_de;
                lista.insertar_en_cualquier_posicion(valor, despues_de);
            }
            break;

        case 2:
            cout << "Introduzca valor: ";
            cin >> valor;
            lista.eliminar_elemento(valor);
            break;

        case 3:
            lista.mostrar_de_inicio_a_fin();
            break;

        case 4:
            lista.mostrar_de_fin_a_inicio();
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
