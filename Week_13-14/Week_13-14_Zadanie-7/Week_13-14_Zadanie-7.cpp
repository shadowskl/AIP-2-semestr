// Week_13-14_Zadanie-7.cpp 
//20. Имеется информация об N членах спортивной секции: фамилия, возраст, рост.
//Ввести информацию о каждом.
//a.Напечатать фамилию самого высокого.
//b.Напечатать фамилии и возраст чей возраст выше среднего.
//f.Ввести информацию по участникам соревнований и вывести информацию о
//победителе в каждом виде спорта


#include <iostream>
#include <array>

using namespace std;

struct Person {
	int age;
	float height;
	string surname;
};

Person people[10];

int main()
{
	people[0].surname = " Davis";
	people[1].surname = " Gonzalez";
	people[2].surname = "  Smith";
	people[3].surname = "  Williams";
	people[4].surname = "  Boyd";
	people[5].surname = "  Baker";
	people[6].surname = "  Stanley";
	people[7].surname = "  Hoffman";
	people[8].surname = "  Arnold";
	people[9].surname = "  Rice";
	int MaxHeight = 0;
	float SrAge = 0;
	for (int i = 0; i < 10; i++)
	{
		people[i].height = 150 + rand() % 65;
		people[i].age = 1 + rand() % 32;
		
		if (MaxHeight < people[i].height)
			MaxHeight = people[i].height;
		SrAge += people[i].age;
	}
	SrAge = SrAge / 10;
	cout << "SrAge : " << SrAge;
	for (int i = 0; i < 10; i++)
	{
		if (people[i].age > SrAge)
		{
			cout << "\nFamilia :" << people[i].surname << "\t Age : " << people[i].age;
		}
	}
	cout << "\n Max Height : "<<MaxHeight;
}

