#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "UKR");

    ofstream inFile("lab17_4.txt");

    int amount;
    cout << "Введіть кількість чисел, які бажаєте ввести в файл: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "Кількість має бути більшою за 0!" << endl;
        return 0;
    }

    for (int i = 0; i < amount; i++) {
        int temp;
        cout << "Введіть число №" << i + 1 << ": ";
        cin >> temp;
        inFile << temp << "\n";
    }
    inFile.close();

    ifstream CycleFile("lab17_4.txt");

    int maximum;
    string line;

    if (getline(CycleFile, line)) {
        maximum = stoi(line);
    }

    while (getline(CycleFile, line)) {
        int currentNumber = stoi(line);

        if (currentNumber > maximum) {
            maximum = currentNumber;
        }
    }

    CycleFile.close();

    cout << "\nНайбільший елемент у файлі: " << maximum;

    return 0;
}
