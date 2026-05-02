#include <iostream>
#include <random>
using namespace std;

bool* isUnique(int** matrix, int rows) {
    bool* arr = new bool[rows];

    for (int j = 0; j < rows; j++) {
        bool columnIsUnique = true;

        for (int i = 0; i < rows - 1; i++) {
            for (int k = i + 1; k < rows; k++) {
                if (matrix[i][j] == matrix[k][j]) {
                    columnIsUnique = false; 
                    break;
                }
            }
            if (!columnIsUnique) break;
        }

        arr[j] = columnIsUnique; 
    }

    return arr;
}

int main()
{
    setlocale(LC_ALL, "UKR");
    srand(time(NULL));
    int n;
    cout << "Введіть кількість стовпичків та рядків матриці:";
    cin >> n;

    int** A = new int* [n];

    for (int i = 0; i < n; i++) {
    
        A[i] = new int[n];
    
    }

    for (int i = 0; i < n; i++) {
    
        for (int j = 0; j < n; j++) {
        
            A[i][j] = rand() % 90 + 10;
            cout << A[i][j] << '\t';
        
        }
        cout << '\n';
    }

    bool* UniquesArr = isUnique(A, n);

    int* sums = new int[n];

    for (int i = 0; i < n; i++) {
    
        sums[i] = 0;
    
    }

    for (int j = 0; j < n; j++) {
    
        if (UniquesArr[j]) {

            for (int i = 0; i < n; i++) {

                sums[j] += A[i][j];
               
            }
        }
    
    }

    cout << "\n Суми елементів ствопців, де всі елементи унікальні: \n";

    for (int i = 0; i < n; i++) {
    
        if (UniquesArr[i]) {
        
            cout << sums[i] << '\t';
        
        }
    
    }

    delete[] A;
    delete[] UniquesArr;
    delete[] sums;

    return 0;

}
