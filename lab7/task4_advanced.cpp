nclude <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float func1(float x) {

	if (log(x) >= -1 ) {return sqrt(1 + log(x));}


}

float func2(float x) {

	if (x != -1) { return (log(x + 1)) / (x + 1);}

}

float GetIntegral(float(*func)(float), float a, float b) {

	float h = (b - a) / 100; // висоти трапецій
	float points[100];

	float xi = a;
	for (int i = 0; i < 100; i++) {
		
		points[i] = func(xi);
		xi += h;
	
	}

	float sum = (points[0] + points[99])/2;
	for (int i = 1; i < 99; i++) {
	
		sum += points[i];

	}

	sum *= h;

	return sum;

}

int main()
{
	setlocale(LC_ALL, "UKR");

	float a1, a2, b1, b2;

	cout << "Введіть першу границю першої функції:";
	cin >> a1;
	cout << "Введіть другу границю першої функції:";
	cin >> b1;
	cout << "Введіть першу границю другої функції:";
	cin >> a2;
	cout << "Введіть першу границю другої функції:";
	cin >> b2;

	cout << "Результат нашого виразу:" << fixed << setprecision(3) << GetIntegral(func1, a1, b1) + GetIntegral(func2, a2, b2);


	return 0;
}
