#include <iostream> 
#include <string>

using namespace std;

int sum = 0;

float sumr(float n) {


	if (n <= 0) {

		return 1;

	}

	else if (n > 0) {
	
		return  1 / (1 + n) + sumr(n - 1);
	
	}

}


int main() {
	
	setlocale(LC_ALL, "UKR");

	int n;
	cout << "Введіть кількість доданків, які бажаєте врахувати в суммі:";
	cin >> n;

	cout << "\n Результат фукнції:" << sumr(n);

	return 0;
}
