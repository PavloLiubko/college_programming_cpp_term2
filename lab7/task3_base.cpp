#include <iostream> 
#include <string>

using namespace std;

string Mix(string str) {

	for (int i = 0; i < str.length()/2; i++) {
	
		char temp = str[i];

		str[i] = str[str.length() - 1 - i];
		str[str.length() - 1 - i] = temp;

	}

	return str;

}


int main() {
	
	setlocale(LC_ALL, "UKR");

	string number;
	cout << "Введіть якесь натуральне число:";
	cin >> number;
	cin.ignore(1000, '\n');

	cout << "Наше змінене число:" << Mix(number);
	
	return 0;
}
