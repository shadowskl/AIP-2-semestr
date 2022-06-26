// Week_15-16_Zadanie-5.cpp
//10. Реализовать сложение, вычитание, умножение, транспонирование матриц
//(разрешается фиксированный размер матриц).

#include <iostream>
using namespace std;


void matric() {
    const int rows = 5;
    const int cols = 5;
    int A[rows][cols], B[rows][cols], C[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int u = 0; u < cols; u++)
        {
            A[i][u] = rand() % 51 - 25;
            
            cout << A[i][u] << "\t";
        }
        cout << "\n";
    }

    cout << "\n";

    for (int i = 0; i < rows; i++) {
        for (int u = 0; u < cols; u++)
        {
            B[i][u] = rand() % 31 - 15;
            cout << B[i][u] << "\t";
        }
        cout << "\n";
    }

    cout << "\n";

    
    int Zadacha=0;

    cout << "Turn matematich zadachy :\n1 - '+'\n2 - '-'\n3 - 'A[][] * x'\n4 - Transpon\n";
    cin >> Zadacha;
    cout << "\n";



    if (Zadacha == 1) {
        for (int i = 0; i < rows; i++) {
            for (int u = 0; u < cols; u++) {
                C[i][u] = A[i][u] + B[i][u];
                cout << C[i][u] << "\t";

            }
            cout << "\n";
        }
    }


    if (Zadacha == 2) {
        for (int i = 0; i < rows; i++) {
            for (int u = 0; u < cols; u++) {
                C[i][u] = A[i][u] - B[i][u];
                cout << C[i][u] << "\t";

            }
            cout << "\n";
        }
    }


    if (Zadacha == 3) {
        int x = 0;
        cout << "Turn x - chislo - ";
        cin >> x;
        cout << endl;
        for (int i = 0; i < rows; i++) {
            for (int u = 0; u < cols; u++) {
                C[i][u] = A[i][u] * x;
                cout << C[i][u] << "\t";

            }
            cout << "\n";
        }
    }


    if (Zadacha == 4) {
        for (int i = 0; i < rows; i++) {
            for (int u = 0; u < cols; u++) {
                C[i][u] = A[u][i] ;

                cout << C[i][u] << "\t";

            }
            cout << "\n";
        }
    }






















}
    int main()
    {
        matric();
        return 0;
    }