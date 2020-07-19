/*
* Пользователь 	вводит с клавиатуры два числа.Посчитать 	их сумму, произведение и среднее 	арифметическое.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	double a, b;
	cout << "Введите два числа : ";
	cin >> a >> b;
	cout << "Сумма = " << a + b << endl;
	cout << "Произведение = " << a * b << endl;
	cout << "Среднее арифметическое = " << (a + b) / 2 << endl;
}
