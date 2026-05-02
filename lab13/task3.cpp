#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string MakeFirstUpper(string S) {

    for (int i = 0; i < S.length(); i++) {
    
        if (S[i] == ' ' && i < S.length()-1) {
        
            S[i + 1] = toupper(S[i + 1]);
        
        }

        else if (i == 0 && S[i] != ' ') {
        
            S[i] = toupper(S[i]);
        
        }
    
    }

    return S;

}

int main()
{
    setlocale(LC_ALL, "UKR");

    string a;
    cout << "Введіть якесь речення:";
    getline(cin, a);

    string* S = new string(a);

    cout << endl << MakeFirstUpper(*S);

    delete S;

    return 0;

}
