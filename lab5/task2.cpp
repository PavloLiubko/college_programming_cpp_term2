#include <iostream> 
#include <string>

using namespace std;

template <typename Any>

void BubbleSort(Any arr[], int n) {

	for (int i = 0; i < n - i; i++) {
		bool swapped = false;
		for (int j = 0; j < n - i - 1; j++) {
		
			arr[j].road_time > arr[j + 1].road_time;
			Any Temporary = arr[j];
			arr[j] = arr[j+1];
			arr[j + 1] = Temporary;
			swapped = true;
			
		}
		if (!swapped) break;
	}

}


int main() {

	setlocale(LC_ALL, "UKR");

	struct Train {

		int number;
		string destination;
		float road_length;
		int start_time[2];
		int arriving_time[2];
		int road_time; //  в хвилинах

	};
	
	int schedules_amount;
	cout << "Введіть кількість потягів з розкладом:";
	cin >> schedules_amount;

	Train* schedules = new Train[schedules_amount];

	for (int i = 0; i < schedules_amount; i++) {
		
		cout << "Введіть номер потяга:";
		cin >> schedules[i].number;
		cin.ignore(1000, '\n');
		cout << "Введіть станцію призначення(місто):";
		getline(cin, schedules[i].destination);
		cout << "Введіть довжину шляху потяга(км):";
		cin >> schedules[i].road_length;
		cin.ignore(1000, '\n');
		cout << "Введіть годину від'їзду потяга:";
		cin >> schedules[i].start_time[0];
		cin.ignore(1000, '\n');
		cout << "Введіть хвилини від'їзду потяга:";
		cin >> schedules[i].start_time[1];
		cin.ignore(1000, '\n');
		cout << "Введіть годину прибуття потяга:";
		cin >> schedules[i].arriving_time[0];
		cin.ignore(1000, '\n');
		cout << "Введіть хвилини прибуття потяга:";
		cin >> schedules[i].arriving_time[1];
		cin.ignore(1000, '\n');
		schedules[i].road_time = (schedules[i].arriving_time[0] * 60 + schedules[i].arriving_time[1]) - (schedules[i].start_time[0] * 60 + schedules[i].start_time[1]);
	}

	BubbleSort(schedules, schedules_amount);

	cout << "Номер поїзду, що має найтриваліший час шляху:" << schedules[0].number;

	cout << "Потяги, які підходять умовам задачі: \n";
	for (int i = 0; i < schedules_amount; i++) {
	
		if ( schedules[i].destination == "Kyiv" || schedules[i].destination == "Київ" && schedules[i].start_time[0] >= 6 && schedules[i].arriving_time[0] <= 10) {
		
			cout << endl << "Номер потяга:" << schedules[i].number;
			cout << endl << "Станція призначення(місто):" << schedules[i].destination;
			cout << endl << "Довжина шляху потяга(км):" << schedules[i].road_length;
			cout << endl << "Годинa від'їзду потяга:" << schedules[i].start_time[0];
			cout << endl << "Хвилини від'їзду потяга:" << schedules[i].start_time[1];
			cout << endl << "Година прибуття потяга:" << schedules[i].arriving_time[0];
			cout << endl << "Хвилини прибуття потяга:" << schedules[i].arriving_time[1];
			cout << endl << "Час шляху потяга:" << schedules[i].road_time;
		
		}
	
	}

	delete[] schedules;

	return 0;
}
