//Завдання 2 Варіант 13
//Створити додаток з допомогою якого можна ввести координати точки(x, y) і визначити, чи попадає введена точка 
//в заштриховану область на малюнку, що поданий.Влучення на границю області вважати влученням в область

#include <iostream>
#include <Windows.h>
using namespace std;


int main(string[])

{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    float R, x, y;
    cout << "Vvedit R ";
    cin >> R;
    cout << "Vvedit x ";
    cin >> x;
    cout << "vvedit y ";
    cin >> y;
    bool net = true;
    if (x < 0 && y < 0) {
        if (sqrt(pow(x - 0, 2) + pow(y - 0, 2)) < R) { cout << ("YES"); net = !net; }
        if (x > 0 && y > 0) {
            if (sqrt(pow(x - 0, 2) + pow(y - 0, 2)) < R); {
                cout << "popav"; net = !net;
            }
        }
        if (x < 0 && y > 0)
        {
            x = -x;
            if (x + y < R) { cout << "Popav"; net = !net; }
        }
        if (net == true) { cout << "no"; }

    }