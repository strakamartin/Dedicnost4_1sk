#pragma once

#include <string>

class Animal {
public:
	// Konstruktor zakladní tøídy, ma stejny nazev jako trida
    Animal(const std::string& name,
        int age,
        int weight);
	// Virtualni destruktor pro spravne uvolneni pameti pri dedeni
	// destruktor ma stejny nazev jako trida, ale s tildou (~) pred ni
    virtual ~Animal();

    //dalsi metody
    const std::string& getName() const;
    int getAge() const;

    // Virtuální metoda, aby odvozené tøídy mohly pøepsat chování
    virtual void speak() const;

protected:
    std::string mName;
    int mAge;
	int mWeight;
};