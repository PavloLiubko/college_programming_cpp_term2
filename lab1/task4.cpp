#include <iostream> 
#include <string>

using namespace std;

int main() {

	setlocale(LC_ALL, "UKR");

	int n_matrix, rows, columns;
	cout << "Введіть кількість матриць в масиві:";
	cin >> n_matrix;
	cout << "Введіть кількість стовпців у цих матрицях:";
	cin >> columns;
	cout << "Введіть кількість рядків у цих матрицях:";
	cin >> rows;

	int*** Triple = new int**[n_matrix];

	for (int i = 0; i < n_matrix; i++) {
	
		int** matrix = new int*[columns];

		Triple[i] = matrix;

	
	}

	for (int i = 0; i < n_matrix; i++) {
		for (int j = 0; j < columns ; j++) {
		
			int* arr = new int[rows];

			Triple[i][j] = arr;

		}
	}

	for (int i = 0; i < n_matrix; i++) {
	
		for (int j = 0; j < columns; j++) {

			for (int q = 0; q < rows; q++) {
			
				cout << endl << "Введіть якесь значення для цього масиву:";
 				cin >> Triple[i][j][q];
			
			}

		}
	
	}

	cout << endl << "Наша отриманий трьохвимірний масив: \n";

	for (int i = 0; i < n_matrix; i++) {

		for (int j = 0; j < columns; j++) {

			for (int q = 0; q < rows; q++) {

				cout << Triple[i][j][q] << '\t';

			}

			cout << '\n';

		}

		cout << '\n' << '\n' << '\n';

	}

	int counter = 0; 

	for (int i = 0; i < n_matrix; i++) {

		for (int j = 0; j < columns; j++) {

			for (int q = 0; q < rows; q++) {

				if (Triple[i][j][q] % 9 == 0 && Triple[i][j][q] % 7 == 0) {
				
					counter += 1;
				
				}

			}

		}

	}

	cout << endl << "Кількість чисел кратних 7 і 9 = " << counter;

	delete[] Triple;
	
	return 0;
} 
