#include <iostream>

using namespace std;

int SumPrevious(int arr[], int n) {

	int sum = 0;
	for (int i = 0; i <= n; i++) {
	
		sum += arr[i];
	
	}

	return sum;

}


int main()
{
	setlocale(LC_ALL, "UKR");

	int n;
	cout << "Введіть кількість елементів масиву:";
	cin >> n;

	int* arr = new int[n];

	int *ptr = &arr[0];

	while (ptr < &arr[n]) {
	
		cout << "Введіть якесь значення для елементу масиву:";
		cin >> *ptr;
	
		ptr++;
	}

	int kratne_5 = 0;

	ptr = &arr[0];
	int counter = 0;
	int index_counter = 0;
	int* arr_kratne_5 = new int[n];
	while (ptr < &arr[n]) {

		if (*ptr % 5 == 0) {
		
			kratne_5++;
			arr_kratne_5[counter++] = index_counter;
		}

		ptr++;
		index_counter++;
	}
	


	int* new_arr = new int[n + kratne_5];

	for (int i = 0; i < counter; i++) {
		
		for (int j = 0; j < n + kratne_5; j++) {
		
			if (arr_kratne_5[i] == j) {
			
				new_arr[j + 1] = SumPrevious(arr, j);
			
			}
		
		}
	
	}

	
// must be changed

	return 0;
}
