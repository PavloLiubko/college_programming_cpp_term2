#include <iostream>

using namespace std;

int main() {

	float zero = 0.0, pi = 3.141593, Euler = 2.718282;
	float* ptr1 = &Euler;

	float arr[3];
	arr[0] = zero;
	arr[1] = pi;
	arr[2] = Euler;

	ptr1 = &arr[0];

	cout << ptr1 << "  =" << *ptr1 << endl;
	ptr1++; // k = 1
	cout << ptr1 << "  =" << *ptr1 << endl;
	ptr1++;
	cout << ptr1 << "  =" << *ptr1 << endl;
	
	// версія з відніманням константи

	cout << "\n\n\n\n\n";

	float arr2[3];
	arr[2] = zero;
	arr[1] = pi;
	arr[0] = Euler;

	ptr1 = &arr[2];

	cout << ptr1 << "  =" << *ptr1 << endl;
	ptr1--; // k = 1
	cout << ptr1 << "  =" << *ptr1 << endl;
	ptr1--;
	cout << ptr1 << "  =" << *ptr1 << endl;

	return 0;

}
