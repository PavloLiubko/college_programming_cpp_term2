#include <iostream> 
#include <string>

using namespace std;

template <typename Any>

void BubbleSort(Any arr[], int n) {
	bool swapped;
	for (int i = 0; i < n - 1; i++) {
		swapped = false;
		for (int j = 0; j < n - i - 1; j++) {
		
			if (arr[j].grade < arr[j + 1].grade) {
			
				Any temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swapped = true;
			
			}
		
		}

		if (!swapped) break;
	}

}

int main() {

	setlocale(LC_ALL, "UKR");

	int students_amount, scholarships_amount;
	cout << "Введіть кількість студентів:";
	cin >> students_amount;
	cout << "Введіть кількість місць на стипендію:";
	cin >> scholarships_amount;

	struct Student {

		string surname;
		string name;
		int grade;
		string sex;

	};

	Student* Students_group = new Student[students_amount];

	for (int i = 0; i < students_amount; i++) {
	
		cout << endl << "Введіть фамілію студента:";
		cin >> Students_group[i].surname;
		cout << endl << "Введіть ім'я студента:";
		cin >> Students_group[i].name;
		cout << endl << "Введіть середній бал за сессію студента:";
		cin >> Students_group[i].grade;
		cout << endl << "Введіть стать студента(f/m):";
		cin >> Students_group[i].sex;
	}

	BubbleSort(Students_group, students_amount);

	Student* rating = new Student[scholarships_amount];

	for (int i = 0; i < scholarships_amount; i++) {
	
		rating[i] = Students_group[i];
	
	}
	
	for (int i = 0; i < scholarships_amount; i++) {
	
		if (rating[i].sex == "f") {
		
			cout << "Ім'я студентки: " << rating[i].name << endl;
			cout << "Фамілія студентки: " << rating[i].surname << endl ;
			cout << "Середній бал за сессію студентки: " << rating[i].grade << endl;
		
		}
	
	}

	delete[] rating;
	delete[] Students_group;

	return 0;
}
