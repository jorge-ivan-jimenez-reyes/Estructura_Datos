#include "Cola.h"

int main()
{
	Cola enteros;
	int opc, nuevoEnt, resultado;

	setlocale(LC_ALL, "");
	do
	{
		cout << "\n1 Insertar  2 Extraer  3 Mostrar  4 Salir: ";
		cin >> opc;

		switch (opc)
		{
		case 1:
			cout << "\tentero que insertarás: ";
			cin >> nuevoEnt;
			resultado = enteros.Insertar(nuevoEnt);
			if (resultado == -1)
				cout << "\n\tERROR, Cola llena. NO se insertó" << endl;
			else
				cout << "\n\tOK. Se insertó correctamente" << endl;
			break;
		case 2:
			resultado = enteros.Extraer();
			if (resultado == -1)
				cout << "\n\tCola vacía. NO se extrajo nada" << endl;
			else
				cout << "\n\tSe extrajo " << resultado << endl;
			break;
		case 3:
			enteros.Mostrar();
			break;
		case 4:
			break;
		default:
			break;
		}
	} while (opc != 4);

}