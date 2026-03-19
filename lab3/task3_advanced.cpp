#include <iostream> 
#include <string>

using namespace std;

char ChangeSymbol(char symbol) {

	int code = (int)symbol;

	 code += 2;

	 char letter = code;

	 return letter;

}


int main() {

	setlocale(LC_ALL, "UKR");

	string S;

	cout << "Введіть якийсь текст:";
	getline(cin, S);

	for (int i = 0; i < S.length(); i++) {
	
		S[i] = ChangeSymbol(S[i]);
	
	}

	cout << "Змінений текст:" << S;

	return 0;
}
