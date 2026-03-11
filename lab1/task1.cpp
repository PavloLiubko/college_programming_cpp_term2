#include <iostream>
using namespace std;


int main()
{

	int A[6][4];

	setlocale(LC_ALL, "UKR");

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++) {
		
			cout << "Введіть якесь значення для матриці:";
			cin >> A[i][j];

		}
	}

	cout << "Наша матриця: \n"; 
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++) {

			cout << A[i][j] << "\t";

		}

		cout << "\n";
	}

	int biggest = A[0][0];
	int biggest_i, biggest_j;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++) {

			if (A[i][j] > biggest) {
				biggest = A[i][j];
				biggest_i = i;
				biggest_j = j; 
			}

		}
	}

	cout << "Найбільший елемент матриці = " << biggest << " його координати: " << biggest_i << " " << biggest_j;


}


