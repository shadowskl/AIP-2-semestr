// Week_11-12_Zadanie-3.cpp 

//8. Имеется информация о датчиках : диапазон измеряемых значений(min, max),
//погрешность, максимальная скорость.Вывести данные о датчике с наибольшим
//диапазоном значений.

#include <iostream>
#include <array>

using namespace std;

struct Datchiki{
    int min,max;
    float Pogreshnost, MaxSpeed,diap;
};

Datchiki datch[5];

int main()
{
    int tochn;
    float DiapazonMax = 0;
    for (int i = 0; i < 5; i++) {
        datch[i].max = 100 + rand() % 200;
        datch[i].min = 1 + rand() % 20;
        datch[i].diap = datch[i].max + datch[i].min;

        if (datch[i].diap > DiapazonMax)
        {
            tochn = i;
        DiapazonMax = datch[i].diap;
    }
    }


    std::cout <<"Datchik s max diapazonom : "<<tochn<<"; S diapazonom izmereniya : " << DiapazonMax;
}

