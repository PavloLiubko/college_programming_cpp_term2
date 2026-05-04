#include <iostream>
#include <fstream>
using namespace std;

int main() {

    setlocale(LC_ALL, "UKR");

    int n;
    cout << "Введіть якесь ціле число:";
    cin >> n;

    if (n <= 0) return 0;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {

        arr[i] = 0;
    }

    int counter = 0;
    for (int i = 1; i < n; i++) {
    
        if (n % i == 0) {
        
            arr[counter] = i;
            counter++;
        }
    
    }


    ofstream file("lab16.txt", ios_base::out);

    for (int i = 0; i < n; i++) {

        if (file.is_open()) {
        
            if (arr[i] != 0) {
            
                file << arr[i];
            
            }

        }

    }

    file.close();
    
    delete[] arr;

    return 0;
}
