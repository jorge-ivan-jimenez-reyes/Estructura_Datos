#include <iostream>

using namespace std;

struct Empleado {
    string ID;
    string Nombre;
    float Salario;
};

class Pila {
public:
    Pila();

    ~Pila();

    void empujar(Empleado);

    Empleado sacar();

    bool estaVacia();

    void imprimir();

private:
    struct Nodo {
        Empleado dato;
        Nodo* siguiente{};
    };
    Nodo* cima;
};
