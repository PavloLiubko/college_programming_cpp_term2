#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "UKR");
    int K;
    cout << "Введіть кількість рядків для видалення: ";
    cin >> K;

    string S = "Сюжет Cyberpunk 2077 розгортається у мегаполісі майбутнього — Найт-Сіті, де влада належить корпораціям, а модифікації тіла стали буденністю.\n Головний герой на ім’я Ві (V) намагається вижити у цьому жорстокому світі, виконуючи небезпечні замовлення як найманець.\n Під час чергового пограбування все йде шкереберть: Ві змушений вставити собі в голову унікальний біочип, на якому записана цифрова душа легендарного терориста та рокера Джонні Сільверхенда.\n Конфлікт гри будується навколо того, що особистість Джонні починає поступово стирати свідомість Ві, замінюючи її власною.Герой опиняється у гонці проти часу, шукаючи спосіб видалити чип і не померти. \n Гравцеві доводиться приймати складні моральні рішення, які впливають на долі друзів, політичну ситуацію в місті та фінал всієї історії.\nНайт - Сіті постає як яскрава, але гнила зсередини пастка, де кожен шукає слави, проте часто знаходить лише кулю";

    ofstream creator("lab17_1.txt");
    creator << S;
    creator.close();

    ifstream countFile("lab17_1.txt");
    string line;
    int total_lines = 0;
    while (getline(countFile, line)) {
        total_lines++;
    }
    countFile.close();

    int lines_to_keep = total_lines - K;

    ifstream inFile("lab17_1.txt");
    ofstream outFile("temp.txt");

    int current_line = 0;
    while (getline(inFile, line)) {
        current_line++;
        if (current_line <= lines_to_keep) {
            outFile << line << "\n";
        }
    }

    inFile.close();
    outFile.close();

    remove("lab17_1.txt");
    rename("temp.txt", "lab17_1.txt");


    return 0;
}
