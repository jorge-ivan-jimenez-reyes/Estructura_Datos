#pragma once

#include <iostream>
#include <string>

#define TAM 6

using namespace std;

struct Sucursal {
    int num;
    string nomGte;
    int ventas[2];
};

class Registro {
public:
    Registro();
    void Mostrar();
    int Poblar();
    void Ordenar();

private:
    Sucursal sucs[TAM];
    int ocupados;

    void intercambiar(Sucursal& a, Sucursal& b);
};

