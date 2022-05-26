// Week_13-14_Zadanie-3.cpp 
//8. Посчитать количество положительных/отрицательных элементов массива


#include <iostream>
#include <array>

using namespace std;

void Elements() {
    int Pol = 0, Otric = 0;
    array<int, 25>Elem;
    for (int i = 0; i < 25; i++)
    {
        Elem[i] = rand() % 50 - 25;
        if (Elem[i] >= 0)
            Pol++;
        else Otric++;
        cout << Elem[i] << "\n";
    }
    cout << "Polozhitelnyx: " << Pol << "\nOtricatel'nyx: " << Otric;
}

int main()
{
    Elements();
}

