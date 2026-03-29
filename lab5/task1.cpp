#include <iostream> 
#include <string>

using namespace std;

int main() {

	setlocale(LC_ALL, "UKR");

	struct Toy {

		string name;
		string assembly_address;
		float cost;
		char is_sport;
		int age[2];

	};

	int toys_amout;
	cout << "Введіть кількість іграшок на продаж:";
	cin >> toys_amout;
	cin.ignore(1000, '\n');

	Toy* toys = new Toy[toys_amout];

	for (int i = 0; i < toys_amout; i++) {
	
		cout << endl << "Введіть назву іграшки:";
		getline(cin, toys[i].name);
		cout << endl << "Введіть адрес заводу-виготовника іграшки(місто, вулиця, номер будинку):";
		getline(cin, toys[i].assembly_address);
		cout << endl << "Введіть ціну іграшки:";
		cin >> toys[i].cost;
		cin.ignore(1000, '\n');
		cout << endl << "Введіть чи може іграшка використовуватись для спортивних ігор(+/-):";
		cin >> toys[i].is_sport;
		cin.ignore(1000, '\n');
		cout << endl << "Введіть вік від якого можна гратись іграшкою:";
		cin >> toys[i].age[0];
		cin.ignore(1000, '\n');
		cout << endl << "Введіть вік до якого можна слід іграшкою:";
		cin >> toys[i].age[1];
		cin.ignore(1000, '\n');
		
	
	}

	int max_age;
	cout << "Введіть максимальний вік вікової категорії:";
	cin >> max_age;

	int counter = 0;
	for (int i = 0; i < toys_amout; i++) {
	
	
		if (toys[i].age[1] < max_age && toys[i].is_sport == '+') {
		
			counter += 1;
		
		}
	
	}

	cout << "Кількість іграшок, які підходять критеріям:" << counter;

	delete[] toys;

	return 0;
}
