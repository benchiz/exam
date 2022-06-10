#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

void fillArray(int A[][5], const int n, const int m);
void outputArray(int A[][5], const int n, const int m);
void findMinMax(int A[][5], const int n, const int m, int& min, int& max);
void average(int A[][5], const int n, const int m, int& min, int& max);

void complete2DArray()
{
	const int n = 5;
	const int m = 5;
	int A[n][m];
	int min = abs(A[1][1]);
	int max = abs(A[1][1]);
	cout << "8-ая задача" << endl;
	cout << "Исходный массив: " << endl;
	fillArray(A, n, m);
	outputArray(A, n, m);
	findMinMax(A, n, m, min, max);
	average(A, n, m, min, max);
	cout << endl << "Преобразованный массив: " << endl;
	outputArray(A, n, m);
}

void fillArray(int A[][5], const int n, const int m)
{
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			A[i][j] = rand() % 110 + (-41);
		}
	}
}

void outputArray(int A[][5], const int n, const int m)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void findMinMax(int A[][5], const int n, const int m, int& min, int& max)
{
	min = abs(A[1][1]);
	max = abs(A[1][1]);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (abs(A[i][j]) > max) max = abs(A[i][j]);
			if (abs(A[i][j]) < min) min = abs(A[i][j]);
		}
	}
}

void average(int A[][5], const int n, const int m, int& min, int& max)
{
	double avg = (min + max) / 2;
	int count = 0;
	cout << "Среднее значение: " << avg << endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (abs(A[i][j]) >= 0 && abs(A[i][j]) <= avg)
			{
				A[i][j] = pow(A[i][j], 2);
				count += 1;
			}
		}
	}
	cout << "Количество элементов: " << count << endl;
}