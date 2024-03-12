#include "provedores.h"

void provedores::search() {
    cout << "-----------------SEARCHING-----------------" << endl;
    cout << "Name to search: ";
    string name;
    cin >> name;
    bool Search;
    for (auto& i : list) {
        if (name == i.name) {
            cout << "FOUND" << endl;
            Search = true;
            cout << "-----------------SHOWING-----------------" << endl;
            show(i);
        }
    }
    if (!Search) {
        cout << "NOT FOUND" << endl;
    }
}

void provedores::show(const Supplier& i) {
    cout << "Name: " << i.name << "\t|\tStreet: " << i.residence.street << "\t|\tNumber: " << i.residence.num << "\t|\tPCI: "
        << i.residence.pc << endl;

}

void provedores::show_all() {
    cout << "-----------------SHOWING ALL-----------------" << endl;
    for (auto& i : list) {
        if (!i.name.empty()) {
            show(i);
        }
    }
}


void provedores::add() {
    cout << "-----------------ADDING-----------------" << endl;
    Supplier newSupplier;
    cout << "Name: ";
    cin >> newSupplier.name;
    cout << "Street: ";
    cin >> newSupplier.residence.street;
    cout << "Number: ";
    cin >> newSupplier.residence.num;
    cout << "PC: ";
    cin >> newSupplier.residence.pc;

    for (auto& i : list) {
        if (i.name.empty()) {
            i = newSupplier;
            cout << "ADDED" << endl;
            return;
        }
    }
}