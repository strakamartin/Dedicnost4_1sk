#include "kovařík_Pijavice.h"
#include <iostream>

pijavice::pijavice(const std::string& name, int age, const std::string& breed)
    : Animal(name, age, 0), mBreed(breed)
{
    std::cout << "Dog constructor called for " << mName << '\n';
}

pijavice::~pijavice() = default;

const std::string& pijavice::getBreed() const
{
    return mBreed;
}

void pijavice::speak() const
{
    std::cout << getName() << " (" << mBreed << ") Bruh Bruh\n";
}

void pijavice::speakParent() const
{
    Animal::speak();
}

void pijavice::wagTail() const
{
    std::cout << getName() << " Zakousne se do tebe\n";
}