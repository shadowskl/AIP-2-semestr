// Week_3-4_Zadanie-3.cpp
//Протабулировать функцию (шаг и диапазон задаёт пользователь):
//y = √5 + 4ݔ + 13ݔܿ + ݏ݋)12ݔ + 91)

//y=sqrt(5+4*x)+13*x+cos(12*x+91)
#include <iostream>
#include <cmath>

int main()
{
    float Shag, DiapNach, DiapKonec;
    std::cout << "Vvedite shag i diapazon\n";
    std::cin >> Shag >> DiapNach >> DiapKonec;
    for (DiapNach; DiapNach <= DiapKonec; DiapNach = DiapNach + Shag)
    {
        float y, x;
        x = DiapNach;
        y = sqrt(5 + 4 * x) + 13 * x + cos(12 * x + 91);
        std::cout << x << "\t" << y << "\n";
    }
}