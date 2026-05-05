#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "UKR");

    string S = " int main()  { setlocale(LC_ALL, \"UKR\"); \n cout << \"Hello world\"  } ";

    ofstream outFile("lab18_1");
    outFile << S;

    outFile.close();

    ifstream inFile("lab18_1");
    char ch;

    int breackets = 0, figure_breackets = 0;

    while (inFile.get(ch)) {
    
        if (ch == '(' || ch == ')') {
        
            breackets++;
        
        }
        else if (ch == '{' || ch == '}') {

            figure_breackets++;

        }

    }

    inFile.close();


    if (breackets % 2 == 0 ) {
    
        cout << "Кількість звичайних дужок збалансована  \n";
    
    }

    else {
    
        cout << "Кількість звичайних дужок не збалансована  \n";

    
    }

    if (figure_breackets % 2 == 0) {

        cout << "Кількість фігурних дужок збалансована  \n";

    }

    else {

        cout << "Кількість фігурних дужок не збалансована  \n";


    }


    return 0;
}
