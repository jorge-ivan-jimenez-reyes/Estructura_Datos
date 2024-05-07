#include <iostream>
#include "ArbolBinario.h"

using namespace std;

ArbolBinario::ArbolBinario()
{
    raiz_ = nullptr;
}

ArbolBinario::~ArbolBinario() = default;

void ArbolBinario::crearArbol(const int valor)
{
    temp_ = new Nodo;
    temp_->dato = valor;
    temp_->izquierdo = nullptr;
    temp_->derecho = nullptr;
}

Nodo* ArbolBinario::obtenerRaiz() const
{
    return raiz_;
}

void ArbolBinario::insertar(Nodo* nodo)
{
    if (raiz_ == nullptr)
    {
        raiz_ = temp_;
        cout << "Nodo raíz añadido" << endl;
        return;
    }
    if (temp_->dato < nodo->dato)
    {
        if (nodo->izquierdo == nullptr)
        {
            nodo->izquierdo = temp_;
            cout << "Nodo añadido a la izquierda de ----> " << nodo->dato << endl;
        }
        insertar(nodo->izquierdo);
        return;
    }
    if (temp_->dato > nodo->dato)
    {
        if (nodo->derecho == nullptr)
        {
            nodo->derecho = temp_;
            cout << "Nodo añadido a la derecha de ----> " << nodo->dato << endl;
            return;
        }
        insertar(nodo->derecho);
        return;
    }
    if (temp_->dato == nodo->dato)
    {
        cout << "El nodo ya existe" << endl;
    }
}
