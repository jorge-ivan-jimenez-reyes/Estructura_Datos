#include "ColaCircular.h"

ColaCircular::ColaCircular()
{
    min = 0;
    max = TAM - 1;
    inicio = final = -1;
    palabras = new string[TAM];
    for (int i = min; i <= max; i++)
        palabras[i] = "-";
}

int ColaCircular::Insertar(string nueva)
{
    // Paso 1: Revisar si hay capacidad
    if ((inicio == min && final == max) || ((final + 1) % TAM) == inicio)
        return -1;

    // Incrementar final
    final = (final + 1) % TAM;

    // Insertar en final
    palabras[final] = nueva;

    // Si es el primer elemento, actualizar inicio
    if (inicio == -1)
        inicio = final;

    return 0;
}

string ColaCircular::Extraer()
{
    if (inicio == -1)
        return "";

    string palabraExtraida = palabras[inicio];


    // Si solo hay un elemento, reiniciar la cola
    if (inicio == final)
        inicio = final = -1;
    else
        // Avanzar el inicio
        inicio = (inicio + 1) % TAM;

    return palabraExtraida;
}

void ColaCircular::Mostrar()
{
    cout << "\n PALABRAS:" << endl;
    for (int i = 0; i < TAM; i++)
    {
        cout << "\t" << palabras[i];
        if (i == min) cout << "\t<= MIN";
        if (i == max) cout << "\t<= MAX";
        if (i == inicio) cout << "\t<= INICIO";
        if (i == final) cout << "\t<= FINAL";
        cout << endl;
    }
}
