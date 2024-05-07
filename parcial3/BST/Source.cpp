#include "BST.h"
#include <iostream>

int main() {
    BST biblioteca;

    biblioteca.insert(Libro(1, "Don Quijote", "Miguel de Cervantes"));
    biblioteca.insert(Libro(2, "Cien años de soledad", "Gabriel García Márquez"));
    biblioteca.insert(Libro(3, "La sombra del viento", "Carlos Ruiz Zafón"));

    biblioteca.printInOrder();

    if (biblioteca.search(2)) {
        std::cout << "Libro encontrado: Cien años de soledad" << std::endl;
    }

    biblioteca.remove(2);
    biblioteca.printInOrder(); 

    return 0;
}
