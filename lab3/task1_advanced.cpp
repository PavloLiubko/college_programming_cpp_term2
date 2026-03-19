#include <iostream> 
#include <string>

using namespace std;


int main() {


	string S;

	cout << "Введіть якийсь текст: " ;
	getline(cin, S);

	int left_brackets = 0;
	int right_brackets = 0;

	for (int i = 0; i < S.length(); i++) {
	
		if (S[i] == '(') left_brackets++;

		else if (S[i] == ')') right_brackets++;
	
	}

	if (left_brackets == right_brackets) {

		cout << "Кількість дужок збалансована.";

	}

	else {
	
		cout << "Кількість дужок незбалансована.";
	
	}

	return 0;
}
