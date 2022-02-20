//3.Пользователь вводит два числа. Необходимо поменять значения переменных так, чтобы значение первой оказалось во второй, а второй - в первой.
#include <iostream>
int main() {
    float Number1, Number2;
    std::cout << "Enter two numbers\n";
    std::cin >> Number1 >> Number2;
    std::swap(Number1, Number2);
    std::cout << "Number1: " << Number1 << "\t"  << "Number2: " << Number2;
    std::getchar();
}