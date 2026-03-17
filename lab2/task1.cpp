#include <iostream> 
#include <string>

using namespace std;

int main() {

	setlocale(LC_ALL, "UKR");

	
	string S;
	cout << "Введіть якийсь текст:";
	getline(cin, S);

	string result = "";

	for (int i = 0; i < S.length(); i++) {
	
		if (i == 0) {
		
			if (i + 1 < S.length()) {
			
				result += S[i];

				if (i + 2 < S.length()) {
				
					result += S[i+1];

				}

				result += ' ';
			
			}
		
		}

		if (S[i] == ' ' && i + 1 < S.length()) {
		
			result += S[i + 1];

			if (i + 2 < S.length()) {

				result += S[i + 2];

			}

			result += ' ';
		
		}

	}

	cout << "Наш кінцевий результат:" << result;

	return 0;
}
