#include <iostream>
#include "ArbolBinario.h"

using namespace std;

//En “Seguros Futuro, S.A.” deben almacenar las pólizas de sus clientes, incluyendo nombre y número de póliza.
//Construye la aplicación que maneje un Árbol Binario de Búsqueda, de acuerdo al número de póliza:
//
//a. Que permita incluir los clientes, con sus dos datos, en el árbol.
//
//b. Que recorra pos-orden el árbol completo, mostrando todo el contenido de cada nodo.
//
//c. Que busque a un cliente, por medio de su número de póliza. Si existe, que informe su nombre y número de póliza, o bien, que indique si no existe.
//
//d. Que busque a un cliente, por medio de su número de póliza. Si existe, que informe su nombre y el nivel del nodo, o bien, que indique si no existe.

int main()
{
	Nodo* raiz = nullptr;
	int opcion, clave;
	string nombre;
	ArbolBinario ab;

	do
	{
		cout << endl << endl << "MENÚ PRINCIPAL" << endl;
		cout << "1) Insertar cliente" << endl;
		cout << "2) Recorrido pos-orden" << endl;
		cout << "3) Buscar cliente" << endl;
		cout << "0) Salir" << endl;

		cout << "Opción: ";
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
			cout << "Opción no válida" << endl;
			break;
		}
	} while (opcion != 0);

	return 0;
}
