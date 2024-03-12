
#include "Pilas.h"

pilas::pilas() {
    this->min = 0;
    this->max = size - 1;
    this->count = min - 1;
    content = new string[size];
    for (int i = 0; i < size; i++) content[i] = "";
}

pilas::~pilas() { delete[] content; }

void pilas::push(string n) {
    if (this->count >= this->max) cout << "La pila está llena" << endl;
    else {
        count++;
        content[this->count] = n;
        cout << "Agregado!" << endl;
    }
}

string pilas::pop() {
    string popped = "";
    if (this->count < this->min) cout << "La pila está vacía" << endl;
    else {
        popped = content[this->count];
        count--;
        cout << "Eliminado!" << endl;
    }
    return popped;
}

void pilas::show() {
    cout << "Contenido de la pila: ";
    if (this->count < this->min) cout << "La pila está vacía" << endl;
    else {
        for (int i = 0; i <= this->count; i++) cout << content[i] << " ";
        cout << endl;
    }
    cout << endl;
}

bool pilas::isEmpty() {
    return (this->count < this->min);
}

string pilas::top() {
    if (this->count < this->min)
        return "La pila está vacía";

    return content[this->count];
}
