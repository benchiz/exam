#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double tabulation()
{
	double f, x, aPart, A;
	cout << "6-а€ задача" << endl;
	cout << "¬ведите A: ";
	cin >> A;
	x = -2;
	while (x <= 3)
	{
		aPart = pow(x, 3) - 2 * pow(x, 2) - x + 2;
		if (aPart == 0) aPart = 1;
		f = A * sin(aPart) / aPart;
		cout << "f: " << setprecision(3) << f << endl;
		x += 0.5;
	}
	return f;
}