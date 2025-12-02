#include "Dog.h"
#include <iostream>

Dog::Dog(const std::string& name, int age, const std::string& breed)
    : Animal(name, age, 0), mBreed(breed)
{
	std::cout << "Dog constructor called for " << mName << '\n';
}

Dog::~Dog() = default;

const std::string& Dog::getBreed() const
{
    return mBreed;
}

void Dog::speak() const
{
    std::cout << getName() << " (" << mBreed << ") steka: Haf haf!\n";
}

void Dog::speakParent() const
{
	Animal::speak();
}

void Dog::wagTail() const
{
    std::cout << getName() << " mava ocasem radosti.\n";
}