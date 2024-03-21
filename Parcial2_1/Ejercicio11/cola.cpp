#include "cola.h"


cola::cola() {
    cabeza = nullptr;
    Cola = nullptr;
}

cola::~cola() {
    const Nodo* actual = cabeza;
    while (actual != nullptr) {
        const Nodo* siguiente = actual->siguiente;
        delete actual;
        actual = siguiente;
    }
}

void cola::encolar(string dato) {
    auto nuevoNodo = new Nodo;
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = nullptr;
    if (cabeza == nullptr) {
        cabeza = nuevoNodo;
        Cola = nuevoNodo;
    }
    else {
        Cola->siguiente = nuevoNodo;
        Cola = nuevoNodo;
    }
}

string cola::desencolar() {
    if (cabeza == nullptr) {
        return "";
    }
    const Nodo* temp = cabeza;
    cabeza = cabeza->siguiente;
    string dato = temp->dato;
    delete temp;
    return dato;
}

void cola::imprimir() const {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        cout << actual->dato << "\t";
        actual = actual->siguiente;
    }
    cout << endl;
}

bool cola::estaVacia() const {
    return cabeza == nullptr;
}
