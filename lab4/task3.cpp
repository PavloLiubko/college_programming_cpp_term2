#include <iostream> 
#include <string>

using namespace std;

int main() {

	setlocale(LC_ALL, "UKR");

	struct Program {

		string name;
		string genre;
		string live_time;

	};

	int programs_amount;
	cout << "Введіть кількість програм в ефірі протягом доби:";
	cin >> programs_amount;

	Program* programs = new Program[programs_amount];

	for (int i = 0; i < programs_amount; i++) {
		
		cout << endl << "Введіть назву програми:";
		cin >> programs[i].name;
		cout << endl << "Введіть жанр програми:";
		cin >> programs[i].genre;
		cout << endl << "Введіть час програми програми(Наприклад 19:00-20:30):";
		cin >> programs[i].live_time;

	}

	cout << "Програми на сьогодні: \n";
	for (int i = 0; i < programs_amount; i++) {

		cout << "Назва програми:" << programs[i].name << endl ;
		cout << "Жанр програми:" << programs[i].genre << endl;
		cout << "Час програми:" << programs[i].live_time << endl;

	}

	delete[] programs;


	return 0;
}
