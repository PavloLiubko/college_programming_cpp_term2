#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "UKR");

    int n;
    cout << "Введіть кількість стовпчиків та рядків для квадратної матриці:";
    cin >> n; 

    int** A = new int*[n];

    for (int i = 0; i < n; i++) {
    
        A[i] = new int[n];
    
    }

    for (int i = 0; i < n; i++) {
    
        for (int j = 0; j < n; j++) {
        
            cout << "Введіть якесь значення для елемента матриці:";
            cin >> A[i][j];
        
        }
    
    }

    cout << "\n Наша матриця: \n";

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            cout << A[i][j] << '\t';

        }
        cout << '\n';
    }

    int minus_counter = 0, plus_counter = 0;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            if (A[i][j] > 0) {
            
                plus_counter++;
            
            }
            else if ( A[i][j] < 0) {
            
                minus_counter++;
            
            }
        }
    }

    int* b = new int[minus_counter];
    int* c = new int[plus_counter];

    int add_plus_k = 0;
    int add_minus_k = 0;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            if (A[i][j] > 0) {

                c[add_plus_k] = A[i][j];
                add_plus_k++;

            }
            else if (A[i][j] < 0) {

                b[add_minus_k] = A[i][j];
                add_minus_k++;
            }
        }
    }


    int sum_minus = 0, sum_plus = 0;

    for (int i = 0; i < minus_counter; i++) {
    
        sum_minus += b[i];
    
    }

    for (int i = 0; i < plus_counter; i++) {

        sum_plus += c[i];

    }

    cout << "\nСума всіх додатніх елементів:" << sum_plus << ", сума всіх від'ємних елементів: " << sum_minus;

    delete[] A;
    delete[] b;
    delete[] c;



    return 0;

}
