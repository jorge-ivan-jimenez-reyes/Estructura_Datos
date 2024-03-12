#include "Pilas.h"

int main() {
    int opcion;
    pilas pila;
    string modelo;

    cout << "Iniciando" << endl;

    do {
        cout << endl;
        cout << "MENÚ PRINCIPAL" << endl;
        cout << "1. Agregar" << endl;
        cout << "2. Quitar" << endl;
        cout << "3. Mostrar pila" << endl;
        cout << "4. Mostrar elemento superior" << endl;
        cout << "0. Salir" << endl;

        cout << "Opción: ";
        cin >> opcion;
        cout << endl;

        switch (opcion) {
        case 1:
            cout << "Agregando..." << endl;
            cout << "Ingrese un modelo: ";
            cin >> modelo;
            pila.push(modelo);
            break;

        case 2:
            cout << "Quitando..." << endl;
            pila.pop();
            break;

        case 3:
            cout << "Mostrando..." << endl;
            pila.show();
            cout << "¡Mostrado!" << endl;
            break;

        case 4:
            cout << "Mostrando elemento superior..." << endl;
            cout << pila.top() << endl;
            break;

        case 0:
            cout << "Presionó 0" << endl;
            break;
        default:
            cout << "Opción inválida" << endl;
        }
    } while (opcion != 0);

    cout << "Finalizando" << endl;

    return 0;
}
