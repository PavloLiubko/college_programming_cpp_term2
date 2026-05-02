#include <iostream>
#include <string>

using namespace std;


int main()
{
    setlocale(LC_ALL, "UKR");

    string a;
    cout << "Введіть якесь речення:";
    getline(cin, a);

	int bigger_count;
	cout << "Введіть число-кількість літер. В залежності від нього ми будемо рахувати у яких слів їх більше(напр 7):";
	cin >> bigger_count;

    string* S = new string(a);

	int words_amount = 1;
	for (int i = 0; i < S->length(); i++) {

		if (a[i] == ' ') {

			words_amount += 1;

		}

	}

	int* probels = new int[words_amount];

	probels[0] = 0;
	int k = 1;
	for (int i = 1; i < S->length(); i++) {

		if (a[i] == ' ') {

			probels[k] = i + 1;
			k++;

		}

	}

	string* words = new string[words_amount];
	for (int i = 0; i < words_amount; i++) {

		if (i + 1 < words_amount) {
			words[i] = S->substr(probels[i], probels[i + 1] - probels[i] - 1);
		}

		else {
			words[i] = S->substr(probels[i], S->length() - probels[i]);
		}

	}

	int* words_length = new int[words_amount];

	for (int i = 0; i < words_amount; i++) {

		words_length[i] = words[i].length();

	}

	int counter_bigger = 0;
	for (int i = 0; i < words_amount; i++) {
	
		if (words_length[i] > bigger_count) {
		
			counter_bigger++;
		
		}

	}

	cout << "Кількість слів з кількістю літер більшою від числа, зазначеного вами:" << counter_bigger;


	delete S;
	delete[] probels;
	delete[] words;

    return 0;

}
