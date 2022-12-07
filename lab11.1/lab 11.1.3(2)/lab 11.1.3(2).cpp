//Завдання 3 пункт 2 варіант 13
//2. Знайти натуральне число з інтервала[a; b] з максимальною сумою дільників.

#include <iostream>
#include <Windows.h>
using namespace std;


int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int count = 0, a, b;
    int ch, t = 0, max_ch;

    cout << "Введіть границі [a/b]: ";

    cin >> a;
    cin >> b;

    for (int i = a; i < b; i++)
    {
        ch = i;
        for (int j = 1; j < b; j++)
        {
            if (ch % j == 0)
                count++;
        }
        if (count > t)
        {
            t = count - 1;
            max_ch = ch;
        }
        count = 0;
    }
    cout << "Число " << max_ch << " має " << t << " дільника/дільників" << endl;

}