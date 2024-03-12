
#include <iostream>
#include <string>
#include "arreglobidimensional.h"


using namespace std;

DosDimArr::DosDimArr(int filas, int columnas) {
    this->filas = filas;
    this->columnas = columnas;
    matriz = new int* [filas];
    for (int i = 0; i < filas; i++) {
        *(matriz + i) = new int[columnas];
    }
}

DosDimArr::~DosDimArr() {
    for (int i = 0; i < filas; i++) {
        delete[] * (matriz + i);
    }
    delete[] matriz;
}

void DosDimArr::name() {
	cout << "Ingrese el nombre: ";
	cin.ignore();
	getline(cin, nombre);
}



void DosDimArr::mostrar() {
    cout << "Nombre: " << nombre << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "\t" << *(*(matriz + i) + j);
        }
        cout << endl;
    }
}

void DosDimArr::ordenar() {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            for (int k = 0; k < columnas; k++) {
                if (*(*(matriz + i) + j) < *(*(matriz + i) + k)) {
                    int temp = *(*(matriz + i) + j);
                    *(*(matriz + i) + j) = *(*(matriz + i) + k);
                    *(*(matriz + i) + k) = temp;
                }
            }
        }
    }
}

void DosDimArr::llenar() {
    int num = 0;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Ingrese un número [" << i + 1 << "," << j + 1 << "]: ";
            cin >> num;
            *(*(matriz + i) + j) = num;
        }
    }
}
