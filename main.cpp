// main.cpp 
// ��������� ����� 
// ����������� ������ � 3.4 
// ������������, ������ ������� �������
// ������ 20

#include <iostream> 
#include <cmath>

using namespace std;

void main() {
    double x, y; // input
    double m; // additional

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    if ((y <= -x && y >= pow(x - 2, 2) - 3) ||
        (y >= 0 && y <= pow(x - 2, 2) - 3 && y <= x))
        cout << "yes";
    else cout << "no";

    cout << endl;
}