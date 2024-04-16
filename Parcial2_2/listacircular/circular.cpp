#include <iostream>
#include "circular.h"

using namespace std;

circular_list::circular_list()
{
    cabeza_ = cola_ = temporal_ = nullptr;
}

void circular_list::insertar_al_final(const int valor)
{
    temporal_ = new nodo;
    temporal_->dato = valor;
    temporal_->siguiente = cabeza_;

    if (cabeza_ == nullptr)
    {
        cabeza_ = cola_ = temporal_;
        cola_->siguiente = cabeza_;
    }
    else
    {
        cola_->siguiente = temporal_;
        cola_ = temporal_;
    }
}

void circular_list::imprimir()
{
    if (cabeza_ == nullptr)
    {
        return;
    }
    else
    {
        temporal_ = cabeza_;
        do
        {
            cout << temporal_->dato << " ";
            temporal_ = temporal_->siguiente;
        } while (temporal_ != cabeza_);
        cout << endl;
    }
}

bool circular_list::buscar(const int valor)
{
    if (cabeza_ == nullptr)
    {
        cout << "La lista está vacía" << endl;
        return false;
    }
    temporal_ = cabeza_;
    do
    {
        if (temporal_->dato == valor)
        {
            return true;
        }
        temporal_ = temporal_->siguiente;
    } while (temporal_ != cabeza_);
    return false;
}

int circular_list::tamano()
{
    int contador = 0;
    if (cabeza_ == nullptr)
    {
        return contador;
    }
    temporal_ = cabeza_;
    do
    {
        contador++;
        temporal_ = temporal_->siguiente;
    } while (temporal_ != cabeza_);
    return contador;
}

void circular_list::existe(const bool valor)
{
    if (valor)
    {
        cout << "Existe en la lista" << endl;
    }
    else
    {
        cout << "No existe en la lista" << endl;
    }
}
