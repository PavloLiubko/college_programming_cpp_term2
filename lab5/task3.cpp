#include <iostream> 
#include <string>

using namespace std;

float FindProcent(float a, float b) {

	return  (a /b) * 100 ;

}

int main() {
	
	setlocale(LC_ALL, "UKR");

	struct Voter {

		string name_surname_fatherName;
		string home_address[3];
		string passport_number;
		string passport_series;
		int birth_date[2];
		char has_voted;

	};

	int voters_amount;
	cout << "Введіть кількість виборців, яких бажаєте розглянути:";
	cin >> voters_amount;
	cin.ignore(1000, '\n');

	Voter* voters = new Voter[voters_amount];

	for (int i = 0; i < voters_amount; i++) {
	
		cout << "Введіть ПІП виборця:";
		getline( cin, voters[i].name_surname_fatherName);
		cout << "Введіть вулицю, на якій проживаєте:";
		getline(cin, voters[i].home_address[0]);
		cout << "Введіть номер будинку, в якому проживаєте:";
		getline(cin, voters[i].home_address[1]);
		cout << "Введіть номер квартири, в якій проживаєте:";
		getline(cin, voters[i].home_address[2]);
		cout << "Введіть номер вашого паспорту:";
		getline(cin, voters[i].passport_number);
		cout << "Введіть серію вашого паспорту:";
		getline(cin, voters[i].passport_series);
		cout << "Введіть свій рік народження:";
		cin >> voters[i].birth_date[0];
		cin.ignore(1000, '\n');
		cout << "Введіть номер місяця свого народження:";
		cin >> voters[i].birth_date[1];
		cin.ignore(1000, '\n');
		cout << "Введіть чи проголосували до цього моменту часу?(+/-):";
		cin >> voters[i].has_voted;
		cin.ignore(1000, '\n');
	}


	int max_age;
	cout << "Введіть найбільший вік виборців, яких бажаєте побачити:";
	cin >> max_age;

	int has_voted_counter_1 = 0;
	for (int i = 0; i < voters_amount; i++) {
	
		if (voters[i].has_voted == '+' && (2026 - voters[i].birth_date[0]) < max_age) {
		
			has_voted_counter_1 += 1;
		
		}
	
	}

	cout << "Процент виборців, які проголосували та молодші ніж " << max_age << " років:" << FindProcent(has_voted_counter_1, voters_amount) << "%";

	int has_voted_counter_2 = 0;
	for (int i = 0; i < voters_amount; i++) {

		if (voters[i].has_voted == '+' && voters[i].home_address[0] == "Zegelya" || voters[i].home_address[0] == "Зегеля") {

			has_voted_counter_2 += 1;

		}

	}
	
	cout << endl << "Кількість виборців, які проголосували та живуть на вулиці Зегеля:" << has_voted_counter_2;

	delete[] voters;

	return 0;
}
