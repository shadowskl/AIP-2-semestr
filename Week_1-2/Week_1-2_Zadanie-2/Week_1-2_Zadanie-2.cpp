//2. Пользователь вводит параметры фигуры. Найти периметр и площадь фигур:  f. Салинон

#include <iostream>
#include <cmath>

#define _USE_MATH_DEFINES

int main()
{

    float r1, r2, S;
    float M_PI = 3.14;
    std::cout << "enter two radii\n";
    std::cin >> r1 >> r2;
    S = 0.25 * M_PI * ((r1 + r2) * (r1 + r2));
    std::cout << "answer:\t" << S;

    std::getchar();
}