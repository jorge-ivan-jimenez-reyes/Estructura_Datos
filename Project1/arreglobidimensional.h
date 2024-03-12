
#include <iostream>
#include <string>

using namespace std;

class TwoDimArr {
public:
    TwoDimArr(int rows, int cols);

    ~TwoDimArr();

    void nam();

    void show();

    void sort();

    void fill();

private:
    int** arr;
    int rows;
    int cols;
    string name;
};

