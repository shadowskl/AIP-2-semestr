// Week_5-6_Zadanie-5.cpp 
//3. Напишите программу, которая принимает от пользователя координаты точки и определяет, попала ли точка в заштрихованную область.
//Е. y=e^-x; y=e^x; y=x^2

#include <iostream>

int main()
{
    float x, y;
    std::cin >> x >> y;
    if ((y <= exp(-x)) && (y >= x * x) && (y <= exp(x)))
        std::cout << "Yes";
    else std::cout << "No";
}