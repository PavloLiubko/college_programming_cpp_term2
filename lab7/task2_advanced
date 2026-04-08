#include <iostream> 
#include <cmath>

using namespace std;

float GetLength(int a1, int b1, int a2, int b2) {

	return sqrt(pow((a1 - a2), 2) + pow((b1 - b2), 2));

}


int main() {
	
	setlocale(LC_ALL, "UKR");

	int x1, x2, x3, y1, y2, y3;
	cout << "Введіть абсцису першої вершини:";
	cin >> x1;
	cout << "Введіть ординату першої вершини:";
	cin >> y1;
	cout << "Введіть абсцису другої вершини:";
	cin >> x2;
	cout << "Введіть ординату другої вершини:";
	cin >> y2;
	cout << "Введіть абсцису третьої вершини:";
	cin >> x3;
	cout << "Введіть ординату третьої вершини:";
	cin >> y3;

	float line1 = GetLength(x1, y1, x2, y2);
	float line2 = GetLength(x1, y1, x3, y3);
	float line3 = GetLength(x2, y2, x3, y3);

	cout << "Периметр трикутника з вершинами у ваших точках = " << line1 + line2 + line3;

	return 0;
}
