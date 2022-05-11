// Week_3-4_Zadanie-5.cpp 
//3. Пользователь задаёт число Ч и Х. Посчитать y:
//j

#include <iostream>

int main()
{
    float  y; int Chislo, x;
    std::cout << "Vvedite Chislo i X\n";
    std::cin >> Chislo >> x;
    y = 0;
    for (int i = 0; i <= Chislo; i ++)
    {
        float b = (x ^ i);
        float c = (i + 1);
        y = (b/c) + y  ;
        std::cout << y<<"\n";
    }
    
    std::cout << y;
}

