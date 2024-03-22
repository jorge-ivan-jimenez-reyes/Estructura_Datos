#include "colas.h"


using namespace std;

colas::colas()
{
    cabeza_ = nullptr;
    cola_ = nullptr;
}

colas::~colas()
{
    const nodo* actual = cabeza_;
    while (actual != nullptr)
    {
        const nodo* siguiente = actual->siguiente;
        delete actual;
        actual = siguiente;
    }
}

void colas::agregar_solicitante_en_linea(solicitante datos)
{
    const auto nuevo_nodo = new nodo;
    nuevo_nodo->datos = move(datos);
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

void colas::mostrar() const
{
    if (esta_vacia() != true)
    {
        const nodo* actual = cabeza_;
        cout << "NOMBRE\t" << "DÍGITOS" << endl;
        while (actual != nullptr)
        {
            cout << actual->datos.nombre << "\t" << actual->datos.digitos << endl;
            actual = actual->siguiente;
        }
        this->mostrar_cabeza();
        this->mostrar_cola();
    }
    cout << endl;
}

solicitante colas::pasar_a_entrevista()
{
    if (cabeza_ == nullptr)
    {
        cout << "La cola está vacía" << endl;
        return {};
    }
    solicitante datos = cabeza_->datos;
    nodo* siguiente = cabeza_->siguiente;
    delete cabeza_;
    cabeza_ = siguiente;
    return datos;
}

int colas::tamano() const
{
    int tamano = 0;
    const nodo* actual = cabeza_;
    while (actual != nullptr)
    {
        tamano++;
        actual = actual->siguiente;
    }
    return tamano;
}

void colas::mostrar_cabeza() const
{
    if (esta_vacia())
    {
        return;
    }
    cout << "Cabeza" << endl << "NOMBRE: " << cabeza_->datos.nombre << "\t" << "DÍGITOS: " << cabeza_->datos.digitos << endl;
}

void colas::mostrar_cola() const
{
    if (esta_vacia())
    {
        return;
    }
    cout << "Cola" << endl << "NOMBRE: " << cola_->datos.nombre << "\t" << "DÍGITOS: " << cola_->datos.digitos << endl;
}

bool colas::esta_vacia() const
{
    if (cabeza_ == nullptr)
    {
        return true;
    }
    return false;
}
