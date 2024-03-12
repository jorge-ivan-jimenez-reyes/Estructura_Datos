#include "arregloordenado.h"
#include <iostream>

using namespace std;

Arreglo::Arreglo() {
}

int Arreglo::Borrar(int borrar) {
    int posic = -1;
    // verifica que el arreglo no est� vac�o
    if (ocupados == 0)
        return -1;
    // busca el elemento a borrar
    for (int i = 0; i < ocupados; i++) {
        if (enteros[i] == borrar) {
            posic = i;
            break;
        }
    }
    // informar si se encontr� el elemento a borrar
    if (posic == -1)
        return -1; // no existe, no se puede borrar
    // desplazar los elementos a partir de la posici�n encontrada
    for (int i = posic; i < ocupados - 1; i++)
        enteros[i] = enteros[i + 1];

    // colocar cero en la �ltima posici�n
    enteros[ocupados - 1] = 0;
    // actualizar el n�mero de elementos ocupados
    ocupados--;
    return 0;
}

int Arreglo::Insertar(int nuevo) {
    // verifica que haya capacidad en el arreglo
    if (ocupados >= Tam) {
        return -2;
    }
    int pos = ocupados;
    // localiza la posici�n donde se insertar� el nuevo elemento
    for (int i = 0; i < ocupados; i++) {
        if (enteros[i] > nuevo) {
            pos = i;
            break;
        }
    }

    // desplaza los valores para hacer espacio al nuevo elemento
    for (int j = ocupados - 1; j >= pos; j--)
        enteros[j + 1] = enteros[j];

    // coloca el nuevo elemento en la posici�n correcta
    enteros[pos] = nuevo;

    // incrementa el n�mero de elementos ocupados
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
