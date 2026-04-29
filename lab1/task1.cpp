#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "UKR");
    int m, n;
    cout << "Введіть кількість рядків матриці:";
    cin >> m;
    cout << "Введіть кількість стовпчиків матриці:";
    cin >> n;

	int** A = new int*[m];
	
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


