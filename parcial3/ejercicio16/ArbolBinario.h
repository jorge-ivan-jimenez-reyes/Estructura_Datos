#pragma once

struct Nodo
{
    Nodo* izquierdo;
    int dato;
    Nodo* derecho;
};

class ArbolBinario
{
public:
    ArbolBinario();
    ~ArbolBinario();
    void crearArbol(int);
    Nodo* obtenerRaiz() const;
    void insertar(Nodo*);

private:
    Nodo* raiz_{}, * temp_{};
};
