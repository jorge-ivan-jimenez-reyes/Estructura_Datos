#pragma once
#include <string>
#include <iostream>

using namespace std;

class ListaCircularEnlazada
{
public:
    ListaCircularEnlazada(); // Constructor
    ~ListaCircularEnlazada(); // Destructor

    void mostrarTodaLaLista() const; // Mostrar todos los elementos de la lista

    void insertarEnCualquierPosicion(const string&, const string&); // Insertar un elemento en cualquier posici�n dada una referencia

    void eliminarElemento(const string&); // Eliminar un elemento espec�fico

    bool buscarPalabra(const string&); // Buscar una palabra en la lista
    static void buscado(bool); // Mostrar si una palabra fue encontrada o no

    bool estaVacia() const; // Verificar si la lista est� vac�a
    int tamano() const; // Obtener el tama�o de la lista

private:
    struct nodo // Estructura de un nodo en la lista circular
    {
        string dato{}; // Dato almacenado en el nodo
        nodo* siguiente{}; // Puntero al siguiente nodo
    };

    nodo* cabeza_, * cola_, * revisado_; // Punteros para controlar la lista
};
