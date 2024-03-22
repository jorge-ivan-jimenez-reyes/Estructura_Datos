#include "colas.h"
#include <string>

using namespace std;

/* En el consulado de M�xico en Honduras se necesita una aplicaci�n orientada a objetos en C++ que permita
manejar la fila de solicitantes que solicitan asilo en M�xico.  Para cada solicitante se necesita registrar su
nombre y los 3 d�gitos de su pasaporte. */

// Construye la aplicaci�n con la siguiente funcionalidad:
// a. Ingresar un solicitante a la fila
// b. Pasar a entrevista (extraer) al solicitante siguiente, mostrando sus datos.
// c. Preguntar al usuario si fue aceptado o no el solicitante que pas� a entrevista. Si no fue aceptado 
// debe insertarse, con todos sus datos, en una fila de rechazados
// d. Mostrar todos los datos de las solicitantes en la fila de solicitantes y de las solicitantes en la fila de 
// rechazados, haciendo notar el inicio y el final de cada fila

int main()
{
    colas solicitantes, rechazados;
    int opcion = 0, digitos;
    string nombre;
    solicitante p, entrevistado;

    do
    {
        cout << endl << " MEN� PRINCIPAL " << endl;
        cout << "1. Agregar solicitante a la fila" << endl;
        cout << "2. Pasar a entrevista" << endl;
        cout << "3. Mostrar" << endl;
        cout << "4. Tama�o" << endl;
        cout << "5. Mostrar Cabeza" << endl;
        cout << "6. Mostrar Cola" << endl;
        cout << "0. Salir" << endl;

        cout << "Ingresa tu opci�n: ";
        cin >> opcion;
        cin.ignore();
        cout << endl;

        switch (opcion)
        {
        case 1:
            cout << endl;
            cout << "Ingresa el nombre: ";
            getline(cin, nombre);
            cout << "Ingresa los d�gitos del pasaporte: ";
            cin >> digitos;
            p = solicitante(nombre, digitos);
            solicitantes.agregar_solicitante_en_linea(p);
            cout << "Agregado a la fila" << endl;
            break;
        case 2:
            cout << endl;
            entrevistado = solicitantes.pasar_a_entrevista();
            entrevistado.detalles();
            if (!entrevistado.nombre.empty() && entrevistado.digitos != 0) {
                int aceptado;
                cout << "�Fue aceptado el solicitante?: " << endl << "1) ACEPTADO\t2) RECHAZADO: ";
                cin >> aceptado;
                if (aceptado == 2) rechazados.agregar_solicitante_en_linea(entrevistado);
            }
            break;
        case 3:
            cout << endl;
            cout << "SOLICITANTES: " << endl;
            solicitantes.mostrar();
            cout << endl;
            cout << "RECHAZADOS: " << endl;
            rechazados.mostrar();
            cout << endl;
            break;
        case 4:
            cout << endl;
            cout << "Tama�o de SOLICITANTES: " << solicitantes.tamano() << endl;
            cout << "Tama�o de RECHAZADOS: " << rechazados.tamano() << endl;
            cout << endl;
            break;
        case 5:
            cout << endl;
            cout << "Cabeza de SOLICITANTES: " << endl;
            solicitantes.mostrar_cabeza();
            cout << "Cabeza de RECHAZADOS: " << endl;
            rechazados.mostrar_cabeza();
            cout << endl;
            break;
        case 6:
            cout << endl;
            cout << "Cola de SOLICITANTES: " << endl;
            solicitantes.mostrar_cola();
            cout << "Cola de RECHAZADOS: " << endl;
            rechazados.mostrar_cola();
            cout << endl;
            break;
        case 0:
            cout << endl;
            cout << "�Adi�s!" << endl;
            break;
        default:
            cout << "Opci�n inv�lida" << endl;
        }
    } while (opcion != 0);
}
