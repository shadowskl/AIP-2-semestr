// Week_3-4_Zadanie-7.cpp
//4. Вывести на экран ряд натуральных чисел от Н до М с шагом Ш.Например, если
//Н = 10, М = 35, Ш = 5, то вывод должен быть таким : 10 15 20 25 30 35. Значения Н, М,
//Ш указываются пользователем(считываются с клавиатуры или из файла).

#include <iostream>

int main()
{
    float Ch1, Ch2;int Shag;
    std::cout << "Vvedite 2 chisla i shag\n";
    std::cin >> Ch1 >> Ch2 >> Shag;

    for (Ch1; Ch1 <=Ch2; Ch1 += Shag)
    {
        
        std::cout << Ch1 << "\n";
    }
}