#include "registros.h"

Fabrica::Fabrica() {
    cout << "Número de empleados: ";
    cin >> tamaño;
    empleados = new Empleado[tamaño];
    cout << "Fabrica creada" << endl;
    cout << endl;
}

Fabrica::~Fabrica() {
    delete[] empleados;
    cout << "Fabrica destruida" << endl;
    cout << endl;
}

void Fabrica::Mostrar() {
    cout << endl;
    cout << "Mostrando..." << endl;
    Empleado* emps = empleados;
    for (int i = 0; i < tamaño; i++) {
        cout << "EMPLEADO " << i + 1 << endl;
        cout << "Nombre: " << emps->nombre << endl;
        cout << "Edad laboral: " << emps->edad_laboral << endl;
        cout << "Piezas: ";
        int* pcs = empleados[i].piezas;
        for (int j = 0; j < 3; ++j) cout << *(pcs + j) << " ";
        cout << endl;
        cout << endl;
        emps++;
    }
}

void Fabrica::Ordenar() {
    cout << endl;
    cout << "Ordenando..." << endl;
    Empleado* emps = empleados;
    for (int i = 0; i < tamaño; ++i) {
        for (int j = 0; j < tamaño; ++j) {
            if ((emps + i)->edad_laboral < (emps + j)->edad_laboral) {
                Empleado temp = *(emps + i);
                *(emps + i) = *(emps + j);
                *(emps + j) = temp;
            }
        }
    }
}

void Fabrica::Registrar() {
    cout << endl;
    cout << "Registrando..." << endl;
    Empleado* emps = empleados;
    for (int i = 0; i < tamaño; i++) {
        cout << "EMPLEADO " << i + 1 << endl;
        cout << "Nombre: ";
        cin >> emps->nombre;
        cout << "Edad laboral: ";
        cin >> emps->edad_laboral;
        cout << "Piezas: ";
        int* pcs = emps->piezas; // Acceso correcto a la matriz piezas
        for (int j = 0; j < 3; ++j) {
            cin >> pcs[j]; // Acceso simplificado a la matriz piezas
        }
        cout << endl;
        emps++;
    }
}
