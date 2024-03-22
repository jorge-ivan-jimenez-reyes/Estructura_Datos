#pragma once
#include <iostream>

struct remolque
{
    std::string placa;
    std::string producto;
};

struct nodo
{
    remolque datos;
    nodo* siguiente{};
};

class cola
{
public:
    cola();
    ~cola();
    void encolar(const remolque&);
    void desencolar();
    void imprimir() const;
    int tamano() const;
    void mostrar_cabeza() const;
    void mostrar_cola() const;
    bool esta_vacia() const;

private:
    nodo* cabeza_;
    nodo* cola_;
};