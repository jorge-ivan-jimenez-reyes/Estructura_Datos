#include "registros.h"

int main() {
    bool creada = false;
    int eleccion;
    Fabrica* fabrica = nullptr;
    while (true) {
        cout << endl << endl;
        cout << "--------------MENU PRINCIPAL--------------" << endl;
        cout << "1. Crear fábrica" << endl;
        cout << "2. Registrar empleados" << endl;
        cout << "3. Mostrar empleados" << endl;
        cout << "4. Ordenar empleados" << endl;
        cout << "5. Salir" << endl;
        cout << "Eleccion: ";
        cin >> eleccion;
        switch (eleccion) {
        case 1:
            if (creada) {
                cout << "Fábrica ya creada" << endl;
            }
            else {
                fabrica = new Fabrica();
                creada = true;
            }
            break;
        case 2:
            if (creada) {
                fabrica->Registrar();
            }
            else {
                cout << "Fábrica no creada" << endl;
            }
            break;
        case 3:
            if (creada) {
                fabrica->Mostrar();
            }
            else {
                cout << "Fábrica no creada" << endl;
            }
            break;
        case 4:
            if (creada) {
                fabrica->Ordenar();
                fabrica->Mostrar();
            }
            else {
                cout << "Fábrica no creada" << endl;
            }
            break;
        case 5:
            if (creada) {
                delete fabrica;
            }
            cout << "Saliendo..." << endl;
            return 0;
        default:
            cout << "Elección inválida" << endl;
        }
    }
}
