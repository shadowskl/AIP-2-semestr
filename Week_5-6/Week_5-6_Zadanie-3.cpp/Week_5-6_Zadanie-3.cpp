// Week_5-6_Zadanie-3.cpp 
// Дана функция y=f(x). Найти значение функции по x
//I.y = 2x^2-3, если x > 7
//  y = 0, если x = 7
//  y = 2 * | x | +3, если x < 7


#include <iostream>

int main()
{
    float x;
    std::cin >> x;
    if (x > 7)
        std::cout << 2 * (x * x) - 3;
    if (x == 7)
        std::cout << 0;
    if (x < 7)
        std::cout << 2 * fabs(x) + 3;
}