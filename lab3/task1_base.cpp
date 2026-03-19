#include <iostream> 
#include <string>

using namespace std;

bool hasLetter(char letter) {
	char letters[12] = { 'a', 'A', 'o', 'O', 'u', 'U', 'e', 'E', 'y', 'Y', 'i', 'I' };

	for (int i = 0; i < 12; i++) {
			if (letter == letters[i]) {

				return true;

			}

	}

	return false;

}

int main() {

	string S;

	cout << "Введіть якийсь текст:";
	getline(cin, S);
	int offset = 1;

	string temporary = S;
	for (int i = 0; i < S.length();i++ ) {

		if (hasLetter(S[i])) {
		
			temporary.insert(i + offset, 1, S[i]);
			offset++;
		}

	}

	cout << "Змінений рядок:" << temporary;

	return 0;
}
