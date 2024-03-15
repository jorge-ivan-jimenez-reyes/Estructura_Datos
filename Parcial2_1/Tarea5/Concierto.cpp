#include "Concierto.h"
#include <iostream>
#include <utility>

using namespace std;

Concierto::Concierto()
{
    this->tope_ = -1;
    this->min_ = 0;
    this->max_ = 20;
    this->cabeza_ = comprador{};
    for (int i = 0; i < this->max_; i++) this->datos_[i] = comprador{};
}

Concierto::~Concierto() = default;

void Concierto::encolar(comprador valor)
{
    if (lleno())
    {
        return;
    }
    this->tope_++;
    this->datos_[this->tope_] = std::move(valor);
}

void Concierto::desencolar()
{
    if (vacio())
    {
        return;
    }
    this->cabeza_ = this->datos_[0];
    for (int i = 0; i < this->tope_; i++)
    {
        this->datos_[i] = this->datos_[i + 1];
    }
    this->tope_--;
}

void Concierto::frente() const
{
    if (vacio())
    {
        return;
    }
    cout << this->datos_[0].nombre << " " << this->datos_[0].numero << endl;
}

void Concierto::imprimir() const
{
    if (vacio())
    {
        return;
    }
    for (int i = 0; i <= this->tope_; i++)
    {
        cout << this->datos_[i].nombre << " " << this->datos_[i].numero << endl;
    }
    cout << endl;
}

void Concierto::afortunados() const
{
    if (vacio())
    {
        return;
    }
    for (int i = 0; i <= this->tope_; i++)
    {
        if (this->datos_[i].numero % 5 == 0)
        {
            cout << this->datos_[i].nombre << " " << this->datos_[i].numero << endl;
        }
    }
    cout << endl;
}

void Concierto::atras() const
{
    if (vacio())
    {
        return;
    }
    cout << this->datos_[this->tope_].nombre << " " << this->datos_[this->tope_].numero << endl;
}

int Concierto::tamano() const
{
    if (vacio())
    {
        return 0;
    }
    return this->tope_ + 1;
}

bool Concierto::vacio() const
{
    if (this->tope_ == -1)
    {
        cout << "Vacío" << endl;
        return true;
    }
    return false;
}

bool Concierto::lleno() const
{
    if (this->tope_ == this->max_ - 1)
    {
        cout << "Lleno" << endl;
        return true;
    }
    return false;
}
