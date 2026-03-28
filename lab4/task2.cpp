#include <iostream> 
#include <string>

using namespace std;

	template <typename Any>

	void LowQualityProducts(Any arr[], int n) {
		
		cout << " \n Товари, у яких термін придатності менше ніж 3 місяці: \n";
		for (int i = 0; i < n; i++) {
		
			if (arr[i].expiration_date < 3) {
			
				cout << "Назва товару:" << arr[i].name << endl;
				cout << "Ціна товару(грн):" << arr[i].cost << endl;
				cout << "Вага товару(кг):" << arr[i].wage << endl;
				cout << "Термін придатності товару(місяці):" << arr[i].expiration_date << endl;
			
			}
		
		}
	
	}

int main() {

	setlocale(LC_ALL, "UKR");

	int products_amount;
	cout << "Введіть кількість товарів:";
	cin >> products_amount;

	struct Product {

		string name;
		float cost;
		float wage;
		int expiration_date;

	};

	Product* products = new Product[products_amount];

	for (int i = 0; i < products_amount; i++) {
	
		cout << "Введіть назву вашого товару:";
		cin >> products[i].name;
		cout << "Введіть ціну вашого товару(грн):";
		cin >> products[i].cost;
		cout << "Введіть вагу вашого товару(кг):";
		cin >> products[i].wage;
		cout << "Введіть термін придатності вашого товару(місяці):";
		cin >> products[i].expiration_date;
	
	}

	LowQualityProducts(products, products_amount);

	delete[] products;

	return 0;
}
