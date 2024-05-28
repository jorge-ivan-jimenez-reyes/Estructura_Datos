#include <iostream>
#include "BinaryTree.h"

using namespace std;

//En �Seguros Futuro, S.A.� deben almacenar las p�lizas de sus clientes, incluyendo nombre y  n�mero de p�liza.Construye la aplicaci�n que 
//  un �rbol Binario de B�squeda, de acuerdo al n�mero de p�liza :
//
//a.Que permita incluir los clientes, con sus dos datos, en el �rbol.
//
//b.Que recorra pos - orden el �rbol completo, mostrando todo el contenido de cada nodo.
//
//c.Que busque a un cliente, por medio de su n�mero de p�liza.Si existe, que informe su nombre y n�mero de p�liza, o bien, que indique si no existe.
//
//d.Que busque a un cliente, por medio de su n�mero de p�liza.Si existe, que informe su nombre y el nivel del nodo, o bien, que indique si no existe.

int main()
{

	Node* root = nullptr;
	int choice, key;
	string name;
	BinaryTree bt;

	do
	{
		cout << endl << endl << "MAIN MENU" << endl;
		cout << "1) Insert customer" << endl;
		cout << "2) Post-order" << endl;
		cout << "3) Search Customer" << endl;

		cout << "0) Exit" << endl;

		cout << "Choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Enter ID: ";
			cin >> key;
			cout << "Enter name: ";
			cin >> name;
			bt.create_tree({ name, key });
			root = bt.get_root();
			bt.insert(root);
			break;

		case 2:
			root = bt.get_root();
			bt.postorder(root);
			break;

		case 3:
			cout << "Enter ID to search: ";
			cin >> key;
			root = bt.get_root();
			bt.search(root, key, bt);
			break;

		case 0:
			cout << "Exiting..." << endl;
			break;

		default:
			cout << "Invalid choice" << endl;
			break;
		}
	} while (choice != 0);

	return 0;
}

