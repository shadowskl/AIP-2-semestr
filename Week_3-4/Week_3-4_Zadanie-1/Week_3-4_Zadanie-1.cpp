// Week_3-4_Zadanie-1.cpp
//Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
//равно номеру строки.Количество строк Н вводит пользователь(можно из файла)

#include <iostream>

int main()
{
    int H;
    std::cin >> H;
    while (H != 0) {
        for(int i=0;i<H;i++)
        std::cout << "0";
        std::cout << "\n";
        H = H - 1;
    }
}

