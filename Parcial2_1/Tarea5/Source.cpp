//En el Foro Sol se llevar� a cabo el concierto de Bad Bunny cantando con la Banda Lim�n y Taylor Swift.
//Los organizadores han decidido agradecer la preferencia del p�blico, regalando un vale del 50 % de descuento para el siguiente concierto, a los compradores afortunados.
//Te han contratado para desarrollar una aplicaci�n que maneje de forma est�tica la cola para comprar boletos.
//Durante todo el d�a estar�n ingresando las solicitudes de boletos y al terminar cada d�a, sacar�n una por una las solicitudes, en el orden en que llegaron.Todas las solicitudes que hayan llegado en una posici�n m�ltiplo de 5, ganar�n un vale de descuento.
//Adem�s de registrar las llegadas de solicitudes y extraer solicitudes para el premio, la aplicaci�n debe mostrar los datos de cada comprador afortunado(nombre y n�mero de boleto) y mostrar en cada momento los compradores que est�n en la fila.
//Construye la aplicaci�n de manera que ocupe un arreglo no muy grande y que no desperdicie los elementos que se desocupan al extraer solicitudes.
#include <iostream>
#include "Concierto.h"
using namespace std;

int main()
{
    Concierto q;
    int choice, contador = 1;

    do
    {
        comprador b;
        cout << endl << endl << "------------- MEN� PRINCIPAL -------------" << endl;
        cout << "1. Nuevo boleto " << endl;
        cout << "2. Extraer " << endl;
        cout << "3. Frente " << endl;
        cout << "4. Atr�s " << endl;
        cout << "5. Tama�o " << endl;
        cout << "6. Imprimir " << endl;
        cout << "7. Ver afortunados seg�n la cola actual " << endl;
        cout << "0. Salir " << endl;

        cout << "Opci�n: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Nombre: ";
            cin >> b.nombre;
            cout << "N�mero: " << contador << endl;
            b.numero = contador;
            q.encolar(b);
            contador++;
            break;
        case 2:
            q.desencolar();
            break;
        case 3:
            q.frente();
            break;
        case 4:
            q.atras();
            break;
        case 5:
            cout << "Tama�o: " << q.tamano();
            break;
        case 6:
            q.imprimir();
            break;
        case 7:
            q.afortunados();
            break;
        case 0:
            cout << "Saliendo......" << endl;
            break;
        }
    } while (choice != 0);
}