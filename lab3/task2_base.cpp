#include <iostream> 
#include <string>

using namespace std;

int hasProbels(string row, int size) {

	int result = 0;
	for (int i = 0; i < size; i++) {
	
		if (row[i] == ' ') {
		
			result += 1;

		}

	}

	return result;

}

int hasDigit(string row, int size) {
	char digits[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	int result = 0;
	for (int i = 0; i < 10; i++) {

		for (int j = 0; j < size; j++) {
		
			if (digits[i] == row[j]) {
				
				result += 1;
			
			}
		
		}

	}

	return result;

}

int main() {

	setlocale(LC_ALL, "UKR");

	string S;

	cout << "Введіть якийсь текст:";
	getline(cin, S);

	cout << "Кількість пробілів: " << hasProbels(S, S.length()) << " Кількість цифр: " << hasDigit(S, S.length());

	return 0;
}
