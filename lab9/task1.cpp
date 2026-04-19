#include <iostream> 
#include <cmath>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "UKR");

	// 1.1
	int num = 1;
	int num2 = 354;
	char letter = 'A';
	float buble = 1.55f;

	// 1.2

	int *pnum = &num;
	int* nptr = nullptr;
	int* ptr;

	// 1.3

	nptr = &num2;

	// 1.4 

	ptr = new int(52);

	// 1.5 

	cout << *ptr;
	// 1.6

	*pnum = 33;

	cout << '\n' << num;

	// 1.7 

	cout << '\n' << pnum << " -> " << *pnum;
	cout << '\n' << nptr << " -> " << *nptr;

	return 0;
}
