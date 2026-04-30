#include <iostream>
#include <random>
using namespace std;

int SumElements(int arr[], int n) {

	int sum = 0;
	for (int i = 0; i < n; i++) {

		sum += arr[i];

	}

	return sum;

}

int main()
{
    setlocale(LC_ALL, "UKR");
    srand(time(NULL));

    int n;
    cout << "Введіть кількість елементів для масиву: ";
    cin >> n;

    int* a = new int[n];

    for (int i = 0; i < n; i++) {
        a[i] = -2 + (rand() % 6);
    }

    cout << "\nНаш утворений масив:\n";
    for (int i = 0; i < n; i++) {
        cout << '\t' << a[i];
    }

    int minus_counter = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) minus_counter++;
    }

    int* new_arr = new int[n + minus_counter];

    int j = 0;

    for (int i = 0; i < n; i++) {

        if (a[i] < 0) {
            new_arr[j++] = SumElements(a, n); 
        }

        new_arr[j++] = a[i]; 
    }

    cout << "\n Новий масив:\n";
    for (int i = 0; i < n + minus_counter; i++) {
        cout << '\t' << new_arr[i];
    }

    delete[] new_arr;
    delete[] a;

    return 0;

}
