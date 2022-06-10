#include <iostream>
#include <cstdlib>

using namespace std;

void fillArray(int* A, const int n);
void outputArray(int* A, const int n);
void findMinMax(int* A, const int n, int& min, int& max);
void production(int* A, const int n, int& min, int& max);

void completeArray()
{
	const int n = 10;
	int A[n];
	int min = A[0];
	int max = A[0];
	cout << "7-ая задача" << endl;
	fillArray(A, n);
	cout << "Исходный массив A: " << endl;
	outputArray(A, n);
	findMinMax(A, n, min, max);
	production(A, n, min, max);
	cout << "Преобразованный массив A: " << endl;
	outputArray(A, n);
	cout << endl;
}

void fillArray(int* A, const int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
	{
		A[i] = rand() % 50 + 1;
	}
}

void outputArray(int* A, const int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << A[i] << " ";
	}
}

void findMinMax(int* A, const int n, int& min, int& max)
{
	min = A[0];
	max = A[0];
	for (int i = 0; i < n; ++i)
	{
		if (A[i] > max) max = A[i];
		if (A[i] < min) min = A[i];
	}
	cout << endl << "MIN: " << min << endl;
	cout << "MAX: " << max << endl;
}

void production(int* A, const int n, int& min, int& max)
{
	int P = 1;
	for (int i = 1; i < n; ++i)
	{
		if (A[i] <= max / 2 && A[i] >= min / 2) P *= A[i];
	}
	A[0] = P;
	A[n - 2] = P;
}