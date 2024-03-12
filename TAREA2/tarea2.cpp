#include "tarea2.h"

Empresa::Empresa() : ocupados(0) {
    personal[0] = { "luis", 167, 230.50 };
    personal[1] = { "juan", 182, 270.50 };
    personal[2] = { "Dalia", 173, 310.00 };
    ocupados = 3;
}

Empresa::~Empresa() {}

bool Empresa::Insertar(const Empleado& persona) {
    if (ocupados >= tamano)
        return false;

    int pos = -1;
    for (int i = 0; i < ocupados; i++) {
        if (persona.nom < personal[i].nom) {
            pos = i;
            break;
        }
    }

    if (pos == -1)
        personal[ocupados] = persona;
    else {
        for (int i = ocupados; i > pos; i--)
            personal[i] = personal[i - 1];
        personal[pos] = persona;
    }

    ocupados++;
    return true;
}

bool Empresa::Borrar(const std::string& nombreBorrar) {
    if (ocupados == 0)
        return false;

    int pos = -1;
    for (int i = 0; i < ocupados; i++) {
        if (personal[i].nom == nombreBorrar) {
            pos = i;
            break;
        }
    }

    if (pos == -1)
        return false;

    for (int i = pos; i < ocupados - 1; i++)
        personal[i] = personal[i + 1];

    ocupados--;
    return true;
}

void Empresa::Ordenar() {
    bool ordenado = false;
    int iteracion = 0;
    Empleado aux;

    while (!ordenado) {
        ordenado = true;
        for (int i = 0; i < ocupados - 1 - iteracion; i++) {
            if (personal[i].nom > personal[i + 1].nom) {
                aux = personal[i];
                personal[i] = personal[i + 1];
                personal[i + 1] = aux;
                ordenado = false;
            }
        }
        iteracion++;
    }
}

void Empresa::Mostrar() const {
    std::cout << "\nPersonal:" << std::endl;
    for (int i = 0; i < ocupados; i++) {
        std::cout << "\t" << personal[i].nom << "\t" << personal[i].esta << "\t"
            << personal[i].sdo << std::endl;
    }
    std::cout << std::endl;
}
