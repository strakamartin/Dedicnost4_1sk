#include "Animal.h"
#include <iostream>

Animal::Animal(const std::string & name, int age, int weight)
	: mName(name), mAge(age), mWeight(weight)
{
	std::cout << "Animal constructor called for " << mName << '\n';
}

Animal::~Animal() = default;

const std::string& Animal::getName() const
{
    return mName;
}

int Animal::getAge() const
{
    return mAge;
}

void Animal::speak() const
{
    std::cout << getName() << " vydava zvuk (obecne animal::speak).\n";
}
