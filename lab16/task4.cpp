#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
using namespace std;

int main() {

    setlocale(LC_ALL, "UKR");

    string S = "Сюжет Cyberpunk 2077 розгортається у мегаполісі майбутнього — Найт-Сіті, де влада належить корпораціям, а модифікації тіла стали буденністю.\n Головний герой на ім’я Ві (V) намагається вижити у цьому жорстокому світі, виконуючи небезпечні замовлення як найманець.\n Під час чергового пограбування все йде шкереберть: Ві змушений вставити собі в голову унікальний біочип, на якому записана цифрова душа легендарного терориста та рокера Джонні Сільверхенда.\n Конфлікт гри будується навколо того, що особистість Джонні починає поступово стирати свідомість Ві, замінюючи її власною.Герой опиняється у гонці проти часу, шукаючи спосіб видалити чип і не померти. \n Гравцеві доводиться приймати складні моральні рішення, які впливають на долі друзів, політичну ситуацію в місті та фінал всієї історії.\nНайт - Сіті постає як яскрава, але гнила зсередини пастка, де кожен шукає слави, проте часто знаходить лише кулю";

    ofstream OutFile("lab16_4.txt", ios::out);

    if (OutFile.is_open()) {
    
        OutFile << S;

        OutFile.close();
    
    }

    ifstream inFile("lab16_4.txt");
    ofstream tempOut("temp.txt");

    string currentLine, nextLine;

    if (getline(inFile, currentLine)) {
    
        while (getline(inFile, nextLine)) {
        
            tempOut << currentLine << '\n';
            currentLine = nextLine;

        }
    
    }
    inFile.close();
    tempOut.close();

    remove("lab16_4.txt");
    rename("temp.txt", "lab16_4.txt");

    return 0;
}
