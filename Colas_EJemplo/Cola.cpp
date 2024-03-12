#include "Cola.h"

Cola::Cola()
{
	min = 0;
	max= TAM -1;
	principio =-1;
	final =-1;
	for (int i = 0; i < TAM; i ++) nums[i]= 0;
}

int Cola::Insertar(int nuevo)
{
	if (max ==TAM)
		return -1;
	final++;
	if (principio == -1)
		principio++;
	nums[final] = nuevo;


	return 0;
}

int Cola::Extraer()
{
	int extraido;
	if (principio == -1 && final == -1)
		return -1;
	if (principio > final)
		return -1;
	extraido = nums[principio];
	principio++;
	return 0;
}

void Cola::Mostrar()
{
	cout << "Cola de Enteros:"<<endl;
	if (principio == -1)
	{
		cout << "Cola vacia" << endl;
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
