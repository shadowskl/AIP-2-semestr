// Week_13-14_Zadanie-1.cpp
//Сгенерировать массив со случайными числами в диапазоне:
//f. [0,20]

#include <iostream>
#include <array>
using namespace std;

void Mass() {
	array<int, 20>massiv;
	for (int i = 0; i < 20; i++)
	{
		massiv[i] = rand();
		cout << massiv[i] << "\n";
	}
}




int main() {
	Mass();
}
