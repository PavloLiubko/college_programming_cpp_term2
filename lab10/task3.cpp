#include <iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "UKR");

	int n;
	cout << "Введіть кількість елементів масиву:";
	cin >> n;


	int* arr = new int[n];


	int* ptr = &arr[0];

	int* ptr2 = &arr[n - 1];

	while (ptr <= ptr2) {
	
		cout << "Введіть якесь значення для елементу масиву:";
		cin >> *ptr;

		ptr++;
	
	}

	ptr = &arr[0];

	ptr2 = &arr[n - 1];

	int sum = 0;
	while (ptr < &arr[n]) {
		ptr2 = &arr[n - 1];
		int notDifferent_counter = 0;
		bool isUnique = true;
		while (ptr2 > &arr[0]) {
			
			if (*ptr2 == *ptr) {
			
				isUnique = false;
				break;
			}
			
			ptr2--;
		}
		
		if (isUnique) sum++;

		ptr++;
	}


	cout << endl << sum;

	delete[] arr;

	return 0;
}


// must be changed
