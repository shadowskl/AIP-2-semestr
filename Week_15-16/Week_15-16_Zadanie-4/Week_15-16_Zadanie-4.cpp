// Week_15-16_Zadanie-4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//9. Объявить, реализовать заполнение данными с клавиатуры ИЛИ из файла и вывести
//на экран матрицу, описывающую следующие сущности.Предложите свой вариант.
//b.Состояние робота на шахматной доске.Робот характеризуется уровнем
//заряда, скоростью движения.

#include <iostream>

using namespace std;

void robot() {
    const int col = 5, row = 2;
    int mat[row][col];

    for (int i = 0; i < col; i++)
        for (int k = 0; k < row; k++) {
            cout << "Vvedite zaryad(0-100,%) & speed v kletke "<<k<<endl;
            cin >> mat[i][k];
        }
}

int main()
{
    robot();
    std::cout << "Hello World!\n";
}
