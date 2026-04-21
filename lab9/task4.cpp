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
	
		cout << "Введіть значення для елементу масиву:";
		cin >> arr[i];
	
	}

	cout << " Всі елементи масиву:\n";
	for (int i = 0; i < n; i++) {

		cout << arr[i] << '\t';

	}

	for (int i = 0; i < n; i++) {
	
		arr[i] = abs(arr[i]);
	
	}
	
	int* ptr1 = &arr[0];
	int* ptr2;

	int biggests[3];
	int biggest_index = 0;

	while (ptr1 <= &arr[n-1]) {

		int greater_count = 0;
		ptr2 = &arr[n-1];

		while (ptr2 >= &arr[0]) {

			if (ptr1 != ptr2 && *ptr2 > *ptr1) {
				greater_count++;
			}

			--ptr2;
		}

		if (greater_count < 3 && biggest_index < 3) {
			biggests[biggest_index++] = *ptr1;
		}

		ptr1++;
	}

	int biggests_indexes[3];
	for (int i = 0; i < 3; i++) {
	
		for (int j = 9; j >= 0; j--) {
		
			if (biggests[i] == arr[j]) {
			
				biggests_indexes[i] = j;
			
			}
		
		}
	
	}

	cout << endl << "Порядкові номери трьох найбільших за модулем елементів масиву:" << endl;
	cout <<  biggests_indexes[0]+1 << '\t' << biggests_indexes[1]+1 << '\t' << biggests_indexes[2]+1;

	delete[] arr;

	return 0;

}
