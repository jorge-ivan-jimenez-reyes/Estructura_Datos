#pragma once

#include <iostream>
#include <string>

using namespace std;

class ListaDoblementeEnlazadaDePalabras
{
public:
    ListaDoblementeEnlazadaDePalabras();
    ~ListaDoblementeEnlazadaDePalabras();

    void insertarAlInicio(const string&);
    void insertarAlFinal(const string&);
    void insertarEnCualquierPosicion(const string&, const string&);

    void eliminarInicio();
    void eliminarFinal();
    void eliminarElemento(const string&);

    bool estaVacia() const;
    int tamano();

    void mostrarDeCabezaACola();
    void mostrarDeColaACabeza();

private:
    struct nodo
    {
        string dato{};
        nodo* siguiente{};
        nodo* anterior{};
    };

    nodo* cabeza_, * cola_, * temporal_{};
};

