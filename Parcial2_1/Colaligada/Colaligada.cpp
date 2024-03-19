#include "Colaligada.h"

Colaligada::Colaligada()
{
	//valores iniciales a propiedades
	inicio = final = nodo = NULL;
}

int Colaligada::Consultar()
{
	return 0;
}

int Colaligada::Extraer()
{
	return 0;
}

void Colaligada::Insertar(int nuevo)
{
	nodo = new Entero;
	nodo ->num = nuevo;
	nodo ->sig = NULL;
	if (inicio == NULL)
	
		inicio = nodo;
	if (final != NULL)
		final ->sig = nodo;
	final = nodo;
}

void Colaligada::Mostrar()
{
	cout << "\n COLA DE ENTEROS:" << endl;
	if (inicio == NULL)
	{
		cout << "\n\t Cola Vacia"<<endl;
		return;

	}
	nodo = inicio;
	while (nodo != NULL)
	{
		cout << "\t" << nodo << "\t" << nodo->num << nodo->sig;
		if (nodo == inicio) cout <<"\t<= INICIO";
		if (nodo == final) cout << "\t<= FINAL";
	}
