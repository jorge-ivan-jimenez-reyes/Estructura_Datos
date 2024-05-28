#include <iostream>
#include "ArbolBinario.h"

using namespace std;

//En �Seguros Futuro, S.A.� deben almacenar las p�lizas de sus clientes, incluyendo nombre y n�mero de p�liza.
//Construye la aplicaci�n que maneje un �rbol Binario de B�squeda, de acuerdo al n�mero de p�liza:
//
//a. Que permita incluir los clientes, con sus dos datos, en el �rbol.
//
//b. Que recorra pos-orden el �rbol completo, mostrando todo el contenido de cada nodo.
//
//c. Que busque a un cliente, por medio de su n�mero de p�liza. Si existe, que informe su nombre y n�mero de p�liza, o bien, que indique si no existe.
//
//d. Que busque a un cliente, por medio de su n�mero de p�liza. Si existe, que informe su nombre y el nivel del nodo, o bien, que indique si no existe.

int main()
{
	Nodo* raiz = nullptr;
	int opcion, clave;
	string nombre;
	ArbolBinario ab;

	do
	{
		cout << endl << endl << "MEN� PRINCIPAL" << endl;
		cout << "1) Insertar cliente" << endl;
		cout << "2) Recorrido pos-orden" << endl;
		cout << "3) Buscar cliente" << endl;
		cout << "0) Salir" << endl;

		cout << "Opci�n: ";
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			cout << "Ingrese el ID: ";
			cin >> clave;
			cout << "Ingrese el nombre: ";
			cin >> nombre;
			ab.crear_arbol({ nombre, clave });
			raiz = ab.obtener_raiz();
			ab.insertar(raiz);
			break;

		case 2:
			raiz = ab.obtener_raiz();
			ab.recorrido_postorden(raiz);
			break;

		case 3:
			cout << "Ingrese el ID a buscar: ";
			cin >> clave;
			raiz = ab.obtener_raiz();
			ab.buscar(raiz, clave, ab);
			break;

		case 0:
			cout << "Saliendo..." << endl;
			break;

		default:
			cout << "Opci�n no v�lida" << endl;
			break;
		}
	} while (opcion != 0);

	return 0;
}
