// Week_15-16_Zadanie-2.cpp 
//5. В квадратной матрице для каждой строки найти минимальный элемент и
//переставить его с элементом, стоящим в этой строке на главной диагонали.


#include <iostream>
using namespace std;
void matric() {
    int Summ = 0, min = 50;
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
        for (int k = 0; k < cols; k++) {
            if (min > mat[i][k])
                min = mat[i][k];
        }
        mat[i][i] = min;
        min = 50;
    }

    std::cout << std::endl;

    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < cols; k++)
            std::cout << mat[i][k] << "\t";
        std::cout << std::endl;
    }
}

int main()
{
    matric();
}

