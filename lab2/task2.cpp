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

	int* words_length = new int[words_amount];

	for (int i = 0; i < words_amount; i++) {
	
		words_length[i] = words[i].length();
	
	}

	words_length[0] -= 1;

	int biggest = words_length[0];

	for (int i = 0; i < words_amount; i++) {
	
		if (biggest < words_length[i]) {
		
			biggest = words_length[i];
		
		}
	
	}

	int smallest = words_length[0];
	for (int i = 0; i < words_amount; i++) {

		if (smallest > words_length[i]) {

			smallest = words_length[i];

		}

	}

	cout << "Кількість символів у найбільшому слові = " << biggest << " кількість символів у найменшому слові = " << smallest;

	return 0;
}
