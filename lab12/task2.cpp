#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "UKR");

	int na, nb;
	cout << "Введіть довжину масиву а:";
	cin >> na;
	cout << "Введіть довжину масиву b:";
	cin >> nb;

	int* a = new int[na];
	int* b = new int[nb];

	srand(time(NULL));
	for (int i = 0; i < na; i++) {
		a[i] = rand() % 100;
	}
	for (int i = 0; i < nb; i++) {
		b[i] = rand() % 100;
	}


	cout << "Утворений масив a:";

	for (int i = 0; i < na; i++) {

		cout << '\t' << a[i];

	}
	cout << endl;


	cout << "Утворений масив b:";

	for (int i = 0; i < nb; i++) {

		cout << '\t' << b[i];

	}
	cout << endl;

	int krat3_counter1 = 0;
	for (int i = 0; i < na; i++) {
	
		if (a[i] % 3 > 0 || a[i] % 3 < 0 ) {
		
			krat3_counter1++;

		}
	
	}

	cout << endl <<  "В масиві а знаходиться " << krat3_counter1 << " елементів кратних 3";

	int krat3_counter2 = 0;
	for (int i = 0; i < nb; i++) {
	
		if (b[i] % 3 > 0 || b[i] % 3 < 0) {
		
			krat3_counter2++;

		
		}
	
	}

	cout << endl << "В масиві b знаходиться " << krat3_counter2 << " елементів кратних 3";


	int* c = new int[krat3_counter1 + krat3_counter2];

	int arr_c_counter = 0;
	for (int i = 0; i < krat3_counter1 + krat3_counter2; i++) {

		if (a[i] % 3 > 0 || a[i] % 3 < 0) {
			c[arr_c_counter] = a[i];
			arr_c_counter++;

		} 
		if (b[i] % 3 > 0 || b[i] % 3 < 0 ) {
		
			c[arr_c_counter] = b[i];
			arr_c_counter++;
		
		}
	}


	cout << "Утворений масив c:";

	for (int i = 0; i < krat3_counter1 + krat3_counter2; i++) {

		cout << '\t' << c[i];

	}

	delete[] a;
	delete[] b;
	delete[] c;
}
