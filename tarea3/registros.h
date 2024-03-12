
#include <iostream>
#include <string>

using namespace std;

struct Empleado {
    string nombre;
    int edad_laboral;
    int piezas[3];
};

class Fabrica {
public:
    Fabrica();

    ~Fabrica();

    void Mostrar();

    void Ordenar();

    void Registrar();

private:
    Empleado* empleados;
    int tamaño{};
};

