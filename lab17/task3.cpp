#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "UKR");

    ofstream inFile("lab17_3.txt");

    int amount, n;
    cout << "Введіть кількість чисел, які бажаєте ввести в файл:";
    cin >> amount;
    cout << "Введіть значення для n:";
    cin >> n;

    int counter = 0;
    for (int i = 0; i < amount; i++) {
    
        int temp;
        cout << "Введіть якесь число, яке буде вкладено в файл:";
        cin >> temp;
        inFile << temp << " ";
        if (temp > n) {
        
            counter++;
        
        }

    }


    inFile.close();

    cout << endl << "Кількість елементів у файлі, які більше ніж " << n << ": " << counter;


    return 0;
}
