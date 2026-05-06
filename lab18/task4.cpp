#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "UKR");

	ofstream outFile("lab18_3");
	int amount;
	cout << "Введіть кількість чисел: ";
	cin >> amount;

	double root = sqrt(amount);
	if (root - (long long)root > 0) {
		cout << "З цієї кількості чисел не можна зробити квадратну матрицю" << endl;
		return 0;
	}

	int N = (int)root; 

	for (int i = 0; i < amount; i++) {
		int temp;
		cout << "Введіть число " << i + 1 << ": ";
		cin >> temp;
		outFile << temp << " "; 
	}
	outFile.close();

	ifstream inFile("lab18_3");

	int totalInFile = 0;
	int dummy;
	while (inFile >> dummy) {
		totalInFile++;
	}

	if (totalInFile < amount) {
		cout << "Помилка: у файлі недостатньо чисел." << endl;
		return 0;
	}

	inFile.clear();
	inFile.seekg(0, ios::beg);

	for (int i = 0; i < totalInFile - amount; i++) {
		inFile >> dummy;
	}

	int** matrix = new int* [N];
	for (int i = 0; i < N; i++) {
		matrix[i] = new int[N];
	}

	cout << "\nСформована матриця " << N << "x" << N << ":" << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			inFile >> matrix[i][j];
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
	inFile.close();

	long long sum = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i > j) {
				sum += matrix[i][j];
			}
		}
	}

	cout << "\nСума елементів під головною діагоналлю: " << sum << endl;

	for (int i = 0; i < N; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;
}
