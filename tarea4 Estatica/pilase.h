#include <iostream>

#define tamaño 4

using namespace std;

class Pila {
public:
    Pila();

    ~Pila();

    void empujar(int);

    int sacar();

    void mostrar();

    bool estaVacia();

private:
    int minimo, maximo, contador;
    int* contenido;
};
