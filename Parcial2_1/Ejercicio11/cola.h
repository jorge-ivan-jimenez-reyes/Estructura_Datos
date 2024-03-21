#pragma once
#include <iostream>

using namespace std;

struct Nodo {
    string dato;
    Nodo* siguiente;
};

class cola {
public:
    cola();
    ~cola();
    void encolar(string);
    string desencolar();
    void imprimir() const;
    bool estaVacia() const;
private:
    Nodo* cabeza;
    Nodo* Cola;
};

