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
	int* arr = new int[len];

	int pointer = 0;
	for (int i = 0; i < n; i++) {
	
		for (int j = 0; j < n; j++) {
		
			if (j < i && G[i][j] > 0) {
			
				arr[pointer] = G[i][j];
				pointer += 1;
			
			}
		
		}

	}

	cout << "Наш утворений масив: \n";
	for (int i = 0; i < n; i++) {
	
		cout << arr[i] << '\t';
	}

	int maximum = arr[0];
	int minimum = arr[0];

	for (int i = 0; i < len; i++) {
	
		if (arr[i] > minimum && arr[i] > 0) {
		
			maximum = arr[i];
	
		}
		else if (arr[i] < minimum && arr[i] > 0) {
		
			minimum = arr[i];

		}

	}

	cout << endl << "Максимальний елемент = " << maximum << endl << "Мінімальний елемент = "  << minimum;

	return 0;
} 
