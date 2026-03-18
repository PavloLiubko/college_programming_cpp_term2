#include <iostream> 
#include <string>

using namespace std;


int main() {


	string S;

	cout << "Enter first text: " ;
	getline(cin, S);

	int left_brackets = 0;
	int right_brackets = 0;

	for (int i = 0; i < S.length(); i++) {
	
		if (S[i] == '(') left_brackets++;

		else if (S[i] == ')') right_brackets++;
	
	}

	if (left_brackets == right_brackets) {

		cout << "Bracket`s amount is balanced.";

	}

	else {
	
		cout << "Bracket`s amount isn`t balanced.";
	
	}

	return 0;
}
