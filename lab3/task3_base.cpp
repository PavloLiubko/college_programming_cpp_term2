#include <iostream> 
#include <string>

using namespace std;


int hasLetter(string row) {


	char letters[12] = { 'a', 'A', 'o', 'O', 'u', 'U', 'e', 'E', 'y', 'Y', 'i', 'I'};

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

	string X, Y;

	cout << "Enter first text: " ;
	getline(cin, X);

	cout << "Enter second text: ";
	getline(cin, Y);

	cout << "Amount of vowels in first text: " << hasLetter(X) << endl << "Amount of vowels in second text: " << hasLetter(Y);

	return 0;
}
