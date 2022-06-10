#include <iostream>

using namespace std;

double checkRealRoot()
{
	double a, b, c;
	cout << "5-а€ задача" << endl;
	cout << "¬ведите a: ";
	cin >> a;
	cout << "¬ведите b: ";
	cin >> b;
	cout << "¬ведите c: ";
	cin >> c;
	if ((b * b - 4 * a * c) >= 0)
	{
		a *= a;
		cout << "a: " << a << endl;
		return a;
	}
	else cout << "ƒействительных корней нет.";
}