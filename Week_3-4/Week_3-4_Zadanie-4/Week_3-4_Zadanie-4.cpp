// Week_3-4_Zadanie-4.cpp
//Пользователь задаёт число Ч и Х. Посчитать y:
//ݔЧ + ⋯ + ݔ4 − ݔ3 + ݔ2 − ݔ = ݕ .f

//y=x-2*x+3*x-4*x+...+Chislo*x;

#include <iostream>

int main()
{
    float x, y=0, Chislo;
    std::cout << "Vvedite Chislo i X\n";
    std::cin >> Chislo >> x;
    for (int i=1; i <= Chislo; i=i+2)
    {
        y = y + i * x;
    }
    for (int i = 2; i <= Chislo; i=i+2)
    {
        y = y - i * x;
    }

    std::cout << y;
}

