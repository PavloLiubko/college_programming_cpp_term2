#include <iostream>
#include <random>

using namespace std;

int findMax(int arr[], int n) {

    int maximum = 0;
    for (int i = 0; i < n; i++) {
    
        if (arr[maximum] < arr[i] ) {
        
            maximum = i;
        
        }
    
    }

    return maximum;
}

int findMin(int arr[], int n) {

    int minimum = 0;
    for (int i = 0; i < n; i++) {

        if (arr[minimum] > arr[i]) {

            minimum = i;

        }

    }

    return minimum;
}


int main()
{
    setlocale(LC_ALL, "UKR");
    srand(time(NULL));

    int rows, columns;
    cout << "Введіть кількість рядків  матриці:";
    cin >> rows;
    cout << "Введіть кількість стовпців  матриці:";
    cin >> columns;

    int** A = new int* [rows];

    for (int i = 0; i < rows; i++) {
    
        A[i] = new int[columns];
    
    }

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < columns; j++) {

            A[i][j] = rand() % 100 + 1;
            cout << A[i][j] << '\t';

        }
        cout << '\n';
    }


    int* dobutki = new int[columns];

    for (int i = 0; i < columns; i++) {
    
        dobutki[i] = 1;
    
    }

    for (int i = 0; i < rows; i++) {
    
        for (int j = 0; j < columns; j++) {
        
            dobutki[i] *= A[i][j];
        
        }
    
    }

    int* b = new int[2 * columns];

    int k = 0;
    for (int j = 0; j < columns; j++) {
    
        int* temporary_arr = new int[columns];

        for (int i = 0; i < columns; i++) {
        
            temporary_arr[i] = A[i][j];
        
        }

        int minimal_ind = findMin(temporary_arr, columns);
        int maximal_ind = findMax(temporary_arr, columns);
    
        b[k] = dobutki[maximal_ind];
        b[k+1] = dobutki[minimal_ind];
        k += 2;

        delete[] temporary_arr;
    }

    cout << "\n Наш утворений масив b: \n";

    for (int i = 0; i < 2 * columns; i++) {
    
       cout << b[i] << '\t';
    
    }

    delete[] b;
    delete[] dobutki;
    delete[] A;

    return 0;

}
