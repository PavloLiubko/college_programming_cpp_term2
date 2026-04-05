#include <iostream> 
#include <string>

using namespace std;


template <typename Any>

void BubbleSort_earned_money(Any arr[], int n) {

	for (int i = 0; i < n - 1; i++) {
		bool swapped = false;
		for (int j = 0; j < n - i - 1; j++) {
		
			if (arr[j].earned_money > arr[j + 1].earned_money) {
			
				Any temporary = arr[j+1];

				arr[j+1] = arr[j];
				arr[j] = temporary;
				swapped = true;
			}
		
		}
		if (!swapped) break;
	}

}
template <typename Any>

void BubbleSort_realise_year(Any arr[], int n) {

	for (int i = 0; i < n - 1; i++) {
		bool swapped = false;
		for (int j = 0; j < n - i - 1; j++) {

			if (arr[j].realise_year > arr[j + 1].realise_year) {

				Any temporary = arr[j + 1];

				arr[j + 1] = arr[j];
				arr[j] = temporary;
				swapped = true;
			}

		}
		if (!swapped) break;
	}


}


template <typename Any>

void MostMoney(Any arr[], int n) {

	Any* newest = new Any[n];

	for (int i = 0; i < n; i++) {
	
		if (arr[i].realise_year >= 1991) {
		
			newest[i] = arr[i];
		
		}
	
	}


	BubbleSort_earned_money(newest, n);

	cout << endl << "Фільм, який набрав найбільшу касу і вийшов після 1991р: \n";

		cout << endl << "Назва фільму: " << newest[n-1].name;
		cout << endl << "Фамілія режисера: " << newest[n-1].director[0];
		cout << endl << "Ім'я режисера: " << newest[n-1].director[1];
		cout << endl << "Країна-виробник фільму:" << newest[n-1].country;
		cout << endl << "Рік випуску фільму: " << newest[n-1].realise_year;
		cout << endl << "Ціна створення фільму: " << newest[n-1].cost;
		cout << endl << "Зароблені з фільму гроші: " << newest[n-1].earned_money;


}

template <typename Any>
void MoviesChronic(Any arr[], int n) {

	BubbleSort_realise_year(arr, n);

	cout << "\n\n Фільми, по хронології:";

	for (int i = 0; i < n; i++) {
	
		cout << endl << "Назва фільму: " << arr[i].name;
		cout << endl << "Фамілія режисера: " << arr[i].director[0];
		cout << endl << "Ім'я режисера: " << arr[i].director[1];
		cout << endl << "Країна-виробник фільму:" << arr[i].country;
		cout << endl << "Рік випуску фільму: " << arr[i].realise_year;
		cout << endl << "Ціна створення фільму: " << arr[i].cost;
		cout << endl << "Зароблені з фільму гроші: " << arr[i].earned_money;

	
	}

}




int main() {
	
	setlocale(LC_ALL, "UKR");

	struct Movie {
		string name;
		string director[2];
		string country;
		int realise_year;
		int cost;
		int earned_money;
	};

	int movies_amount;
	cout << "Введіть кількість фільмів, які бажаєте розглянути:";
	cin >> movies_amount;
	cin.ignore(1000, '\n');

	Movie* movies = new Movie[movies_amount];

	for (int i = 0; i < movies_amount; i++) {
	
		cout << "Введіть назву фільму:";
		getline(cin, movies[i].name);
		cout << "Введіть прізвище режисера фільму:";
		getline(cin, movies[i].director[0]);
		cout << "Введіть ім'я режисера фільму:";
		getline(cin, movies[i].director[1]);
		cout << "Введіть країну-виробник фільму:";
		getline(cin, movies[i].country);
		cout << "Введіть рік релізу фільму:";
		cin >> movies[i].realise_year;
		cin.ignore(1000, '\n');
		cout << "Введіть загальну ціну виробництва фільму(долари):";
		cin >> movies[i].cost;
		cin.ignore(1000, '\n');
		cout << "Введіть касу, яку зібрав фільм(долари):";
		cin >> movies[i].earned_money;
		cin.ignore(1000, '\n');
	
	}

	MostMoney(movies, movies_amount);

	MoviesChronic(movies, movies_amount);

	delete[] movies;

	return 0;
}
