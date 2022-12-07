//Завдання 4 варіант 13

#include<iostream>
#include<cmath>
#include<Windows.h>

using namespace std;

double funct1(int x)
{
    double a;

    a = ((pow(2, 7) * log(3.8 + abs(x)) / (pow(x, 2) + 2)));

    return a;
}

double funct2(int x)
{
    double b;

    b = ((2 * cos(2 * x)) - (abs(sin(x / 1.1))));

    return b;
}

void main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int i = 13, k;
    double a, b, Z;

    double sum1 = 0;
    double sum2 = 0;

    k = i;

    for (int k = i; k <= i + 5; k++)
    {
        a = funct1(2);
        sum1 = sum1 + a;
    }

    for (int k = i; k <= i + 8; k++)
    {
        b = funct2(2);
        sum2 = sum2 + b;
    }

    Z = cos(sum1 * sum2);

    cout << "i = " << i << endl;
    cout << "a = " << sum1 << endl;
    cout << "b = " << sum2 << endl;
    cout << "Z = " << Z << endl;