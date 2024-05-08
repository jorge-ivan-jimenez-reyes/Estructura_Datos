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
        cout << "Nodo raíz agregado" << endl;
        return;
    }
    if (temp_->dato < nodo->dato)
    {
        if (nodo->izquierdo == nullptr)
        {
            nodo->izquierdo = temp_;
            cout << "Nodo agregado a la izquierda de ----> " << nodo->dato << endl;
        }
        insertar(nodo->izquierdo);
        return;
    }
    if (temp_->dato > nodo->dato)
    {
        if (nodo->derecho == nullptr)
        {
            nodo->derecho = temp_;
            cout << "Nodo agregado a la derecha de ----> " << nodo->dato << endl;
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

void ArbolBinario::enOrden(const Nodo* nodo)
{
    if (raiz_ == nullptr)
    {
        cout << "El árbol está vacío" << endl;
        return;
    }
    if (nodo->izquierdo != nullptr)
    {
        enOrden(nodo->izquierdo);
    }
    cout << nodo->dato << " ";
    if (nodo->derecho != nullptr)
    {
        enOrden(nodo->derecho);
    }
}

void ArbolBinario::buscar(const Nodo* raiz, const int valor)
{
    if (raiz == nullptr)
    {
        cout << "Nodo no encontrado" << endl;
        return;
    }
    if (raiz->dato == valor)
    {
        cout << "Nodo encontrado" << endl;
        enOrden(raiz);
        return;
    }
    if (raiz->dato > valor)
    {
        buscar(raiz->izquierdo, valor);
    }
    if (raiz->dato < valor)
    {
        buscar(raiz->derecho, valor);
    }
}
