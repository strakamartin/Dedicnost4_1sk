// Dedicnost4_1sk.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include <algorithm>
#include "Dog.h"
#include "Cat.h"
#include "elephant.h"

//5 % 2 = 1  // 2 * 2 + 1
//7 % 5 = 2  // 5 * 1 + 2
//13 % 5 = 3 // 5 * 2 + 3
void writeOdd100()
{
	for (int i = 1; i <= 100; ++i)  // i += 2
    {
        //bud liche anebo delitelne 3
        if (i % 2 == 1 || i % 3 == 0)
            printf("%d ", i);
    }
}

// na sudych indexech anebo prvky jsou delitelne trema
void writeArrayCondition(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        if (i % 2 == 0 || arr[i] % 3 == 0)
            printf("%d ", arr[i]);
    }
}

int main()
{
    //skuska git 
	//tohle je okupace jjjj
	////vytvoreni instance tridy Animal
	//Animal animal("Generic Animal", 5, 20);
	//std::cout << "Jmeno: " << animal.getName() << ", Vek: " << animal.getAge() << '\n';
	//animal.speak();

	Elephant dumbo(4);
	dumbo.speak();
	dumbo.mCountry = "India";
	std::cout << "Elephant can carry " << dumbo.getCapacityOfPeople() << " people from " << dumbo.mCountry << '\n';

	/*Cat whiskers("Whiskers", 3, 10, "White", 7);
	whiskers.speak();

	Cat* catPtr = new Cat("Mittens", 2, 8, "Black", 5);
	catPtr->speak();

    Animal* a = &whiskers;
    a->speak();*/

	////dynamicka alokace pameti pro objekt tridy Animal
	//Animal* animal1 = new Animal("Generic Animal", 5, 20);
 //   animal1->speak();
	//delete animal1;

    //Dog rex("Rex", 4, "Labrador");
    //std::cout << "Jmeno: " << rex.getName() << ", Vek: " << rex.getAge() << ", Plemeno: " << rex.getBreed() << '\n';
    //rex.speak();
    //rex.speakParent();

    //rex.wagTail();

    ////Polymorfismus přes ukazatel na základní třídu
    //Animal* a = &rex;
    //a->speak();

    return 0;
}
