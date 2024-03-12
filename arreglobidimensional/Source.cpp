#include <iostream>
#include "arreglobidimensional.h"


int main() {
    std::cout << "Iniciando programa" << std::endl;
    int opt;

    std::cout << "Crear matriz" << std::endl;
    std::cout << "Filas: ";
    int filas;
    std::cin >> filas;
    std::cout << "Columnas: ";
    int columnas;
    std::cin >> columnas;
    DosDimArr matriz(filas, columnas);

    do {
        std::cout << "-------MENÚ PRINCIPAL--------" << std::endl;
        std::cout << "1. Establecer Nombre" << std::endl; // Leer un nombre completo (getline) y crear una matriz bidimensional dinámica de enteros
        std::cout << "2. Rellenar elementos" << std::endl; // Agregar elementos a la matriz
        std::cout << "3. Mostrar matriz" << std::endl; // Imprimir la matriz
        std::cout << "4. Ordenar líneas de la matriz" << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cout << "-------------------------" << std::endl;
        std::cout << "Opción: ";
        std::cin >> opt;

        switch (opt) {
        case 1:
            std::cout << "---Establecer Nombre---" << std::endl;
            matriz.name();
            break;
        case 2:
            std::cout << "---Rellenar elementos---" << std::endl;
            matriz.llenar();
            break;
        case 3:
            std::cout << "---Mostrar matriz---" << std::endl;
            matriz.mostrar();
            break;
        case 4:
            std::cout << "---Ordenando---" << std::endl;
            matriz.ordenar();
            matriz.mostrar();
            break;
        case 0:
            std::cout << "Saliendo del programa" << std::endl;
            break;
        default:
            std::cout << "Opción inválida" << std::endl;
            break;
        }
    } while (opt != 0);
    return 0;
}
