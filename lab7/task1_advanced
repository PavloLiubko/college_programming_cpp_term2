#include <iostream> 
#include <cmath>

using namespace std;

float f(float x, float y) {

	return (pow(x,2) + x * y - pow(y,2))/(1 + x + y) + (x - y)/(pow(x,2) + pow(y, 2) + 2);

}

int main() {
	
	setlocale(LC_ALL, "UKR");

	float a, b;
	cout << "Введіть якесь значення для параметру а:";
	cin >> a;
	cout << "Введіть якесь значення для параметру b:";
	cin >> b;

	float u = f(0.5, a) + f(a + b, a - b);

	cout << "Результат виразу:" << u;

	return 0;
}
