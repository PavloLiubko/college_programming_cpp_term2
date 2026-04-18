#include <iostream> 
#include <string>

using namespace std;

float Areal(int n, int a, int b, int h) {

	switch (n) {
	
	case 1:
	
		return 0.5 * b * h;

		break;
	

	case 2:

		return b * a;

		break;

	case 3:

		return (a+b)/2 * h;

		break;

	default:
		return 0;
}

}

int main() {
	
	setlocale(LC_ALL, "UKR");

	int a, b, h, n;
	cout << "Введіть номер фігури, площу якої бажаєте отримати:";
	cin >> n;

	cout << "Введіть довину сторони а:";
	cin >> a;
	cout << "Введіть довину сторони b:";
	cin >> b;
	cout << "Введіть довину висоти h:";
	cin >> h;

	cout << "S = " << Areal(n, a , b, h);

	return 0;
}
