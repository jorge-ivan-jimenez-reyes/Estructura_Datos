#pragma once
#include <iostream>
#define Tam 8
using namespace std;


class Arreglo 
{
    
public:
    Arreglo();
    int Borrar(int );
    int Insertar(int );
    void Mostrar();
   

private:
    //declaracion de arreglo de enteros
int enteros[Tam]{3,6,9,12,15,30};
//variable para controlar el numero de elementos ocupados
int ocupados = 4;
};
