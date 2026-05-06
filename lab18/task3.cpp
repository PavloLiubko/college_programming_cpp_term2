#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>

using namespace std;

int main()
{
	setlocale(LC_ALL, "UKR");

	ofstream outFile("lab18_3");

	string S = "Сюжет Cyberpunk 2077 розгортається у мегаполісі майбутнього — Найт-Сіті, де влада належить корпораціям, а модифікації тіла стали буденністю.\n Головний герой на ім’я Ві (V) намагається вижити у цьому жорстокому світі, виконуючи небезпечні замовлення як найманець.\n Під час чергового пограбування все йде шкереберть: Ві змушений вставити собі в голову унікальний біочип, на якому записана цифрова душа легендарного терориста та рокера Джонні Сільверхенда.\n Конфлікт гри будується навколо того, що особистість Джонні починає поступово стирати свідомість Ві, замінюючи її власною.Герой опиняється у гонці проти часу, шукаючи спосіб видалити чип і не померти. \n Гравцеві доводиться приймати складні моральні рішення, які впливають на долі друзів, політичну ситуацію в місті та фінал всієї історії.\nНайт - Сіті постає як яскрава, але гнила зсередини пастка, де кожен шукає слави, проте часто знаходить лише кулю";

	outFile << S;
	outFile.close();

	string line;

	ifstream inFile("lab18_3");


	int currentline = 0;

	char ch;
	int enterCounter = 1;
	while (inFile.get(ch)) {

		if (ch == '\n') enterCounter++;

	}

	inFile.clear();
	inFile.seekg(0, ios::beg);

	int* SymbAmount = new int[enterCounter];
	int counter = 0;
	while (getline(inFile, line)) {

		SymbAmount[counter] = line.length();
		counter++;
	}


	inFile.close();

	cout << "\n Кількість символів у кожному з рялдків:\n";
	for (int i = 0; i < enterCounter; i++) {
	
		cout << endl << SymbAmount[i];
	
	}

	return 0;
}
