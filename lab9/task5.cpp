#include <iostream>
#include <cmath>

using namespace std;

int main() {

	setlocale(LC_ALL, "UKR");

	int n;
	cout << "Введіть кількість елементів масиву:";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
	
		cout << endl << "Введіть якийсь елемент масиву:";
		cin >> arr[i];
	
	}

	int* ptr = &arr[0];

	cout << "Адреси всіх елементів масиву: \n";

	while (ptr < &arr[n]) {
	
		cout << endl << ptr << " -> " << *ptr;
		ptr++;
	
	}

	int* max_negatives = new int[n];

	ptr = &arr[0];

	int amount_number = 0;
	while (ptr < &arr[n]) {
	
		if (*ptr < 0) {
		
			max_negatives[amount_number] = *ptr ;
			amount_number++;
		}

		ptr++;
	
	}

	int maximal_negative = max_negatives[0];

	ptr = &max_negatives[0];
	int* ptr2 = &max_negatives[1];
	while (ptr < &max_negatives[n]) {
	
		if (maximal_negative < *ptr) {
			
			maximal_negative = *ptr;
		
		}

		ptr++;
	
	}

	cout << endl << "Найбільший від'ємний елемент:" << maximal_negative;

	delete[] arr;
	delete[] max_negatives;

	return 0;

}
