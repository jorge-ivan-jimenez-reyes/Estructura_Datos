#include "pilase.h"


Pila::Pila() {
    this->minimo = 0;
    this->maximo = tama�o - 1;
    this->contador = minimo - 1;
    contenido = new int[tama�o];
    for (int i = 0; i < tama�o; i++) *(contenido + i) = 0;
}

Pila::~Pila() { delete[] contenido; }

void Pila::empujar(int n) {
    if (this->contador >= this->maximo) cout << "La pila est� llena" << endl;
    else {
        contador++;
        *(contenido + this->contador) = n;
        cout << "�Empujado!" << endl;
    }
}

int Pila::sacar() {
    int sacado = -1;
    if (this->contador < this->minimo) cout << "La pila est� vac�a" << endl;
    else {
        sacado = *(contenido + this->contador);
        contador--;
        cout << "�Sacado!" << endl;
    }
    return sacado;
}

void Pila::mostrar() {
    cout << "Contenido de la pila: ";
    if (this->contador < this->minimo) cout << "La pila est� vac�a" << endl;
    else {
        for (int i = 0; i <= this->contador; i++) cout << *(contenido + i) << " ";
        cout << endl;
    }
    cout << endl;
}

bool Pila::estaVacia() {
    if (this->contador < this->minimo) return true;
    else return false;
}
