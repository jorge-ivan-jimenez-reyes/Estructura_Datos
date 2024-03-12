#include <iostream>
#include <string>

#define size 4

using namespace std;

class pilas {
public:
    pilas();
    ~pilas();
    void push(string);
    string pop();
    string top();
    void show();
    bool isEmpty();

private:
    int min, max, count;
    string* content;
};

