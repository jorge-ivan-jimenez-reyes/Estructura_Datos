#include "examen1.h"

Team::Team() = default;

void Team::insert()
{
    int height;
    cout << "Height: ";
    cin >> height;


    // See if there is available space
    int i = 0;
    while (i < SIZE && height > heights[i]) {
        i++;
    }
    //f.2) Desplaza
    for (int j = SIZE; j > i; j--) {
        heights[j] = heights[j - 1];
    }
    //f.3) Coloca el nuevo elemento
    heights[i] = height;
    this->used++;
}

void Team::show()
{
    for (int j = 0; j < SIZE; ++j) {
        cout << heights[j] << " ";
    }
}
//
//// Created by eubgt on 8/23/22.
//
//#include "business.h"
//
//void business::show(employee list[MAX]) {
//    cout << endl;
//    cout << "PRINTING ........................" << endl;
//    cout << "Name\t|\tHeight\t|\tSalary" << endl;
//    for (int i = 0; i < 5; i++) {
//        if (!list[i].name.empty()) {
//            cout << list[i].name << "\t|\t" << list[i].height << "\t\t|\t" << list[i].payment << endl;
//        }
//    }
//}
//
//void business::sort(employee(&list)[MAX], int o) {
//
//    int size = 0;
//    for (auto& i : list) {
//        if (!i.name.empty()) {
//            size++;
//        }
//    }
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size - 1; j++) {
//            if (list[j].name > list[j + 1].name) {
//                employee aux = list[j];
//                list[j] = list[j + 1];
//                list[j + 1] = aux;
//            }
//        }
//    }
//    if (o == 1) {
//        cout << endl;
//        cout << "SORTING .........................." << endl;
//        show(list);
//    }
//}
//
//void business::insert(employee(&list)[MAX]) {
//    
//
//void business::deletee(employee(&list)[MAX]) {
//    business::sort(list, 0);
//    cout << endl;
//    cout << "DELETING ......................." << endl;
//    int size = 0;
//    for (auto& i : list) {
//        if (!i.name.empty()) {
//            size++;
//        }
//    }
//
//    // Ask for the name to delete
//    string name;
//    cout << "Name: ";
//    cin >> name;
//    // Search for the position to delete the employee
//    int position = 0;
//    for (int i = 0; i < size; i++) {
//        if (name == list[i].name) {
//            position = i;
//            break;
//        }
//    }
//    // Shift the elements to the left
//    for (int i = position; i < MAX - 1; i++) {
//        list[i] = list[i + 1];
//    }
//    // Delete the last element
//    list[MAX - 1].name = "";
//    list[MAX - 1].height = 0;
//    list[MAX - 1].payment = 0;