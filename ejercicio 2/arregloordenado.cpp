#include "arregloordenado.h"
#include <iostream>

using namespace std;

Arreglo::Arreglo() {
}

int Arreglo::Borrar(int borrar) {
    int posic = -1;
    // verifica que el arreglo no esté vacío
    if (ocupados == 0)
        return -1;
    // busca el elemento a borrar
    for (int i = 0; i < ocupados; i++) {
        if (enteros[i] == borrar) {
            posic = i;
            break;
        }
    }
    // informar si se encontró el elemento a borrar
    if (posic == -1)
        return -1; // no existe, no se puede borrar
    // desplazar los elementos a partir de la posición encontrada
    for (int i = posic; i < ocupados - 1; i++)
        enteros[i] = enteros[i + 1];

    // colocar cero en la última posición
    enteros[ocupados - 1] = 0;
    // actualizar el número de elementos ocupados
    ocupados--;
    return 0;
}

int Arreglo::Insertar(int nuevo) {
    // verifica que haya capacidad en el arreglo
    if (ocupados >= Tam) {
        return -2;
    }
    int pos = ocupados;
    // localiza la posición donde se insertará el nuevo elemento
    for (int i = 0; i < ocupados; i++) {
        if (enteros[i] > nuevo) {
            pos = i;
            break;
        }
    }

    // desplaza los valores para hacer espacio al nuevo elemento
    for (int j = ocupados - 1; j >= pos; j--)
        enteros[j + 1] = enteros[j];

    // coloca el nuevo elemento en la posición correcta
    enteros[pos] = nuevo;

    // incrementa el número de elementos ocupados
    ocupados++;
    return 0;
}

void Arreglo::Mostrar() {
    cout << "arreglo:";
    for (int i = 0; i < ocupados; i++) {
        cout << "\t" << enteros[i];
    }
    cout << endl << endl;
}
