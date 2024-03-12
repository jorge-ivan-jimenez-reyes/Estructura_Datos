
#include "Apuntador.h"

Apuntador::Apuntador()
{

}
void Apuntador::Ejemplo_1()
{
	int var1;

	int* ap_var1;

	cout << "Dime un valor entero: ";
	cin >> var1;

	ap_var1 = &var1;

	/* Primera opción: sin apuntadores */

	cout << endl << "== Primera Opcion ==" << endl;
	cout << "\t El nombre de la variable es: var1" << endl;
	cout << "\t El valor de la variable es: " << var1 << endl;
	cout << "\t La direccion de la variable es: " << &var1
		<< endl << endl << endl;


	/* Segunda opción: empleando apuntadores */

	cout << endl << "\n== Segunda Opcion ==" << endl;
	cout << "\t El nombre de la variable es: var1" << endl;
	cout << "\t El valor de la variable es: " << *ap_var1 << endl;
	cout << "\t La direccion de la variable es: " << ap_var1
		<< endl << endl << endl;


}

void Apuntador::Ejemplo_2()
{
	/***  Arreglo de enteros manejado como apuntador a entero ***/

	int lista[6] = { 10, 20, 30 };

	cout << "lista: " << lista << endl;  //direc.del primer elemento de lista

	cout << " lista + 0: " << (lista + 0) << endl;

	cout << " lista + 1: " << (lista + 1) << endl;

	cout << " lista + 4: " << (lista + 4) << endl; //direc.del quinto elemento de lista

	cout << "lista[0]  o  *lista: " << *lista << endl; //valor del primer elemento

	cout << "lista[5]  o  *lista + 5: " << *(lista + 5) << endl;



}

void Apuntador::Ejemplo_3()
{
	/***  Apuntador a un arreglo de enteros  ***/

	int lista[] = { 10, 20, 30 };

	int* plista = new int[3];  // (*plista) [  ] es un apuntador a un arreglo

	plista = lista;

	cout << "plista: " << plista << endl;  //direc.del primer elemento de lista

	cout << "plista + 0: " << (plista + 0) << endl; //direc.del primer elemento de lista

	cout << "plista + 1: " << (plista + 1) << endl;

	cout << "plista + 2: " << (plista + 2) << endl; //direc.del tercer elemento de lista

	cout << "*plista: " << *plista << endl; //valor del primer elemento

	cout << "*plista + 2: " << *(plista + 2) << endl; //valor del tercer elemento

}

void Apuntador::Ejemplo_4()
{
	//  Asigna memoria dinámicamente a un arreglo

	int* p;		// Declara apuntador a int
	int tamano;

	cout << "¿Cuántos elementos necesitas?: ";
	cin >> tamano;

	p = new int[tamano];	// Asigna 'tamano' localidades de memoria para int, apuntadas por p

	*(p + 0) = 1;	// Inicializa elemento por elemento, ya que no es posible
	*(p + 1) = 3;	//            hacerlo como con los arreglos estáticos
	*(p + 2) = 5;
	*(p + 3) = 7;
	*(p + 4) = 9;

	cout << p << endl;
	for (int i = 0; i < tamano; i++)	cout << *(p + i) << "\t";
	cout << endl;

	for (int i = 0; i < tamano; i++)	cout << p[i] << "\t";
	cout << endl;

	delete p;		// Libera las 'tamano' localidades de memoria apuntadas por p

	cout << p << endl;
	for (int i = 0; i < tamano; i++)	cout << *(p + i) << "\t";
	cout << endl;
}
