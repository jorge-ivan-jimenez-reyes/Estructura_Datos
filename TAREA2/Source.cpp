#include "tarea2.h"

int main() {
    setlocale(LC_ALL, "");

    Empresa Servicios;
    int opcion;
    Empleado persona;
    std::string aBorrar;

    bool respuesta;
    bool ordenado = false;

    do {
        std::cout << "\n 1 Insertar   2 Borrar   3 Ordenar   4 Mostrar   5 Salir: ";
        std::cin >> opcion;
        switch (opcion) {
        case 1:
            if (ordenado) {
                std::cout << "\n\tNombre: ";
                std::cin >> persona.nom;
                std::cout << "\tEstatura en cms: ";
                std::cin >> persona.esta;
                std::cout << "\tSueldo: ";
                std::cin >> persona.sdo;

                respuesta = Servicios.Insertar(persona);
            }
            else {
                std::cout << "\n\t%AVISO. Es necesario ordenar previamente el arreglo" << std::endl;
                break;
            }
            if (respuesta)
                std::cout << "\n\tOK. Se insert� la persona" << std::endl;
            else
                std::cout << "\n\t%ERROR, arreglo lleno. NO se insert� la persona" << std::endl;
            break;
        case 2:
            std::cout << "\n\tNombre que borrar�s: ";
            std::cin >> aBorrar;
            respuesta = Servicios.Borrar(aBorrar);
            if (respuesta)
                std::cout << "\n\tOK. Se borr� la persona" << std::endl;
            else
                std::cout << "\n\t%ERROR, no se encontr� la persona. NO se borr�" << std::endl;
            break;
        case 3:
            Servicios.Ordenar();
            std::cout << "\n\tOK. Se orden� el arreglo" << std::endl;
            ordenado = true;
            break;
        case 4:
            Servicios.Mostrar();
            break;
        case 5:
            std::cout << "\n\n\t\t\tFINAL DE LA APLICACI�N\n\n" << std::endl;
            break;
        default:
            std::cout << "\n\tERROR, opci�n Inv�lida" << std::endl;
            break;
        }
    } while (opcion != 5);

    return 0;
}
