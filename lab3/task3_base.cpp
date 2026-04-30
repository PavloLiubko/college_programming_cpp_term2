#include <iostream> 
#include <string>

using namespace std;


int hasLetter(string row) {


	char letters[12] = { 'a', 'A', 'o', 'O', 'u', 'U', 'e', 'E', 'y', 'Y', 'i', 'I' };

	int result = 0;

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < row.length(); j++) {
			if (row[j] == letters[i]) {

				result += 1;

			}
		}

	}

	return result;

}

int main() {
	setlocale(LC_ALL, "UKR");

	string X, Y;

	cout << "Введіть якийсь текст: ";
	getline(cin, X);

	cout << "Введіть якийсь другий текст: ";
	getline(cin, Y);

	cout << "Кількість голосних в першому тексті: " << hasLetter(X) << endl << "Кількість голосних в другому тексті: " << hasLetter(Y);

	return 0;
}
