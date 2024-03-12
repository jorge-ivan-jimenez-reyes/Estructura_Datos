#include "Cola.h"
int main()
{
	Cola enteros;
	int opc, nuevoEnt;

	setlocale(LC_ALL, "");
	do
	{
		cout << "1.- Insertar" << endl;
		cout << "2.- Extraer" << endl;
		cout << "3.- Mostrar" << endl;
		cout << "4.- Salir" << endl;
		cout << "Opcion: ";
		cin >> opc;
		switch (opc)
		{
		case 1:
			cout << "Dame el nuevo entero: ";
			cin >> nuevoEnt;

			resultado =enteros.Insertar(nuevoEnt);
			break;
		case 2:
			resultado =enteros.Extraer();
			if resultado == -1)
			cout << "Cola vacia" << endl;
			else
				cout << "Entero extraido" << endl;

			break;
		case 3:
			enteros.Mostrar();
			break;
		}
	} while (opc != 4);

}