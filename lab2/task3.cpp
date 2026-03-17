#include <iostream> 
#include <string>

using namespace std;

int main() {

	setlocale(LC_ALL, "UKR");

	string S;

	cout << "Введіть якийсь текст:";
	getline(cin, S);

	int words_amount = 1;
	for (int i = 0; i < S.length(); i++) {

		if (S[i] == ' ') {

			words_amount += 1;

		}

	}

	int* probels = new int[words_amount];

	probels[0] = 0;
	int k = 1;
	for (int i = 1; i < S.length(); i++) {
	
		if (S[i] == ' ') {
		
			probels[k] = i+1;
			k++;
		
		}
	
	}

	string* words = new string[words_amount];
	for (int i = 0; i < words_amount; i++) {

		if (i + 1 < words_amount) {
			words[i] = S.substr(probels[i], probels[i + 1] - probels[i]);
		}

		else {
			words[i] = S.substr(probels[i], S.length() - probels[i]);
		}

	}

	cout << "Перший пробіл має позицію: " << probels[1] << " Останнє слово рядку:" << words[words_amount-1];


	delete[] probels;
	delete[] words;

	return 0;
}
