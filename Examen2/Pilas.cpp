#include "Pilas.h"

pila::pila()
{
    tope_ = nullptr;
}

pila::~pila()
{
    while (tope_ != nullptr)
    {
        const nodo* temp = tope_;
        tope_ = tope_->siguiente;
        delete temp;
    }
}

void pila::empujar(colchon x) {
    const auto temp = new nodo;
    temp->datos = std::move(x);
    temp->siguiente = tope_;
    tope_ = temp;
    cout << "EMPUJADO" << endl;
}

colchon pila::sacar() {
    if (tope_ == nullptr) {
        cout << "La pila está vacía" << endl;
    }
    else {
        nodo* temp = tope_;
        tope_ = tope_->siguiente;
        colchon x = temp->datos;
        delete temp;
        cout << "SACADO" << endl;
        return x;
    }
    return {};
}

bool pila::esta_vacia() const
{
    if (tope_ == nullptr) {
        cout << "La pila está vacía" << endl;
        return true;
    }
    else {
        cout << "La pila no está vacía" << endl;
        return false;
    }
}

void pila::imprimir() const
{
    if (this->esta_vacia()) {
        return;
    }
    else {
        const nodo* temp = tope_;
        cout << "MARCA\t|TAMAÑO" << endl;
        while (temp != nullptr) {
            cout << temp->datos.marca << "\t|" << temp->datos.tamaño << endl;
            temp = temp->siguiente;
        }
        cout << endl;
    }
}

void pila::datos_tope() const
{
    if (tope_ == nullptr) {
        cout << "La pila está vacía" << endl;
    }
    else {
        cout << "MARCA\t|TAMAÑO" << endl;
        cout << tope_->datos.marca << "\t|" << tope_->datos.tamaño << endl;
    }
}
