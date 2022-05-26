// Week_11-12_Zadanie-5.cpp 
//11. Робот-автомобиль описывается как структура с полями: скорость, длительность
//движения и номер.Напишите функцию для расчёта пройденного расстояния.

#include <iostream>
#include <array>

using namespace std;


struct Car {
    float speed,way;
    int time, number;
};

Car cars[3];

int main()
{
    for (int i = 0; i < 3; i++) {
        {
            cars[i].time = 1 + rand() % 36;
            cars[i].speed = 1 + rand() % 280;
            cars[i].number = i;
            cars[i].way = cars[i].speed * cars[i].time;
            std::cout << "\nWay car " <<i<<":\t" << cars[i].way;
        }
    }


    
}

