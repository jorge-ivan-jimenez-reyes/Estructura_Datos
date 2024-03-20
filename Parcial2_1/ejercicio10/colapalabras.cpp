#include "colapalabras.h"


Cola::Cola() {
    this->tope = -1;
    this->maximo = 99;
    this->minimo = 0;
    this->cabeza = "";
}

Cola::~Cola() = default;

void Cola::encolar(string valor) {
    if (this->tope == 99) {
        cout << "La cola está llena" << endl;
        return;
    }
    this->tope++;
    this->datos[this->tope] = valor;
}

string Cola::desencolar() {
    if (this->tope == -1) {
        cout << "La cola está vacía" << endl;
        return "";
    }
    this->cabeza = this->datos[0];
    for (int i = 0; i < this->tope; i++) {
        this->datos[i] = this->datos[i + 1];
    }
    this->tope--;
    return this->cabeza;
}

void Cola::imprimir() {
    if (this->tope == -1) {
        cout << "La cola está vacía" << endl;
        return;
    }
    for (int i = 0; i <= this->tope; i++) {
        cout << this->datos[i] << endl;
    }
    cout << endl;
}

void Cola::mostrar_parametros() {
    cout << "TOPE: " << this->tope << endl;
    cout << "MÁXIMO: " << this->maximo << endl;
}
