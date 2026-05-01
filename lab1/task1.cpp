#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	setlocale(LC_ALL, "UKR");
	int m, n;
	cout << "Введіть кількість рядків матриці:";
	cin >> m;
	cout << "Введіть кількість стовпчиків матриці:";
	cin >> n;

	int** A = new int* [m];

	for (int i = 0; i < m; i++) {

		A[i] = new int[n];

	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {

			cout << "Введіть якесь значення для матриці:";
			cin >> A[i][j];

		}
	}

	cout << "Наша матриця: \n";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {

			cout << A[i][j] << "\t";

		}

		cout << "\n";
	}

	int biggest = abs(A[0][0]);
	int biggest_i = 0, biggest_j = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {

			if (abs(A[i][j]) > biggest) {
				biggest = abs(A[i][j]);
				biggest_i = i;
				biggest_j = j;
			}

		}
	}

	cout << "Найбільший елемент матриці за модулем це елемент з координатами " << biggest_i << " " << biggest_j;

	return 0;
}
