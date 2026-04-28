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

	while (row < A + rows) {

		int* col = *row;

		while (col < *row + columns) {

			cout << '\t' << *col;

			col++;

		}
		cout << '\n';

		row++;

	}

	float amount_plus = 0, sum_plus = 0, amount_minus = 0, sum_minus = 0, nulls_amount =0 ;

	row = A;

	while (row < A + rows) {

		int* col = *row;

		while (col < *row + columns) {

			if (*col > 0) {
			
				amount_plus++;
				sum_plus += *col;
			
			}

			else if (*col < 0) {
			
				amount_minus++;
				sum_minus += *col;
			
			}

			else {
				
				nulls_amount++;
			
			}

			col++;

		}

		row++;

	}

	cout << "Середнє арифметичне додатніх чисел: " << sum_plus / amount_plus << ", середнє арифметичне від'ємних чисел: " << sum_minus / amount_minus << ", кількість нулів в матриці:" << nulls_amount;

	delete[] A;

	return 0;
}
