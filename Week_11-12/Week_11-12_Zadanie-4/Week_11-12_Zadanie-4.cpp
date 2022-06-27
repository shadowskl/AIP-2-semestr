// Week_11-12_Zadanie-4.cpp 
//6. Имеется информация о датчиках: диапазон измеряемых значений (min, max),
//погрешность, максимальная скорость.Вывести данные о самом точном датчике.

#include <iostream>
#include <array>

using namespace std;

struct Datchiki {
    int min, max;
    float Pogreshnost, MaxSpeed, diap;
};

Datchiki datch[5];

int main()
{
    int tochn;
    float Tochnost = 100;
    for (int i = 0; i < 5; i++) {

        datch[i].max = 100 + rand() % 200;
        datch[i].min = 1 + rand() % 20;
        datch[i].diap = datch[i].max + datch[i].min;

        datch[i].Pogreshnost = 0.05 * (rand() % 30);
        //cout << datch[i].Pogreshnost << "\n";
        if (datch[i].Pogreshnost < Tochnost)
        {
            tochn = i;
            Tochnost = datch[i].Pogreshnost;
        }

        }

    std::cout <<"Samiy tochniy datchik : "<<tochn<<"  s pogreshnostyu : "<< Tochnost;
}

