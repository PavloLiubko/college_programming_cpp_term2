#include <iostream> 
#include <string>

using namespace std;


template <typename Any>
void FindTime(Any arr[], int n) {

	
	for (int i = 0; i < n; i++) {
		int total_seconds = (arr[i].end_time[0] * 3600 + arr[i].end_time[1] * 60 + arr[i].end_time[2]) - (arr[i].start_time[0] * 3600 + arr[i].start_time[1] * 60 + arr[i].start_time[2]);
		arr[i].total_time[0] = total_seconds / 3600;
		arr[i].total_time[1] = (total_seconds % 3600)/60;
		arr[i].total_time[2] = total_seconds % 60;
		
	}

}

int main() {
	
	setlocale(LC_ALL, "UKR");

	struct Player {
		string name[3]; // 0 - прізвище, 1 - ім'я, 2 - побатькові
		int start_time[3]; // 0 - години, 1 - хвилини, 2 - секунди
		int end_time[3]; // 0 - години, 1 - хвилини, 2 - секунди
		int total_time[3]; // 0 - години, 1 - хвилини, 2 - секунди
	};

	int players_amount;
	cout << "Введіть кількість гравців, яких бажаєте розглянути:";
	cin >> players_amount;
	cin.ignore(1000, '\n');

	Player* players = new Player[players_amount];

	for (int i = 0; i < players_amount; i++) {
		
		cout << "Введіть прізвище спортсмена:";
		getline(cin, players[i].name[0]);
		cout << "Введіть ім'я спортсмена:";
		getline(cin, players[i].name[1]);
		cout << "Введіть побатькові спортсмена:";
		getline(cin, players[i].name[2]);
		cout << "Введіть годину старту спортсмена:";
		cin >> players[i].start_time[0];
		cin.ignore(1000, '\n');
		cout << "Введіть хвилину старту спортсмена:";
		cin >> players[i].start_time[1];
		cin.ignore(1000, '\n');
		cout << "Введіть секунду старту спортсмена:";
		cin >> players[i].start_time[2];
		cin.ignore(1000, '\n');
		cout << "Введіть годину фінішу спортсмена:";
		cin >> players[i].end_time[0];
		cin.ignore(1000, '\n');
		cout << "Введіть хвилину фінішу спортсмена:";
		cin >> players[i].end_time[1];
		cin.ignore(1000, '\n');
		cout << "Введіть секунду фінішу спортсмена:";
		cin >> players[i].end_time[2];
		cin.ignore(1000, '\n');
	
	}

	FindTime(players, players_amount);
	cout << "Тест:\n";
	cout << "Наш перший спортсмен:" << players[0].name[0] << " " << players[0].name[1] << " " << players[0].name[2] << " і він пройшов весь рейс за " << players[0].total_time[0] << "годин, " << players[0].total_time[1] << "хвилин, " << players[0].total_time[2] << "секунд";

	delete[] players;

	return 0;
}
