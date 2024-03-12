#include "Cola.h"

Cola::Cola()
{
	min = 0;
	max = TAM - 1;
	principio = -1;
	final = -1;
	for (int i = 0; i < TAM; i++) nums[i] = 0;
}

int Cola::Insertar(int nuevo)
{
	/* Paso 1: Revisar capacidad del arreglo */
	if (final == max)	// Fila llena
		return -1;
	/* Paso 2: Incrementar Final */
	final++;
	if (principio == -1) // Incrementa tambi�n 'principio' olamente en la primera inserci�n
		principio++;
	/* Paso 3: Colocar informaci�n en 'final' */
	nums[final] = nuevo;

	return 0;
}

int Cola::Extraer()
{
	int extraido;

	/* Paso 1: �Hay informaci�n en la cola? */
	if (principio == -1 && final == -1)	// VCola vac�a
		return -1;
	if (principio > final)	// Cola vac�a
		return -1;
	/* Paso 2: Extraer informaci�n de 'principio' */
	extraido = nums[principio];
	nums[principio] = 0;
	/* Paso 3: Incrementar 'principio' */
	principio++;

	return extraido;
}

void Cola::Mostrar()
{
	cout << "COLA DE ENTEROS:" << endl;
	if (principio == -1)
	{
		cout << "\n\tCola VAC�A" << endl;
		return;
	}
	for (int i = 0; i < TAM; i++)
	{
		cout << "\t" << nums[i];
		if (i == min) cout << "\t" << "<= Min";
		if (i == max) cout << "\t" << "<= Max";
		if (i == principio) cout << "\t" << "<= Principio";
		if (i == final) cout << "\t" << "<= Final";
		cout << endl;
	}
}