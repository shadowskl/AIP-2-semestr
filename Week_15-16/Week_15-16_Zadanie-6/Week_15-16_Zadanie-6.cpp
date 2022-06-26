// Week_15-16_Zadanie-6.cpp
//11. Реализовать вычисление матричных норм из списка выше (можно для квадратных
//матриц).
//6..6
//ெ ଶ
//௝ୀଵ
//ே
//௜ୀଵ

#include <iostream>

using namespace std;

void matric() {
    const int n = 5, m = 5;
    int A[n][m], Summ=0,a2;

    for (int i = 0; i < n; i++) {
        for (int u = 0; u < m; u++)
        {
            A[i][u] = 1 + rand() % 9;
            cout << A[i][u] << "\t";
        }
        cout << "\n";
    }

    cout << "\n";


    for (int i = 0; i < n; i++) {
        for (int u = 0; u < m; u++)
        {
            a2 = A[i][u] * A[i][u];
            Summ += a2;
            cout << a2 << "\t";
        }
        cout << "\n";
    }

    cout << "\nSumma = "<<Summ;







}





int main()
{
    matric();
}

