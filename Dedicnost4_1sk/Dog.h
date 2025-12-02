#pragma once

#include "Animal.h"
#include <string>

class Dog : public Animal {
public:
	// Konstruktor s inicializací základní tøídy
    Dog(const std::string& name, int age, const std::string& breed);
    ~Dog() override;

    const std::string& getBreed() const;

    // Pøepíše chování z Animal
    void speak() const override;
    void speakParent() const;

    void wagTail() const;

private:
    std::string mBreed;
};