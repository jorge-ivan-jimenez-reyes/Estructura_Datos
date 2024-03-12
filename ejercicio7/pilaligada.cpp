#include "pilaligada.h"


#include <utility>

Pila::Pila() {
    cima = nullptr;
}

Pila::~Pila() {
    while (cima != nullptr) {
        Nodo* temp = cima;
        cima = cima->siguiente;
        delete temp;
    }
}

void Pila::empujar(Empleado x) {
    Nodo* temp = new Nodo;
    temp->dato = std::move(x);
    temp->siguiente = cima;
    cima = temp;
    cout << "Contratado" << endl;
}

Empleado Pila::sacar() {
    if (cima == nullptr) {
        cout << "La pila está vacía" << endl;
    }
    else {
        Nodo* temp = cima;
        cima = cima->siguiente;
        Empleado x = temp->dato;
        delete temp;
        cout << "Despedido " << x.Nombre << endl;
        return x;
    }
}

bool Pila::estaVacia() {
    if (cima == nullptr) {
        cout << "La pila está vacía" << endl;
        return true;
    }
    else {
        cout << "La pila no está vacía" << endl;
        return false;
    }
}

void Pila::imprimir() {
    if (this->estaVacia()) {
        return;
    }
    else {
        Nodo* temp = cima;
        cout << "ID\t|Nombre\t|Salario" << endl;
        while (temp != nullptr) {
            cout << temp->dato.ID << "\t|" << temp->dato.Nombre << "\t|" << temp->dato.Salario << endl;
            temp = temp->siguiente;
        }
        cout << endl;
    }
}
