#include "ejercicio1.h"
#include <iostream>

Entero::Entero()
{};
Entero::~Entero()
{};

void Entero::sumar()
{
	int num, suma = 0, cuenta = 0;
	do
	{
		cout << "Ingrese un numero:";
		cin >> num;
		if (num != 0);
		{
			suma += num;
			cuenta++;
		}
	} while (num!=0);

}