#include "cola.h"

using namespace std;

cola::cola()
{
    cabeza_ = nullptr;
    cola_ = nullptr;
}

cola::~cola()
{
    const nodo* actual = cabeza_;
    while (actual != nullptr)
    {
        const nodo* siguiente = actual->siguiente;
        delete actual;
        actual = siguiente;
    }
}

void cola::encolar(const remolque& datos)
{
    auto nuevo_nodo = new nodo;
    nuevo_nodo->datos = datos;
    nuevo_nodo->siguiente = nullptr;
    if (cabeza_ == nullptr)
    {
        cabeza_ = nuevo_nodo;
        cola_ = nuevo_nodo;
    }
    else
    {
        cola_->siguiente = nuevo_nodo;
        cola_ = nuevo_nodo;
    }
}

void cola::desencolar()
{
    if (esta_vacia())
    {
        cout << endl;
    }
    else
    {
        const auto antigua_cabeza = cabeza_;
        cabeza_ = cabeza_->siguiente;
        delete antigua_cabeza;
    }
}

void cola::imprimir() const
{
    if (esta_vacia())
    {
        cout << endl;
    }
    else
    {
        const nodo* actual = cabeza_;
        while (actual != nullptr)
        {
            cout << actual->datos.placa << " " << actual->datos.producto << endl;
            actual = actual->siguiente;
        }
    }
}

int cola::tamano() const
{
    if (esta_vacia())
    {
        cout << endl;
        return 0;
    }
    int tamano = 0;
    const nodo* actual = cabeza_;
    while (actual != nullptr)
    {
        tamano++;
        actual = actual->siguiente;
    }
    return tamano;
}

void cola::mostrar_cabeza() const
{
    if (esta_vacia())
    {
        cout << endl;
    }
    else
    {
        cout << cabeza_->datos.placa << " " << cabeza_->datos.producto << endl;
    }
}

void cola::mostrar_cola() const
{
    if (esta_vacia())
    {
        cout << endl;
    }
    else
    {
        cout << cola_->datos.placa << " " << cola_->datos.producto << endl;
    }
}

bool cola::esta_vacia() const
{
    if (cabeza_ == nullptr)
    {
        cout << "Vacía" << endl;
        return true;
    }
    cout << "No está vacía" << endl;
    return false;
}
