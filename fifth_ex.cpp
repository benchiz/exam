#include <iostream>

using namespace std;

double checkRealRoot()
{
	double a, b, c;
	cout << "5-�� ������" << endl;
	cout << "������� a: ";
	cin >> a;
	cout << "������� b: ";
	cin >> b;
	cout << "������� c: ";
	cin >> c;
	if ((b * b - 4 * a * c) >= 0)
	{
		a *= a;
		cout << "a: " << a << endl;
		return a;
	}
	else cout << "�������������� ������ ���.";
}