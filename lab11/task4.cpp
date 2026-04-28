#include <iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "UKR");

	int rows, columns;
	cout << "Введіть кількість рядків для матриці:";
	cin >> rows;
	cout << "Введіть кількість стовпців для матриці:";
	cin >> columns;

	int** A = new int* [rows];

	int** ptr = A;
	int i = 0;

	while (i < rows) {

		*ptr = new int[columns];

		ptr++;
		i++;

	}

	int** row = A;

	while (row < A + rows) {

		int* col = *row;

		while (col < *row + columns) {

			cout << "Введіть якесь значення для елемента матриці:";
			cin >> *col;

			col++;

		}

		row++;

	}

	row = A;
	cout << "Наша матриця:\n";
	while (row < A + rows) {

		int* col = *row;

		while (col < *row + columns) {

			cout << '\t' << *col;

			col++;

		}
		cout << '\n';
		row++;
	}

	int* arr = new int[rows * (rows-1) / 2];

	row = A;
	int row_counter = 0, column_counter = 0, arr_counter = 0;
	while (row < A + rows) {

		int* col = *row;
		column_counter = 0;
		while (col < *row + columns) {

			if (column_counter > row_counter ) {
			
				arr[arr_counter] = *col;
				arr_counter++;
			}

			col++;
			column_counter++;
		}
		row++;
		row_counter++;
	}


	int minimum = arr[0];

	for (int i = 0; i < arr_counter; i++) {
	
		if (minimum > arr[i]) {
		
			minimum = arr[i];
		
		}
	
	}


	cout << "Найменший елемент вище головної діагоналі матриці:" << minimum;

	delete[] A;
	delete[] arr;

	return 0;
}
