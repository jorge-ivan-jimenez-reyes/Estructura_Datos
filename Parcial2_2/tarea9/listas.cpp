#include "listas.h"

ListaCircularEnlazada::ListaCircularEnlazada()
{
    cabeza_ = cola_ = revisado_ = nullptr;
}

ListaCircularEnlazada::~ListaCircularEnlazada() = default;

void ListaCircularEnlazada::mostrarTodaLaLista() const
{
    if (estaVacia())
    {
        cout << "La lista está vacía" << endl;
        return;
    }
    const nodo* temp = cabeza_;
    while (temp != cola_)
    {
        cout << temp->dato << " ";
        temp = temp->siguiente;
    }
    cout << temp->dato << endl;
}

void ListaCircularEnlazada::insertarEnCualquierPosicion(const string& valor, const string& antes)
{
    auto temp = new nodo;
    temp->dato = valor;
    if (estaVacia())
    {
        cabeza_ = cola_ = temp;
        temp->siguiente = cabeza_;
        return;
    }
    if (antes == cabeza_->dato)
    {
        temp->siguiente = cabeza_;
        cabeza_ = temp;
        cola_->siguiente = cabeza_;
        return;
    }
    nodo* temp2 = cabeza_;
    while (temp2->siguiente != cabeza_ && temp2->siguiente->dato != antes)
    {
        temp2 = temp2->siguiente;
    }
    if (temp2->siguiente == cabeza_)
    {
        temp->siguiente = cabeza_;
        cola_ = temp;
        temp2->siguiente = temp;
    }
    else
    {
        temp->siguiente = temp2->siguiente;
        temp2->siguiente = temp;
    }
}

void ListaCircularEnlazada::eliminarElemento(const string& valor)
{
    if (estaVacia())
    {
        cout << "La lista está vacía" << endl;
        return;
    }
    if (cabeza_->dato == valor)
    {
        if (cabeza_ == cola_)
        {
            delete cabeza_;
            cabeza_ = cola_ = nullptr;
            return;
        }
        const nodo* temp = cabeza_;
        cabeza_ = cabeza_->siguiente;
        cola_->siguiente = cabeza_;
        delete temp;
        return;
    }
    nodo* temp = cabeza_;
    while (temp->siguiente != cabeza_ && temp->siguiente->dato != valor)
    {
        temp = temp->siguiente;
    }
    if (temp->siguiente == cabeza_)
    {
        cout << "Elemento no encontrado" << endl;
        return;
    }
    if (temp->siguiente == cola_)
    {
        cola_ = temp;
        cola_->siguiente = cabeza_;
        delete temp->siguiente;
        return;
    }
    const nodo* temp2 = temp->siguiente;
    temp->siguiente = temp->siguiente->siguiente;
    delete temp2;
}

bool ListaCircularEnlazada::buscarPalabra(const string& valor)
{
    int count = 0;
    if (estaVacia())
    {
        cout << "La lista está vacía" << endl;
        return false;
    }
    if (revisado_ == nullptr) revisado_ = cabeza_;

    while (true)
    {
        if (revisado_->dato == valor) return true;
        revisado_ = revisado_->siguiente;
        count++;
        if (count == tamano()) return false;
    }
}

void ListaCircularEnlazada::buscado(const bool valor)
{
    if (valor)
    {
        cout << "Elemento encontrado" << endl;
    }
    else
    {
        cout << "Elemento no encontrado" << endl;
    }
}

bool ListaCircularEnlazada::estaVacia() const
{
    return cabeza_ == nullptr;
}

int ListaCircularEnlazada::tamano() const
{
    if (estaVacia())
    {
        return 0;
    }
    int count = 1;
    const nodo* temp = cabeza_;
    while (temp != cola_)
    {
        count++;
        temp = temp->siguiente;
    }
    return count;
}
