#include <iostream>
#include <random>
using namespace std;

int main()
{
	setlocale(LC_ALL, "UKR");
	int n;
	cout << "Введіть довжину масивів а та b:";
	cin >> n;

	int* a = new int[n];
	int* b = new int[n];
	int* c = new int[n];

	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 100;
	}
	for (int i = 0; i < n; i++) {
		b[i] = rand() % 100;
	}

	for (int i = 0; i < n; i++) {
		
		c[i] = a[i] + b[i];

	}

	cout << "Утворений масив a:";

	for (int i = 0; i < n; i++) {

		cout << '\t' << a[i];

	}
	cout << endl;


	cout << "Утворений масив b:";

	for (int i = 0; i < n; i++) {

		cout << '\t' << b[i];

	}
	cout << endl;

	cout << "Утворений третій масив:";

	for (int i = 0; i < n; i++) {

		cout << '\t' << c[i];

	}

	delete[] a;
	delete[] b;
	delete[] c;

}
