// Week_15-16_Zadanie-3.cpp 
//8. Дана матрица. Элементы первой строки — мощность электромотора, второй строки
//— категория мотора(число от 1 до 3).Найти самый мощный мотор категории 3.

#include <iostream>
using namespace std;
void matric() {
    int Summ = 0;
    const int rows = 2;
    const int cols = 5;
    int mat[rows][cols];

    for (int i = 1; i < rows; i++)
        for (int k = 0; k < cols; k++)
            mat[i][k] = rand() % 4;

    for (int i = 0; i < 1; i++)
        for (int k = 0; k < cols; k++)
            mat[i][k] = 1+ rand() % 1000;

    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < cols; k++)
            std::cout << mat[i][k] << "\t";
        std::cout << std::endl;
    }

    int max = -1;

    for (int k = 0; k < cols; k++) {
        if (mat[1][k] > max)
        {
            max = k;
            cout << mat[0][k] << endl;
        }

    }
    cout << max<<endl;
}

int main()
{
    matric();
}

