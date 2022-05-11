// Week_3-4_Zadanie-2.cpp 
//Протабулировать функцию (шаг и диапазон задаёт пользователь):
//f. ݕ = ඥ−(1 + 3ݔ/(2 + 3ݔ

#include <iostream>

//y = sqrt(-(1 + 3x) / 2) + 3x;


int main()
{
    float Shag, DiapNach, DiapKonec;
    std::cout << "Vvedite shag i diapazon\n";
    std::cin >> Shag >> DiapNach>>DiapKonec;
    for (DiapNach; DiapNach <= DiapKonec; DiapNach = DiapNach + Shag)
    {
        float y, x;
        x = DiapNach;
        y = -sqrt((1 + 3 * x) / 2) + 3 * x;
        std::cout << x << "\t" << y << "\n";
    }
}

