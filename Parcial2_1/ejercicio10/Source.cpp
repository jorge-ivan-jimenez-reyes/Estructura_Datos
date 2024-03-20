
#include "colapalabras.h"


int main() {
    Queue queue;

    int opcion;
    string valor;

    do {
        cout << endl << "MENU PRINCIPAL" << endl;
        cout << "1. Encolar" << endl;
        cout << "2. Desencolar" << endl;
        cout << "3. Imprimir" << endl;
        cout << "4. Mostrar parámetros" << endl;
        cout << "0. Salir" << endl;

        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Ingrese el valor: ";
            cin >> valor;
            queue.enqueue(valor);
            break;

        case 2:
            cout << "Desencolar: " << queue.dequeue() << endl;
            break;

        case 3:
            queue.print();
            break;

        case 4:
            queue.mostrar_parametros();
            break;

        case 0:
            cout << "¡Adiós!" << endl;
            break;

        default:
            cout << "Opción inválida" << endl;
            break;
        }

    } while (opcion != 0);

    return 0;
}
