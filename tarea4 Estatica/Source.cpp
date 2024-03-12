#include "pilase.h"

int main() {
    // Programar con C++ y Orientaci�n a Objetos la aplicaci�n que maneje DOS pilas de enteros,
    // en su implementaci�n est�tica, la pila �original� y la pila �depurada�.
    // En la pila �original� podr�s ir insertando (push) y extrayendo (pop) enteros, a solicitud del usuario.
    // Cuando el usuario elija la opci�n �depurar�, debes solicitarle un entero �menor� y trasladar los enteros de la
    // pila �original� (operaci�n pop) a la pila �depurada� (operaci�n push), descartando los enteros menores a �menor�.
    // En todo momento, habr� opci�n de mostrar ambas pilas.

    int opcion;
    Pila original;
    Pila depurada;

    std::cout << "Iniciando" << std::endl;

    do {
        std::cout << std::endl;
        std::cout << "MEN� PRINCIPAL" << std::endl;
        std::cout << "1. Empujar" << std::endl;
        std::cout << "2. Sacar" << std::endl;
        std::cout << "3. Depurar" << std::endl;
        std::cout << "4. Mostrar ambas pilas" << std::endl;
        std::cout << "0. Salir" << std::endl;

        std::cout << "Opci�n: ";
        std::cin >> opcion;
        std::cout << std::endl;

        switch (opcion) {
        case 1:
            std::cout << "Empujando..." << std::endl;
            std::cout << "Ingresa un n�mero: ";
            int numero;
            std::cin >> numero;
            original.empujar(numero);
            break;

        case 2:
            std::cout << "Sacando..." << std::endl;
            original.sacar();
            break;

        case 3:
            std::cout << "Depurando..." << std::endl;
            std::cout << "Ingresa un n�mero: ";
            int limite;
            std::cin >> limite;
            while (!original.estaVacia()) {
                int sacado = original.sacar();
                if (sacado > limite) depurada.empujar(sacado);
            }
            std::cout << "�Depurado!" << std::endl;
            break;

        case 4:
            std::cout << "Mostrando..." << std::endl;
            std::cout << "Pila original: ";
            original.mostrar();
            std::cout << "Pila depurada: ";
            depurada.mostrar();
            std::cout << "�Mostrado!" << std::endl;
            break;

        case 0:
            std::cout << "Saliendo" << std::endl;
            break;

        default:
            std::cout << "Opci�n inv�lida" << std::endl;
        }
    } while (opcion != 0);

    return 0;
}
