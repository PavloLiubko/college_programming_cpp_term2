#include <iostream>
#include <fstream>
using namespace std;

int main() {

    setlocale(LC_ALL, "UKR");

    int a,b,c;
    cout << "Введіть якесь ціле число #1:";
    cin >> a;
    cout << "Введіть якесь ціле число #2:";
    cin >> b;
    cout << "Введіть якесь ціле число #3:";
    cin >> c;

    ofstream file1("lab16_2.txt", ios::out);

    if (file1.is_open()) {
    
        file1 << a << " ";
        file1 << b << " ";
        file1 << c << " ";

        file1.close();
    }

    ifstream file2("lab16_2.txt");

    int x, y, z;

    if (file2.is_open()) {

        file2 >> x >> y >> z;

    }

    ofstream file3("lab16_2.txt", ios::app);

    if (x + y > z && x + z > y && z + y > x) {
        
        file3 << "\n Ваші відрізки можуть утворювати трикутник";
    
    }
    else {
    
        file3 << "\n Ваші відрізки не можуть утворювати трикутник";

    
    }

    return 0;
}
