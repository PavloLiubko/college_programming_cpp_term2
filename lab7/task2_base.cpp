#include <iostream> 

using namespace std;

float maximum(float x, float y, float z) {

	if (x > y && x > z) { return x; }
	else if (z > x && z > y) { return z; }
	else { return y; }

}

int main() {
	
	setlocale(LC_ALL, "UKR");

	float a, b, c;
	cout << "Введіть число а:";
	cin >> a;
	cin.ignore(1000, '\n');
	cout << "Введіть число b:";
	cin >> b;
	cin.ignore(1000, '\n');
	cout << "Введіть число c:";
	cin >> c;
	cin.ignore(1000, '\n');

	cout << "Результат нашого виразу:" << (maximum(a, a + b, 0) + maximum(a, b + c, 0)) / (1 + maximum(a + b * c, b - c, 25));
	
	
	return 0;
}
