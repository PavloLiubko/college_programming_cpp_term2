
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

	int** F = new int*[m];
	
	for (int i = 0; i < m; i++) {
	    
	    F[i] = new int[n];
	    
	}


	for (int i = 0; i < 5; i++) {
	
		for (int j = 0; j < 5; j++) {
		
			cout << "Введіть якийсь елемент для матриці:";
			cin >> F[i][j];
		
		}
	
	}

	cout << endl << "Наша матриця:" << endl; 


	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 5; j++) {

			cout << F[i][j] << "\t";

		}

		cout << endl;

	}

	int arr[5];
	for (int i = 0; i < 5; i++) {

		int dobutok = 1;
		for (int j = 0; j < 5; j++) {

			if (F[i][j] < 0) {
			
				dobutok *= F[i][j];
			
			}

		}

		arr[i] = dobutok;
		


		cout << endl;

	}

	cout << endl << "Масив з добутків:" << endl;
	for (int i = 0; i < 5; i++) {
	
		cout << arr[i] << "\t";

	}

	int smallest = arr[0];
	int smallest_i;
	for (int i = 0; i < 5; i++) {

		if (smallest > arr[i]) {
			smallest = arr[i];
			smallest_i = i;
		}

	}

	cout << endl << "Мінімальний елементр отриманого масиву = " << smallest << " його індекс:" << smallest_i;


	return 0;

}
