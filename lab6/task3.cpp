#include <iostream> 
#include <string>

using namespace std;


int main() {
	
	setlocale(LC_ALL, "UKR");

	struct Comand {

		string name;
		string city;
		int score;

	};

	int comands_amount;
	cout << "Введіть кількість команд, які бажаєте розглянути:";
	cin >> comands_amount;
	cin.ignore(1000, '\n');

	Comand* comands = new Comand[comands_amount];

	for (int i = 0; i < comands_amount; i++) {
		
		cout << "Введіть назву команди:";
		getline(cin, comands[i].name);
		cout << "Введіть місто команди:";
		getline(cin, comands[i].city);
		cout << "Введіть очки команди:";
		cin >> comands[i].score;
		cin.ignore(1000, '\n');

	}

	string* cities = new string[comands_amount];
	int counter = 0;
	for (int i = 0; i < comands_amount; i++) {

		bool exist = false;
		for (int j = 0; j < comands_amount; j++) {
		
			if (comands[j].city == cities[i]) {
				
				exist = true;
				break;
			
			}
			
		}
		
		if (!exist) {
		
			cities[counter] = comands[i].city;
			counter++;
		
		}

	}

	cout << "Міста, з яких прибули команди:\n";
	for (int i = 0; i < comands_amount; i++) {
	
		cout << cities[i] << '\t';
	
	}

	delete[] cities;
	delete[] comands;

	return 0;
}
