#pragma once
#include <iostream>
#include <string>

#define SIZE 100

using namespace std;

struct Residence {
    string street;
    int num;
    string pc;
};

struct Supplier {
    string name;
    Residence residence;
};

class provedores {
public:
    Supplier list[SIZE];

    void show_all();

    void show(const Supplier&);

    void search();

    void add();
};
