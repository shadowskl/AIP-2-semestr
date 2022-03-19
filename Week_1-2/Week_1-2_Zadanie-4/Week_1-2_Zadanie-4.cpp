//4.Вычислите значение выражения:√ (x^2 + b)−[b^2*sin^3(x + a)] / x при a = 0.1, b = 0.2 и x = 1

#include <iostream>
#include <cmath> 

int main()
{
    float a = 0.1, b = 0.2, x = 1, Answer=1;
    Answer = sqrt((x*x)+b)-(((b*b)*(sin(x + a) * sin(x + a) * sin(x + a))/x));
    std::cout << Answer;
    std::getchar();
}