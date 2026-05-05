#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

using namespace std;

int main() {
    setlocale(LC_ALL, "UKR");

    int amount;
    cout << "Введіть кількість цифр, які бажаєте обробити:";
    cin >> amount;

    ofstream create("lab18_2.txt");

    for (int i = 0; i < amount; i++) {
    
        int temp;
        cout << "Введіть якесь число:";
        cin >> temp;
        create << temp << '\n';
    
    }
    create.close();

    ifstream inFile("lab18_2.txt");
    ofstream outFile("temp.txt");

    int number;
    int position = 1;

    if (!inFile.is_open()) return 0;

    while (inFile >> number) {
        if (position % 2 != 0 && number % 2 == 0) {
            outFile << number << "\n" << number << "\n";
        }
        else {
            outFile << number << "\n";    
        }
        position++;
    }

    inFile.close();
    outFile.close();

    remove("lab18_2.txt");
    rename("temp.txt", "lab18_2.txt");

    return 0;
}
