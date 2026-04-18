#include <iostream> 
#include <string>

using namespace std;

	struct Month {

		int number;
		string name;
		int day_amount;

	};

	Month months[11];

	void IdentifyMonth(Month arr[], int m) {
	
		cout << "У місяці " << months[m - 1].name << " " << months[m - 1].day_amount << " днів";
	
	}


int main() {
	
	setlocale(LC_ALL, "UKR");

	months[0].number = 1;
	months[0].name = "Січень";
	months[0].day_amount = 31;
	months[1].number = 2;
	months[1].name = "Лютий";
	months[1].day_amount = 28;
	months[2].number = 3;
	months[2].name = "Березень";
	months[2].day_amount = 31;
	months[3].number = 4;
	months[3].name = "Квітень";
	months[3].day_amount = 30;
	months[4].number = 5;
	months[4].name = "Травень";
	months[4].day_amount = 31;
	months[5].number = 6;
	months[5].name = "Червень";
	months[5].day_amount = 30;
	months[6].number = 7;
	months[6].name = "Липень";
	months[6].day_amount = 31;
	months[7].number = 8;
	months[7].name = "Серпень";
	months[7].day_amount = 31;
	months[8].number = 9;
	months[8].name = "Вересень";
	months[8].day_amount = 30;
	months[9].number = 10;
	months[9].name = "Жовтень";
	months[9].day_amount = 31;
	months[10].number = 11;
	months[10].name = "Листопад";
	months[10].day_amount = 30;
	months[11].number = 12;
	months[11].name = "Грудень";
	months[1].day_amount = 31;

	int number;
	cout << "Введіть порядковий номер місяця, який вас цікавить:";
	cin >> number;

	IdentifyMonth(months, number);

	return 0;
}
