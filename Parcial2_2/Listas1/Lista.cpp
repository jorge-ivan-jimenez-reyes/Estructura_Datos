#include "Lista.h"

Lista::Lista()
{
	cabecera = final = nodo = NULL;
}

void Lista::InsertarInicio(string nueva)
{
	nodo = new Palabra;
	nodo->pal = nueva;
	nodo->sig = cabecera;
	cabecera = nodo;

}

int Lista::InsertarInter(string nueva, string)
{
	return 0;
}

int Lista::InsertarFinal(string nueva)
{
	return 0;
}

void Lista::Mostrar()
{
	cout << "Lista de palabras" << endl;
	if (cabecera == NULL)
	{
		cout << "Lista vacia" << endl;
		return;
	}
		nodo = cabecera;
		while (nodo != NULL)
		{
			cout << nodo->pal;
			if (nodo == cabecera) cout  
			nodo = nodo->sig;
		}
	}
}

