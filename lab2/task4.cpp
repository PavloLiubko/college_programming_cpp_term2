#include <iostream> 
#include <string>

using namespace std;

int main() {

	setlocale(LC_ALL, "UKR");

	string S;

	cout << "Введіть якийсь текст:";
	getline(cin, S);

	for (int i = 0; i < S.length(); i++) {
	
		if (S[i] == ' ' && S[i + 1] == ' ') {
		
			for (int j = i + 1; j < S.length() - 1; j++) {
			
				S[j] = S[j + 1];
			
			}
		
			S.resize(S.length() - 1);
			i--;
		}
	
	}

	cout << "Змінений рядок:" << S;

	return 0;
}
