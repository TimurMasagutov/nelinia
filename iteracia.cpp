// iteracia.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;
const double epsilon = 0.000001;
float a, b, x0, x1;
double f(double x) {
	return 0.1 * pow(x, 2) - x * log(x);
}
double f1(double x) {
	return 0.2 * x - log(x) - 1;
}
double f2(double x) {
	return 0.2 - 1 / x;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите начало и конец отрезка на котором содержится корень:";
	cin >> a >> b;
	if (f(a) * f2(a) > 0) {
		x0 = a;
	}
	else {
		if (f(b) * f2(b) > 0) {
			x0 = b;
		}
	}
	x1 = x0 - f(x0) / f1(x0);
	while (abs(x0 - x1) > epsilon) {
		x0 = x1;
		x1 = x0 - f(x0) / f1(x0);
	}
	cout << "Приближенный корень уравнения на отрезке [" << a << ";" << b << "]: ";
	cout << x1;
	return 0;
}