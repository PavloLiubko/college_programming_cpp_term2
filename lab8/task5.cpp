#include <iostream> 
#include <cmath>

using namespace std;

int sum = 0;

float sumProgression(float n, float b1, float q) {


	if (n <= 1) {

		return b1;

	}

	else if (n > 1) {
	
		return  b1*pow(q, n-1) + sumProgression(n - 1, b1, q);
	
	}

}


int main() {
	
	setlocale(LC_ALL, "UKR");

	int n, b1, q;
	cout << "Введіть кількість членів геометричної прогресії:";
	cin >> n;
	cout << "Введіть перший член геометричної прогресії:";
	cin >> b1;
	cout << "Введіть знаменник геометричної прогресії:";
	cin >> q;

	cout << "\n Результат фукнції:" << sumProgression(n, b1, q);

	return 0;
}
