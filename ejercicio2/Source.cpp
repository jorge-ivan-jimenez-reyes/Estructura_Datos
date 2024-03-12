#include <iostream>
#include "Ejercicio1.h"
#include <iostream>

void Operaciones::sumarEnteros() {
    int numero;
    int suma = 0;
    int cantidadNumeros = 0;

    std::cout << "Parte 1: Ingrese números enteros (ingrese 0 para finalizar):" << std::endl;

    do {
        std::cout << "Ingrese un número: ";
        std::cin >> numero;

        if (numero != 0) {
            suma += numero;
            cantidadNumeros++;
        }

    } while (numero != 0);

    std::cout << "Ha ingresado " << cantidadNumeros << " números, y la suma es: " << suma << std::endl;
}

void Operaciones::contarParesImpares() {
    int numero;
    int cantidadPares = 0;
    int sumaPares = 0;
    int cantidadImpares = 0;
    int sumaImpares = 0;

    std::cout << "\nParte 2: Ingrese 9 números enteros:" << std::endl;

    for (int i = 0; i < 9; ++i) {
        std::cout << "Ingrese un número: ";
        std::cin >> numero;

        if (esPar(numero)) {
            cantidadPares++;
            sumaPares += numero;
        }
        else {
            cantidadImpares++;
            sumaImpares += numero;
        }
    }

    std::cout << "De los 9 números, " << cantidadPares << " son pares y suman: " << sumaPares << std::endl;
    std::cout << "De los 9 números, " << cantidadImpares << " son impares y suman: " << sumaImpares << std::endl;
}

bool Operaciones::esPar(int numero) {
    return numero % 2 == 0;
}


