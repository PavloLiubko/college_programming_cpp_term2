#include <iostream> 

using namespace std;


int SumRange(int A, int B) {

	if (A >= B) {

		return 0;

	}

	else {

		int sum = 0;

		for (int i = A; i <= B; i++) {

			sum += i;

		}

		return sum;

	}

}

int main() {
	
	setlocale(LC_ALL, "UKR");

	int a, b;
	cout << "Введіть число-початок проміжку:";
	cin >> a;
	cout << "Введіть число-кінець проміжку:";
	cin >> b;

	cout << "Сума всіх цілих чисел проміжку = " << SumRange(a, b);
	

	return 0;
}
