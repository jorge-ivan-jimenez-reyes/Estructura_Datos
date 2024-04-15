#pragma once

class list
{
public:
    list(); 
    ~list();

    void insertar(int x);
    int extraer(int x); 
    void mostrar() const; 

private:
    struct node 
    {
        int data{}; 
        node* next{}; 
    };

    node* head_; 
};
