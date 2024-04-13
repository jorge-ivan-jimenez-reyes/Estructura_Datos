#include "Listas.h"
#include <iostream>

using namespace std;

list::list()
{
    head_ = nullptr; // Inicializa la cabeza de la lista como nula
}

list::~list() = default; // Destructor por defecto

void list::insertar(const int x)
{
    auto nuevo_nodo = new node; // Crea un nuevo nodo
    nuevo_nodo->data = x; // Asigna el dato al nodo
    nuevo_nodo->next = nullptr; // Inicialmente, el siguiente nodo es nulo

    if (head_ == nullptr) // Si la lista está vacía, el nuevo nodo será la cabeza
    {
        head_ = nuevo_nodo;
    }
    else
    {
        node* actual = head_; // Empezar desde la cabeza de la lista
        node* anterior = nullptr; // No hay nodo anterior al principio

        while (actual != nullptr && actual->data < x) // Buscar la posición correcta para el nuevo nodo
        {
            anterior = actual;
            actual = actual->next;
        }

        if (anterior == nullptr) // Insertar al inicio si aún es el mayor
        {
            nuevo_nodo->next = head_;
            head_ = nuevo_nodo;
        }
        else // Insertar entre 'anterior' y 'actual'
        {
            anterior->next = nuevo_nodo;
            nuevo_nodo->next = actual;
        }
    }
}

int list::extraer(const int x)
{
    node* actual = head_; // Comenzar desde la cabeza
    node* anterior = nullptr; // No hay nodo anterior al principio

    while (actual != nullptr && actual->data != x) // Buscar el nodo con el dato 'x'
    {
        anterior = actual;
        actual = actual->next;
    }

    if (actual == nullptr) // Si no se encuentra el elemento
    {
        cout << "Elemento no encontrado" << endl;
        return -1; // Retornar -1 como indicativo de fallo
    }
    if (anterior == nullptr) // Si el elemento está en la cabeza
    {
        head_ = head_->next; // Mover la cabeza al siguiente nodo
    }
    else // Eliminar el nodo 'actual'
    {
        anterior->next = actual->next;
    }

    delete actual; // Liberar la memoria del nodo eliminado
    return x; // Retornar el valor extraído
}

void list::mostrar() const
{
    const node* temp = head_; // Comenzar desde la cabeza
    while (temp != nullptr) // Recorrer todos los nodos de la lista
    {
        cout << temp->data << "\t"; // Mostrar el dato de cada nodo
        temp = temp->next;
    }
    cout << endl; // Nueva línea al final de mostrar la lista
}
