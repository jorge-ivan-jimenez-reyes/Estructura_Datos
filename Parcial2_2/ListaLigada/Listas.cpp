#include "Listas.h"
#include <iostream>

using namespace std;

list::list()
{
    head_ = nullptr; 
}

list::~list() = default; 

void list::insertar(const int x)
{
    auto nuevo_nodo = new node; 
    nuevo_nodo->data = x; 
    nuevo_nodo->next = nullptr;

    if (head_ == nullptr) 
    {
        head_ = nuevo_nodo;
    }
    else
    {
        node* actual = head_; 
        node* anterior = nullptr; 

        while (actual != nullptr && actual->data < x) 
        {
            anterior = actual;
            actual = actual->next;
        }

        if (anterior == nullptr) 
        {
            nuevo_nodo->next = head_;
            head_ = nuevo_nodo;
        }
        else 
        {
            anterior->next = nuevo_nodo;
            nuevo_nodo->next = actual;
        }
    }
}

int list::extraer(const int x)
{
    node* actual = head_; 
    node* anterior = nullptr; 

    while (actual != nullptr && actual->data != x) 
    {
        anterior = actual;
        actual = actual->next;
    }

    if (actual == nullptr) 
    {
        cout << "Elemento no encontrado" << endl;
        return -1; 
    }
    if (anterior == nullptr) 
    {
        head_ = head_->next; 
    }
    else 
    {
        anterior->next = actual->next;
    }

    delete actual; 
    return x; 
}

void list::mostrar() const
{
    const node* temp = head_; 
    while (temp != nullptr) 
    {
        cout << temp->data << "\t"; 
        temp = temp->next;
    }
    cout << endl; 
}
