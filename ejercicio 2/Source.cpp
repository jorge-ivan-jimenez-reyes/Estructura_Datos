#pragma once
#include "arregloordenado.h"
#include <iostream>

int main (){
setlocale(LC_ALL, "");
Arreglo numeros;
int aInsertar, retorno, aBorrar, opc;

do {

	cout << "1. Insertar" << endl;
	cout << "2. Borrar" << endl;
	cout << "3. Mostrar" << endl;
	cout << "4. Salir" << endl;
	cout << "Ingrese una opcion: ";
	cin >> opc;
	switch (opc) {
	case 1:
		cout << "Ingrese un numero: ";
		cin >> aInsertar;
		retorno = numeros.Insertar(aInsertar);
		if (retorno == 0)
			cout << "El numero ya existe en el arreglo" << endl;
		else
			cout << "El numero fue insertado" << endl;
		break;
	case 2:
		cout << "Ingrese un numero: ";
		cin >> aBorrar;
		retorno = numeros.Borrar(aBorrar);
		if (retorno == 0)
			cout << "El numero fue borrado" << endl;
		else
			cout << "El numero no existe en el arreglo" << endl;
		break;
	case 3:
		numeros.Mostrar();
		break;

	case 4:
			cout << "Saliendo..." << endl;
			break;
		default:
			cout << "Opcion no valida" << endl;
	}
} while (opc != 4);

