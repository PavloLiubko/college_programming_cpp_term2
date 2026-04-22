#include <iostream>
#include <cmath>

using namespace std;


int main()
{
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

	ptr = &arr[0];
	int maximal_number = arr[0];

	while (ptr < &arr[n]) {

		if (abs(*ptr) < abs(maximal_number)) {

			maximal_number = *ptr;

		}

		ptr++;

	}

	int First_dodat_indexes[2];

	ptr = &arr[0];
	int counter = 0;
	int arr_fullness = 0;
	while (ptr < &arr[n]) {
		
		if (arr_fullness == 2) { break; }
		if (*ptr > 0) {
		
			First_dodat_indexes[arr_fullness] = counter;
			arr_fullness++;

		}
		counter++;
		ptr++;
	
	}
	
	int sum = 0;

	ptr = &arr[First_dodat_indexes[0]]+1;

	while (ptr < &arr[First_dodat_indexes[1]]) {
		
		sum += *ptr;
		ptr++;

	}

	cout << "Сума всіх чисел між:" << sum;

	return 0;
}



