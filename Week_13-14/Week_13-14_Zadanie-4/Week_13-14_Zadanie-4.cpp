// Week_13-14_Zadanie-4.cpp
//7. Найти среднее арифметическое положительных/отрицательных

#include <iostream>
#include <array>

using namespace std;

void Elements() {
    int Pol = 0, Otric = 0,SummPol=0,SummOtric=0;
    float SrOtric = 0, SrPol = 0;
    array<int, 35>Elem;
    for (int i = 0; i < 35; i++)
    {
        Elem[i] = rand() % 50 - 25;
        if (Elem[i] >= 0)
        {
            Pol++;
            SummPol += Elem[i];
        }
        else {
            Otric++;
            SummOtric += Elem[i];
        }
        cout << Elem[i] << "\n";
    }
    SrOtric = (1.0*SummOtric) / Otric; SrPol = (1.0*SummPol) / Pol;
    cout << "Polozhitelnyx: " << Pol << "\nSrednee Polozhitelnyx: " << SrPol << "\nOtricatel'nyx: " << Otric << "\nSrednee Otricatel'nyx: " << SrOtric;
}

int main()
{
    Elements();
}
