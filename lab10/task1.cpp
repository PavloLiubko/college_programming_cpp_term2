#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "UKR");

	int n;
	cout << "Введіть кількість елементів масиву:";
	cin >> n;

	int* arr = new int[n];

	int* ptr = &arr[0];

	while (ptr < &arr[n]) {
	
		cout << "Введіть якесь значення для елементу масиву:";
		cin >> *ptr;
		ptr++;
	
	}

	int* arr_paired = new int[n / 2];

	int pair_counter = 0;
	int added_num = 0;

	ptr = &arr[0];

	while (ptr < &arr[n]) {
	
		pair_counter += 1;

		if (pair_counter % 2 == 0) {
		
			arr_paired[added_num] = *ptr;
			added_num++;
		
		}

		ptr++;
	
	}

	int minimal_paired = arr_paired[0];

	ptr = &arr_paired[0];

	while (ptr < &arr_paired[n/2]) {
	
		if (*ptr < minimal_paired) {
		
			minimal_paired = *ptr;
		
		}
	
		ptr++;
	
	}

	cout << "Найменше число з парним номером:" << minimal_paired;


	delete[] arr;
	delete[] arr_paired;

	return 0;

}
