#include <iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "UKR");

	int rows, columns;
	cout << "Введіть кількість рядку:";
	cin >> rows;
	cout << "Введіть кількість колонок в рядку:";
	cin >> columns;




	int** A = new int*[rows];

	int** ptr = &A[0];
	int i = 0;

	while (i < rows) {
		*ptr = new int[columns];
		ptr++;
		i++;
	}

	int** row = &A[0];

	while (row < &A[0] + rows) {

		int* col = *row;

		while (col < *row + columns) {
			cout << "Введіть якесь значення для елемента матриці";
			cin >> *col;   
			col++;
		}

		row++;
	}

	row = &A[0];
	cout << endl << "Наша матриця: \n";

	while (row < &A[0] + rows) {

		int* col = *row;

		while (col < *row + columns) {
			cout << '\t' << *col;
			col++;
		}

		cout << '\n';
		row++;
	}

	int matrix_slid = 0;
	int row_counter = 0;
	int columns_counter = 0;

	row = &A[0];
	while (row < &A[0] + rows) {
		columns_counter = 0;
		int* col = *row;

		while (col < *row + columns) {


			if (columns_counter == row_counter) {
			
				matrix_slid += *col;
			
			}

			columns_counter++;
			col++;
		}

		row_counter++;
		row++;
	}

	row = &A[0];
	while (row < &A[0] + rows) {
		columns_counter = 0;
		int* col = *row;

		while (col < *row + columns) {


			if (*col % 2 == 0) {

				*col = matrix_slid;

			}

			col++;
		}

		row++;
	}

	row = &A[0];
	cout << endl << "Наша змінена матриця: \n";

	while (row < &A[0] + rows) {

		int* col = *row;

		while (col < *row + columns) {
			cout << '\t' << *col;
			col++;
		}

		cout << '\n';
		row++;
	}

		delete[] A;
	return 0;
}
