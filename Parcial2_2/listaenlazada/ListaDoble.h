#pragma once

#include <iostream>
#include <string>

using namespace std;

class ListaDoblementeEnlazada
{
public:
    ListaDoblementeEnlazada();
    ~ListaDoblementeEnlazada();

    void insertar_al_inicio(const string&);
    void insertar_al_final(const string&);
    void insertar_en_cualquier_posicion(const string&, const string&);

    void eliminar_inicio();
    void eliminar_final();
    void eliminar_elemento(const string&);

    bool esta_vacia() const;
    int tamano();

    void mostrar_de_inicio_a_fin();
    void mostrar_de_fin_a_inicio();

private:
    struct nodo
    {
        string dato{};
        nodo* siguiente{};
        nodo* anterior{};
    };

    nodo* cabeza_, * cola_, * temporal_{};
};


