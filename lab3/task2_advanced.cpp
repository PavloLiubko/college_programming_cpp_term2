#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "UKR");

    string S;
    cout << "Введіть якийсь текст: ";
    getline(cin, S);

    if (S.length() == 0) return 0;

    int words_amount = 1;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == ' ') {
            words_amount++;
        }
    }

    int* probels = new int[words_amount];
    probels[0] = 0;
    int k = 1;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == ' ') {
            probels[k] = i + 1;
            k++;
        }
    }

    string* words = new string[words_amount];
    for (int i = 0; i < words_amount; i++) {
        if (i + 1 < words_amount) {
            words[i] = S.substr(probels[i], (probels[i + 1] - 1) - probels[i]);
        }
        else {
            words[i] = S.substr(probels[i]);
        }
    }

    int biggest_ind = 0;
    int smallest_ind = 0;

    for (int i = 1; i < words_amount; i++) {
        if (words[i].length() > words[biggest_ind].length()) {
            biggest_ind = i;
        }
        if (words[i].length() < words[smallest_ind].length()) {
            smallest_ind = i;
        }
    }

    cout << "\nТекст по словам: \n";
    for (int i = 0; i < words_amount; i++) {
        cout << words[i] << endl;
    }

    cout << "\nНайбільше слово: " << words[biggest_ind]
        << "\nНайменше слово: " << words[smallest_ind] << endl;

    delete[] probels;
    delete[] words;

    return 0;
}
