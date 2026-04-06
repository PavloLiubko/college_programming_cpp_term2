#include <iostream> 

using namespace std;

const float PI = 3.14159;

float FindCylinderVolume(int R, int H) { return 2 * PI * R * H; }

int main() {
	
	setlocale(LC_ALL, "UKR");

	float h, r;
	cout << "Введіть висоту для циліндра:";
	cin >> h;
	cin.ignore(1000, '\n');
	cout << "Введіть радіус для циліндра:";
	cin >> r;
	cin.ignore(1000, '\n');

	cout << "Об'єм нашого циліндра:" << FindCylinderVolume(r, h);

	return 0;
}
