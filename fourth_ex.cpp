#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void funcVariable()
{
	setlocale(LC_ALL, "RU");
	double a, b, d, secondVariable;
	cout << "4-�� ������" << endl;
	cout << "������� A: ";
	cin >> a;
	cout << "������� B: ";
	cin >> b;
	secondVariable = a + b / sqrt(pow(a, 2) + pow(b, 2) + abs(a * b));
	d = (a + b) * ((pow(a, b) * sin(secondVariable)) - pow(b, a) * cos(secondVariable));
	cout << "D= " << setprecision(4) << d << endl;
}