#pragma once
#include <iostream>

using namespace std;

struct colchon {
    string marca;
    string tamaño;
};

class pila {
public:
    pila();

    ~pila();

    void empujar(colchon);

    colchon sacar();

    bool esta_vacia() const;

    void imprimir() const;

    void datos_tope() const;


private:
    struct nodo {
        colchon datos;
        nodo* siguiente{};
    };

    nodo* tope_;
};
