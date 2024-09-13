/*
Lab_03.1
Демчук Максим 
Лабораторна робота № 3.1
Розгалуження, задане формулою: функція однієї змінної
Варіант 5
*/

#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x;
	double y;
	double A;
	double B;
	double ctg;

	cout << "Введіть x: "<<endl;
	cin >> x;

	A = 1.0/abs(x + 2) + 1;
	ctg = cos((x + 4) / sqrt(11)) / sin((x + 4) / sqrt(11));

	if (x < 1)
		B = -7 * (x * x) + x - 8;
		        
	if (1 <= x && x <= 4)
		B = -ctg + 3;

	if (x > 4)
		B = -sqrt(1 + abs(cos(x) * cos(x) * cos(x)));

	y = A + B;
	cout <<"Результат = " << y << endl;
	return 0;
}