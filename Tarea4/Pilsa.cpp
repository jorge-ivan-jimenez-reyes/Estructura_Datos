#include "Pilas.h"
#include <iostream>

Pila::Pila() : cima(nullptr) {}

Pila::~Pila() {
    while (!estaVacia()) {
        sacar();
    }
}

void Pila::empujar(int val) {
    Nodo* nuevoNodo = new Nodo(val);
    if (estaVacia()) {
        cima = nuevoNodo;
    }
    else {
        nuevoNodo->siguiente = cima;
        cima = nuevoNodo;
    }
}

int Pila::sacar() {
    if (estaVacia()) {
        std::cout << "¡Pila vacía!" << std::endl;
        return -1; // Devolver un valor ficticio
    }
    else {
        int valorSacado = cima->dato;
        Nodo* temp = cima;
        cima = cima->siguiente;
        delete temp;
        return valorSacado;
    }
}

void Pila::mostrar() {
    Nodo* actual = cima;
    while (actual != nullptr) {
        std::cout << actual->dato << " ";
        actual = actual->siguiente;
    }
    std::cout << std::endl;
}

bool Pila::estaVacia() {
    return cima == nullptr;
}
