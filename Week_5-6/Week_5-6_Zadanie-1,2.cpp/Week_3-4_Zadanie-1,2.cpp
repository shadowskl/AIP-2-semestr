// Week_3-4_Zadanie-1,2.cpp 
//1. ���� ������� y=f(x). ����� �������� ������� �� x:
//F. y = 2x^2 + 10, ���� x > 5
//   y = 0, ���� x = 0
//   y = 2 * | x + 6 | -x^2, ���� x < 5

#include <iostream>

int main()
{
    float x;
    std::cin >> x;

    if (x > 5)
        std::cout << 2 * (x * x) + 10;
    else if (x == 0)

        std::cout << 0 * x;
    else if (x < 5)
        std::cout << 2 * fabs(x + 6) - (x * x);
    

}

