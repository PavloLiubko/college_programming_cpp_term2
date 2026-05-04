#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {

    setlocale(LC_ALL, "UKR");


    ofstream file("greeting.txt", ios_base::out);

    string S;
    cout << "Введіть те, що хочете ввести в файл:";
    getline(cin, S);

    if (file.is_open()) {
        file << S;
    }

    return 0;
}
