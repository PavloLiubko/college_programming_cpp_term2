#include <iostream> 
#include <string>

using namespace std;

int faktorial(int q) {

	int result = 0;
	for (int i = 1; i <= q; i++) { result += i; }
	return result;
	
}

int main() {

	setlocale(LC_ALL, "UKR");

	int n;
	cout << "Введіть кількість стовпців матриці:";
	cin >> n;


	int** G = new int*[n];

	for (int i = 0; i < n; i++) {
	
		int* row = new int[n];
		G[i] = row;
	
	}

	for (int i = 0; i < n; i++) {
	
		for (int j = 0; j < n; j++) {

			cout << endl << "Введіть якесь значення для елементів матриці:";
			cin >> G[i][j];
		
		}
	
	}

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {

			cout << G[i][j] << "\t";

		}
		cout << endl;

	}

	int len = faktorial(n);
	int* arr_meanings = new int[len];
    int* arr_indexes1 = new int[len];
    int* arr_indexes2 = new int[len];
	int pointer = 0;
	for (int i = 0; i < n; i++) {
	
		for (int j = 0; j < n; j++) {
		
			if (j < i && G[i][j] > 0) {
			
				arr_meanings[pointer] = G[i][j];
				arr_indexes1[pointer] = i ;
				arr_indexes2[pointer] = j ;
				pointer += 1;
			
			}
		
		}

	}

	cout << "Наш утворений масив: \n";
	for (int i = 0; i < n; i++) {
	
		cout << arr_meanings[i] << '\t';
	}

	int maximum = arr_meanings[0];
	int maximum_i, maximum_j;
	int minimum = arr_meanings[0];
    int minimum_i, minimum_j;

	for (int i = 0; i < len; i++) {
	
		if (arr_meanings[i] > minimum && arr_meanings[i] > 0) {
		
			maximum = arr_meanings[i];
			maximum_i = arr_indexes1[i];
			maximum_j = arr_indexes2[i];
	
		}
		else if (arr_meanings[i] < minimum && arr_meanings[i] > 0) {
		
			minimum = arr_meanings[i];
			minimum_i = arr_indexes1[i];
			minimum_j = arr_indexes2[i];

		}

	}

	cout << endl << "Максимальний елемент = " << maximum << " з координатами" << maximum_i << " " << maximum_j <<  endl << "Мінімальний елемент = "  << minimum << " з координатами " << minimum_i << " " << minimum_j;

	delete[] G;
	
	return 0;

	// must be changed
} 
