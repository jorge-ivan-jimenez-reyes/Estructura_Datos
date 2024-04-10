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
		cabeza_ = temp; // Cambié "head_" por "cabeza_"
	}
	else
	{
		nodo* temp1 = cabeza_; // Cambié "node" por "nodo" y "head_" por "cabeza_"
		for (int i = 0; i < posicion - 1; i++) // Cambié "position" por "posicion"
		{
			temp1 = temp1->siguiente; // Cambié "next" por "siguiente"
		}
		temp->siguiente = temp1->siguiente; // Cambié "next" por "siguiente"
		temp1->siguiente = temp; // Cambié "next" por "siguiente"
	}
}

void lista::insertar_al_final(std::string x) // Cambié "insert_at_end" por "insertar_al_final"
{
	const auto temp = new nodo; // Cambié "node" por "nodo"
	temp->dato = std::move(x); // Cambié "data" por "dato"
	temp->siguiente = nullptr; // Cambié "next" por "siguiente"

	if (cabeza_ == nullptr) // Cambié "head_" por "cabeza_"
	{
		cabeza_ = temp; // Cambié "head_" por "cabeza_"
	}
	else
	{
		nodo* temp1 = cabeza_; // Cambié "node" por "nodo" y "head_" por "cabeza_"
		while (temp1->siguiente != nullptr) // Cambié "next" por "siguiente"
		{
			temp1 = temp1->siguiente; // Cambié "next" por "siguiente"
		}
		temp1->siguiente = temp; // Cambié "next" por "siguiente"
	}
}

void lista::imprimir() const // Cambié "print" por "imprimir"
{
	const nodo* temp = cabeza_; // Cambié "node" por "nodo" y "head_" por "cabeza_"
	while (temp != nullptr)
	{
		cout << temp->dato << "\t"; // Cambié "data" por "dato"
		temp = temp->siguiente; // Cambié "next" por "siguiente"
	}
	cout << endl;
}
