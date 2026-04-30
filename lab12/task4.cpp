#include <iostream>
#include <random>
using namespace std;

int SumElements(int arr[], int n) {

	int sum = 0;
	for (int i = 0; i < n; i++) {

		sum += arr[i];

	}

	return sum;

}

int main()
{
    setlocale(LC_ALL, "UKR");
	srand(time(NULL));

	int rows, columns;
	cout << "Введіть кількість рядків матриці:";
	cin >> rows;
	cout << "Введіть кількість стовпчиків матриці:";
	cin >> columns;


	int** A = new int* [rows];

	for (int i = 0; i < rows; i++) {
	
		A[i] = new int[columns];
	
	}

	for (int i = 0; i < rows; i++) {
	
		for (int j = 0; j < columns; j++) {
		
			A[i][j] = rand() % 10;
		
		}
	
	}

	cout << "\nНаша матриця:\n";

	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < columns; j++) {

			cout << A[i][j] << '\t';

		}
		cout << '\n';
	}

	int maximum = A[0][0];
	int minimum = A[0][0];

	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < columns; j++) {

			if (maximum < A[i][j]) {
			
				maximum = A[i][j];
			
			}

			else if (minimum > A[i][j]) {
			
				minimum = A[i][j];
			
			}

		}
		cout << '\n';
	}

	cout << endl << "Мінімальний елемент нашої матриці:" << minimum << ", максимальний елемент нашої матриці: " << maximum;

	delete[] A;

    return 0;

}
