#pragma once
#include <string>
#include <iostream>
using namespace std;

struct solicitante {
    solicitante() = default;
    solicitante(string n, int d) {
        this->nombre = n;
        this->digitos = d;
    }
    string nombre{};
    int digitos{};
    void detalles() {
        cout << "NOMBRE\t" << "DÍGITOS" << endl;
        cout << this->nombre << "\t" << this->digitos << endl;
    }
};

struct nodo {
    solicitante datos;
    nodo* siguiente{};
};

class colas
{
public:
    colas();
    ~colas();
    void agregar_solicitante_en_linea(solicitante);
    solicitante pasar_a_entrevista();

    void mostrar() const;
    int tamano() const;
    void mostrar_cabeza() const;
    void mostrar_cola() const;
    bool esta_vacia() const;

private:
    nodo* cabeza_;
    nodo* cola_;
};
