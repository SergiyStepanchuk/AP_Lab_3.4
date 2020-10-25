// main.cpp 
// Степанчук Сергій 
// Лабораторна робота № 3.4 
// Розгалуження, задане плоскою фігурою
// Варіант 20

#include <iostream> 
#include <cmath>

using namespace std;

void main() {
    double x, y; // input

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    if (y >= pow(x - 2, 2) - 3 && 
        (y <= -x || (y >= 0 && y >= pow(x - 2, 2) - 3 && y <= x)))
        cout << "yes";
    else cout << "no";

    cout << endl;
}