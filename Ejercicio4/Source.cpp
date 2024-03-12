#include "Registro.h"

int main() {
    Registro miTienda;
    miTienda.Mostrar();
    cout << endl;
    miTienda.Poblar();
    cout << endl;
    miTienda.Ordenar();
    miTienda.Mostrar();

    return 0;
}
