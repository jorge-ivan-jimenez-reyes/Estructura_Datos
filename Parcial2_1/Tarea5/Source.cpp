//En el Foro Sol se llevará a cabo el concierto de Bad Bunny cantando con la Banda Limón y Taylor Swift.
//Los organizadores han decidido agradecer la preferencia del público, regalando un vale del 50 % de descuento para el siguiente concierto, a los compradores afortunados.
//Te han contratado para desarrollar una aplicación que maneje de forma estática la cola para comprar boletos.
//Durante todo el día estarán ingresando las solicitudes de boletos y al terminar cada día, sacarán una por una las solicitudes, en el orden en que llegaron.Todas las solicitudes que hayan llegado en una posición múltiplo de 5, ganarán un vale de descuento.
//Además de registrar las llegadas de solicitudes y extraer solicitudes para el premio, la aplicación debe mostrar los datos de cada comprador afortunado(nombre y número de boleto) y mostrar en cada momento los compradores que están en la fila.
//Construye la aplicación de manera que ocupe un arreglo no muy grande y que no desperdicie los elementos que se desocupan al extraer solicitudes.
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
        cout << endl << endl << "------------- MENÚ PRINCIPAL -------------" << endl;
        cout << "1. Nuevo boleto " << endl;
        cout << "2. Extraer " << endl;
        cout << "3. Frente " << endl;
        cout << "4. Atrás " << endl;
        cout << "5. Tamaño " << endl;
        cout << "6. Imprimir " << endl;
        cout << "7. Ver afortunados según la cola actual " << endl;
        cout << "0. Salir " << endl;

        cout << "Opción: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Nombre: ";
            cin >> b.nombre;
            cout << "Número: " << contador << endl;
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
            cout << "Tamaño: " << q.tamano();
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