#include <iostream>
#include <vector>
#include <string>
#include "ordenado1.h"

int main() {
    // Parte 1  
    std::vector<int> numeros = { 5, 3, 8, 1, 9 };
    Ordenador ordenador;
    std::cout << "Arreglo original de enteros: ";
    ordenador.mostrarEnteros(numeros);
    ordenador.ordenarEnteros(numeros);
    std::cout << "Arreglo ordenado de enteros: ";
    ordenador.mostrarEnteros(numeros);

    // Parte 2
    std::vector<std::string> palabras = { "perro", "gato", "elefante", "raton" };
    std::cout << "Arreglo original de strings: ";
    ordenador.mostrarStrings(palabras);
    ordenador.ordenarStrings(palabras);
    std::cout << "Arreglo ordenado de strings: ";
    ordenador.mostrarStrings(palabras);

    return 0;
}
