//Завдання 1 Варіант 13
//Ввести числовий код групи.вивести повну назву групи і кількість студентів в ній;

#include<locale>
#include "windows.h"
#include <iostream>
using namespace std;

int main()
{
	double a;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Виберіть метод виконання роботи: 1-if; 2-switch"<< endl;
	cin >> a;
	if (a != 1 && a != 2) {
		cout << "Неправильне число, спробуй ще" << endl;
	}
	else if (a == 1) {
		cout << "Введіть номер групи" << endl;
        int n;
        cin >> n;
        switch (n) {
        case 2:
            cout << "ФІТ 1 курс, 2 група, 33 студенти " << endl;
            break;
        default: cout << "такої групи немає" << endl;
		}
	}
	else if (a == 2) {
		cout << "Введіть номер групи" << endl;
		int n;
		cin >> n;
		if (n == 2) cout << "ФІТ 1 курс, 2 група, 33 студента " << endl;
		else cout << "Такої групи нема" << endl;
	}
	system("pause>>void");
	return 0;
}