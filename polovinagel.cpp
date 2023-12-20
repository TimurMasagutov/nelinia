// polovinagel.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
const double epsilon = 0.0001;
int main() {
	setlocale(LC_ALL, "Rus");
	double a, b, x;
	double fb;
	double fx;
	int k = 0;
	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	while (abs(b - a) >= epsilon) {
		x = (a + b) / 2;
		fb = 0.1 * pow(b, 2) - b * log(b);
		fx = 0.1 * pow(x, 2) - x * log(x);
		if (fb * fx < 0)
			a = x;
		else
			b = x;
		k = k + 1;
	}
	cout << b<<endl<<k;
	return 0;
}
