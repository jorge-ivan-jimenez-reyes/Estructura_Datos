#include "BST.h"
#include <iostream>

int main() {
    BST biblioteca;

    biblioteca.insert(Libro(1, "Don Quijote", "Miguel de Cervantes"));
    biblioteca.insert(Libro(2, "Cien a�os de soledad", "Gabriel Garc�a M�rquez"));
    biblioteca.insert(Libro(3, "La sombra del viento", "Carlos Ruiz Zaf�n"));

    biblioteca.printInOrder();

    if (biblioteca.search(2)) {
        std::cout << "Libro encontrado: Cien a�os de soledad" << std::endl;
    }

    biblioteca.remove(2);
    biblioteca.printInOrder(); 

    return 0;
}
