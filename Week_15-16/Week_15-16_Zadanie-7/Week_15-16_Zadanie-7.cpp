// Week_15-16_Zadanie-7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//11. Реализовать вычисление матричных норм из списка выше (можно для квадратных
//матриц).
//1. L1-норма ||ܣ||ଵ = ݉ܽݔଵஸ௝ஸே ∑ |ܽ௜௝|
//ெ
//௜ୀଵ

#include <iostream>


using namespace std;

void matric() {
    const int n = 5, m = 5;
    int A[n][m], Summ = 0, a2;

    for (int i = 0; i < n; i++) {
        for (int u = 0; u < m; u++)
        {
            A[i][u] = rand() % 51-25;
            cout << A[i][u] << "\t";
        }
        cout << "\n";
    }

    cout << "\n";

    int max = 0;

    for (int i = 0; i < n; i++) {
        for (int u = 0; u < m; u++)
        {
            a2 = abs(A[i][u]);
            cout << a2 << "\t";
            Summ += a2;
        }
        if (Summ > max)
            max = Summ;
        Summ = 0;
        cout << "\n";
    }

    cout << "\nMAX = " << max;

}
    
    
    
int main()
{
    matric();
}

