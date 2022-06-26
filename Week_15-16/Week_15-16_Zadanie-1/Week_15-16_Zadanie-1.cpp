// Week_15-16_Zadanie-1.cpp 
//3. В квадратной матрице, найти сумму отрицательных элементов, лежащих на главной
//диагонали.
//

#include <iostream>
using namespace std;
void matric() {
    int Summ = 0;
    const int rows = 5;
    const int cols = 5;
    int mat[rows][cols];

    for (int i = 0; i < rows; i++)
        for (int k = 0; k < cols; k++)
            mat[i][k] = rand() % 51 - 26;
    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < cols; k++)
            std::cout << mat[i][k] << "\t";
        std::cout << std::endl;
    }


    for (int i = 0; i < rows; i++) {
        if (mat[i][i] < 0)
            Summ++;
    }
    cout << Summ;
}

int main()
{
    matric();
}

