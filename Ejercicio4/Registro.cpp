#include "Registro.h"

Registro::Registro() {
    // Constructor para dar valores iniciales
    ocupados = 0;
}

void Registro::Mostrar() {
    cout << "\nSUCURSALES:" << endl;
    for (int i = 0; i < ocupados; i++)
        cout << "\t" << sucs[i].num
        << "\t" << sucs[i].nomGte
        << "\t" << sucs[i].ventas[0]
        << "\t" << sucs[i].ventas[1] << endl;

    cout << "\n\t--- fin del arreglo ---" << endl;
}

int Registro::Poblar() {
    int nums = 0; // Inicializa la variable nums
    do {
        if (ocupados >= TAM)
            return -1;

        cout << "\tNumero sucursal 999 para terminar:";
        cin >> nums;

        if (nums == 999)
            break; // terminar registro

        sucs[ocupados].num = nums;
        cin.ignore();

        cout << "\tNombre del Gerente:";
        getline(cin, sucs[ocupados].nomGte);
        cout << "\tVentas mes anterior:";
        cin >> sucs[ocupados].ventas[1];

        ocupados++;

    } while (nums != 999);

    return 0; // Indica que el proceso de población terminó correctamente
}

void Registro::Ordenar() {
    for (int i = 0; i < ocupados - 1; ++i) {
        for (int j = 0; j < ocupados - i - 1; ++j) {
            if (sucs[j].num > sucs[j + 1].num) {
                intercambiar(sucs[j], sucs[j + 1]);
            }
        }
    }
}

void Registro::intercambiar(Sucursal& a, Sucursal& b) {
    Sucursal temp = a;
    a = b;
    b = temp;
}
