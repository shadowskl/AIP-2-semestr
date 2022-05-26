// Week_11-12_Zadanie-1.cpp 
//1. Создайте структуру, которая хранит время: часы, минуты, секунды
//b. Написать функцию, которая сравнивает два времени. Возвращает true, если
//первый аргумент больше второго.

#include <iostream>
#include <array>

struct Time{
    int hours; int minutes; int seconds;
};

Time times[2];

int main()
{
    times[1].hours = 1 + rand() % 60;
    times[2].hours = 1 + rand() % 60;
    times[1].minutes = 1 + rand() % 60;
    times[2].minutes = 1 + rand() % 60;
    times[1].seconds = 1 + rand() % 60;
    times[2].seconds = 1 + rand() % 60;
    if (times[1].hours > times[2].hours)
        return true;
    if (times[1].hours < times[2].hours)
        return false;

    //std::cout << times[1].hours<<"\n"<< times[2].hours <<"\n"<< times[1].minutes <<"\n"<< times[2].minutes <<"\n" << times[1].seconds << "\n" << times[2].seconds << "\n";
}

