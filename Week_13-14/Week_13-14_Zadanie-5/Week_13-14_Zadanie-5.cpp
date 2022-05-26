// Week_13-14_Zadanie-5.cpp 
//11. Вывести элементы массива, меньших среднего арифметического
#include <iostream>
#include <array>

using namespace std;

void Mass() {
    float SrArifm=0;
    array<int, 25>Massiv;
    for (int i = 0; i < 25; i++) {
        Massiv[i] = rand() % 50+1;
        SrArifm += Massiv[i];
        cout << Massiv[i] << endl;
    }
    SrArifm = SrArifm / 25;
    cout << SrArifm<<endl;

    for (int i = 0; i < 25; i++) {
        if (Massiv[i] < SrArifm)
            cout << "Men'she SrArifm:" << Massiv[i] << "\n";
    }
}

int main()
{
    Mass();
}

