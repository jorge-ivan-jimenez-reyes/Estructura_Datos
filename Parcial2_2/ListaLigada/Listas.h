#pragma once

class list
{
public:
    list(); // Constructor
    ~list(); // Destructor

    void insertar(int); // Inserta un elemento en la lista manteniendo el orden ascendente
    int extraer(int); // Extrae un elemento de la lista y retorna su valor
    void mostrar() const; // Muestra todos los elementos de la lista

private:
    struct node // Estructura para los nodos de la lista
    {
        int data{}; // Datos almacenados en el nodo
        node* next{}; // Puntero al siguiente nodo
    };

    node* head_; // Puntero al primer nodo de la lista
};
