#include "ListaDoble.h"

ListaDoblementeEnlazada::ListaDoblementeEnlazada()
{
    cabeza_ = cola_ = nullptr;
}

ListaDoblementeEnlazada::~ListaDoblementeEnlazada() = default;

void ListaDoblementeEnlazada::insertar_al_inicio(const string& valor)
{
    temporal_ = new nodo;
    temporal_->dato = valor;
    temporal_->siguiente = cabeza_;
    temporal_->anterior = nullptr;
    if (!esta_vacia())
        cabeza_->anterior = temporal_;
    else
        cola_ = temporal_;
    cabeza_ = temporal_;
}

void ListaDoblementeEnlazada::insertar_al_final(const string& valor)
{
    if (esta_vacia())
    {
        insertar_al_inicio(valor);
        return;
    }
    temporal_ = new nodo;
    temporal_->dato = valor;
    temporal_->siguiente = nullptr;
    temporal_->anterior = cola_;
    cola_->siguiente = temporal_;
    cola_ = temporal_;
}

void ListaDoblementeEnlazada::insertar_en_cualquier_posicion(const string& valor, const string& despues_de)
{
    bool encontrado = false;
    if (esta_vacia())
    {
        insertar_al_inicio(valor);
        return;
    }
    nodo* anterior = cabeza_;
    while (anterior != nullptr)
    {
        if (anterior->dato == despues_de)
        {
            encontrado = true;
            break;
        }
        anterior = anterior->siguiente;
    }
    if (!encontrado)
    {
        cout << "Elemento no encontrado" << endl;
        return;
    }

    if (anterior == cola_)
    {
        insertar_al_final(valor);
        return;
    }
    temporal_ = new nodo;
    temporal_->dato = valor;
    temporal_->siguiente = anterior->siguiente;
    temporal_->anterior = anterior;
    anterior->siguiente = temporal_;
    temporal_->siguiente->anterior = temporal_;
}

void ListaDoblementeEnlazada::eliminar_inicio()
{
    if (esta_vacia())
    {
        cout << "La lista está vacía" << endl;
        return;
    }

    temporal_ = cabeza_;
    const string eliminado = temporal_->dato;

    cabeza_ = cabeza_->siguiente;
    if (temporal_ == cola_)
        cola_ = nullptr;
    else
        cabeza_->anterior = nullptr;

    cout << "Eliminado: " << eliminado << endl;
    delete temporal_;
}

void ListaDoblementeEnlazada::eliminar_final()
{
    if (esta_vacia())
    {
        cout << "La lista está vacía" << endl;
        return;
    }

    temporal_ = cola_;
    const string eliminado = temporal_->dato;

    cola_ = cola_->anterior;
    if (temporal_ == cabeza_)
        cabeza_ = nullptr;
    else
        cola_->siguiente = nullptr;

    cout << "Eliminado: " << eliminado << endl;
    delete temporal_;
}

void ListaDoblementeEnlazada::eliminar_elemento(const string& valor)
{
    bool encontrado = false;

    if (esta_vacia())
    {
        cout << "La lista está vacía" << endl;
        return;
    }

    temporal_ = cabeza_;
    while (temporal_ != nullptr)
    {
        if (temporal_->dato == valor)
        {
            encontrado = true;
            break;
        }
        temporal_ = temporal_->siguiente;
    }

    if (!encontrado)
    {
        cout << "Elemento no encontrado" << endl;
        return;
    }

    if (temporal_ == cabeza_)
    {
        eliminar_inicio();
        return;
    }
    if (temporal_ == cola_)
    {
        eliminar_final();
        return;
    }

    const string eliminado = temporal_->dato;
    temporal_->anterior->siguiente = temporal_->siguiente;
    temporal_->siguiente->anterior = temporal_->anterior;
    cout << "Eliminado: " << eliminado << endl;
    delete temporal_;
}

bool ListaDoblementeEnlazada::esta_vacia() const
{
    return cabeza_ == nullptr;
}

int ListaDoblementeEnlazada::tamano()
{
    int cuenta = 0;
    temporal_ = cabeza_;
    while (temporal_ != nullptr)
    {
        cuenta++;
        temporal_ = temporal_->siguiente;
    }
    return cuenta;
}

void ListaDoblementeEnlazada::mostrar_de_inicio_a_fin()
{
    if (esta_vacia())
    {
        cout << "La lista está vacía" << endl;
        return;
    }
    cout << "De inicio a fin: ";
    temporal_ = cabeza_;
    while (temporal_ != nullptr)
    {
        cout << temporal_->dato << " ";
        temporal_ = temporal_->siguiente;
    }
    cout << endl;
    cout << "CABEZA: " << cabeza_->dato << endl;
    cout << "COLA: " << cola_->dato << endl;
    cout << endl;
}

void ListaDoblementeEnlazada::mostrar_de_fin_a_inicio()
{
    if (esta_vacia())
    {
        cout << "La lista está vacía" << endl;
        return;
    }
    cout << "De fin a inicio: ";
    temporal_ = cola_;
    while (temporal_ != nullptr)
    {
        cout << temporal_->dato << " ";
        temporal_ = temporal_->anterior;
    }
    cout << endl;
    cout << "COLA: " << cola_->dato << endl;
    cout << "CABEZA: " << cabeza_->dato << endl;
    cout << endl;
}
