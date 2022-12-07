//Завдання 3 пункт 3 варіант 13
//3. Дано 𝑘 натуральних чисел.Знайти їх найбільший спільний дільник, використовуючи 
//алгоритм Евкліда і враховуючи, що НСД(𝑎, 𝑏, 𝑐) = НСД(НСД(𝑎, 𝑏), 𝑐).

#include <iostream>
#include <Windows.h>

using namespace std;

int G(int a, int b)
{
    while (a != 0 && b != 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    return a + b;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int a, b, c;

    do
    {
        cout << "Введіть a, b, c: ";
        cin >> a >> b >> c;
    } while (a < 0  b < 0  c < 0);

    cout << "Найбільший спільний дільник: " << G(G(a, b), c) << endl;



}