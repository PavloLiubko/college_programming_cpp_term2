#include <iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "UKR");

	int rows, columns;
	cout << "Введіть кількість рядків матриці:";
	cin >> rows;
	cout << "Введіть кількість стовпців матриці:";
	cin >> columns;

	int** A = new int* [rows];

	int** ptr = &A[0];
	int i = 0;
	while (i < rows) {
	
		*ptr = new int[columns];

		ptr++;
		i++;
	}

	int** row = &A[0];

	while (row < A + rows) {
	
		int* col = *row;

		while (col < *row + columns) {
		
			cout << "Введіть якесь значення для елемента матриці:";
			cin >> *col;
		
			col++;
		}
	
		row++;
	}

	row = &A[0];
	cout << endl << "Наша матриця:\n";
	while (row < A + rows) {

		int* col = *row;

		while (col < *row + columns) {

			cout << '\t' << *col;
			col++;
		}

		cout << '\n';
		row++;
	}

	int minimal_number = A[0][0];

	row = &A[0];
	while (row < A + rows) {

		int* col = *row;

		while (col < *row + columns) {

			if (minimal_number > *col) {
			
				minimal_number = *col;
			
			}
			col++;

		}

		row++;
	}

	int row_counter = 0, row_to_delete = 0;

	row = &A[0];

	while (row < A + rows) {

		int* col = *row;

		while (col < *row + columns) {

			if (*col == minimal_number) {
			
				row_to_delete = row_counter;
			
			}
			
			col++;
		}

		row_counter++;
		row++;
	}

	delete[] A[row_to_delete];

	row = &A[0];
	cout << endl << "Наша змінена матриця:\n";
	row_counter = 0;
	while (row < A + rows) {

		int* col = *row;

		if (row_counter != row_to_delete) {

			while (col < *row + columns) {

				cout << '\t' << *col;
				col++;
			}
			cout << '\n';
		}
		row_counter++;
		row++;

	}

	return 0;
}
