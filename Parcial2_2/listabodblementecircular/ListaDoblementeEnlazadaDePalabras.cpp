#include "ListaDoblementeEnlazadaDePalabras.h"

ListaDoblementeEnlazadaDePalabras::ListaDoblementeEnlazadaDePalabras()
{
    cabeza_ = cola_ = nullptr;
}

ListaDoblementeEnlazadaDePalabras::~ListaDoblementeEnlazadaDePalabras() = default;

void ListaDoblementeEnlazadaDePalabras::insertarAlInicio(const string& valor)
{
    temporal_ = new nodo;
    temporal_->dato = valor;
    temporal_->siguiente = cabeza_;
    temporal_->anterior = nullptr;
    if (!estaVacia())
        cabeza_->anterior = temporal_;
    else
        cola_ = temporal_;
    cabeza_ = temporal_;
}

void ListaDoblementeEnlazadaDePalabras::insertarAlFinal(const string& valor)
{
    if (estaVacia())
    {
        insertarAlInicio(valor);
        return;
    }
    temporal_ = new nodo;
    temporal_->dato = valor;
    temporal_->siguiente = nullptr;
    temporal_->anterior = cola_;
    cola_->siguiente = temporal_;
    cola_ = temporal_;
}

void ListaDoblementeEnlazadaDePalabras::insertarEnCualquierPosicion(const string& valor, const string& despuesDe)
{
    bool encontrado = false;
    if (estaVacia())
    {
        insertarAlInicio(valor);
        return;
    }
    nodo* previo = cabeza_;
    while (previo != nullptr)
    {
        if (previo->dato == despuesDe)
        {
            encontrado = true;
            break;
        }
        previo = previo->siguiente;
    }
    if (!encontrado)
    {
        cout << "Elemento no encontrado" << endl;
        return;
    }

    if (previo == cola_)
    {
        insertarAlFinal(valor);
        return;
    }
    temporal_ = new nodo;
    temporal_->dato = valor;
    temporal_->siguiente = previo->siguiente;
    temporal_->anterior = previo;
    previo->siguiente = temporal_;
    temporal_->siguiente->anterior = temporal_;
}

void ListaDoblementeEnlazadaDePalabras::eliminarInicio()
{
    if (estaVacia())
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

void ListaDoblementeEnlazadaDePalabras::eliminarFinal()
{
    if (estaVacia())
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

void ListaDoblementeEnlazadaDePalabras::eliminarElemento(const string& valor)
{
    bool encontrado = false;

    if (estaVacia())
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
        eliminarInicio();
        return;
    }
    if (temporal_ == cola_)
    {
        eliminarFinal();
        return;
    }

    const string eliminado = temporal_->dato;
    temporal_->anterior->siguiente = temporal_->siguiente;
    temporal_->siguiente->anterior = temporal_->anterior;
    cout << "Eliminado: " << eliminado << endl;
    delete temporal_;
}

bool ListaDoblementeEnlazadaDePalabras::estaVacia() const
{
    return cabeza_ == nullptr;
}

int ListaDoblementeEnlazadaDePalabras::tamano()
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

void ListaDoblementeEnlazadaDePalabras::mostrarDeCabezaACola()
{
    if (estaVacia())
    {
        cout << "La lista está vacía" << endl;
        return;
    }
    cout << "De cabeza a cola: ";
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

void ListaDoblementeEnlazadaDePalabras::mostrarDeColaACabeza()
{
    if (estaVacia())
    {
        cout << "La lista está vacía" << endl;
        return;
    }
    cout << "De cola a cabeza: ";
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
