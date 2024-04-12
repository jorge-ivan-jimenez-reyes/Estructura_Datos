#include "Lista.h" 

#include <iostream>
#include <utility>

using namespace std;

lista::lista() 
{
	cabeza_ = nullptr; 
}

lista::~lista() = default; 

void lista::insertar_al_inicio(std::string x) 
{
	const auto temp = new nodo; 
	temp->dato = std::move(x); 
	temp->siguiente = cabeza_;
	cabeza_ = temp; // 
}

void lista::insertar_en_posicion(string x, const int posicion) 
{
	const auto temp = new nodo;
	temp->dato = std::move(x); 
	temp->siguiente = nullptr;

	if (cabeza_ == nullptr) 
	{
		cabeza_ = temp; 
	}
	else
	{
		nodo* temp1 = cabeza_;
		for (int i = 0; i < posicion - 1; i++) 
		{
			temp1 = temp1->siguiente; 
		}
		temp->siguiente = temp1->siguiente;
		temp1->siguiente = temp;
	}
}

void lista::insertar_al_final(std::string x) 
{
	const auto temp = new nodo;
	temp->dato = std::move(x); 
	temp->siguiente = nullptr; 

	if (cabeza_ == nullptr) 
	{
		cabeza_ = temp; 
	}
	else
	{
		nodo* temp1 = cabeza_;
		while (temp1->siguiente != nullptr) 
		{
			temp1 = temp1->siguiente; 
		}
		temp1->siguiente = temp; 
	}
}

void lista::imprimir() const
{
	const nodo* temp = cabeza_; 
	while (temp != nullptr)
	{
		cout << temp->dato << "\t";
		temp = temp->siguiente; 
	}
	cout << endl;
}
