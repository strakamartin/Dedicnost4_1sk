#include "Cat.h"
#include <iostream>

Cat::Cat(const std::string& name,
	int age,
	int weight,
	const std::string& color,
	size_t lifeNumber)
	: Animal(name, age, weight)// volani konstruktoru zakladni tridy
	{
	mColor = color;
	mLifeNumber = lifeNumber;
	std::cout << "child constructor " << mName << '\n';
}

Cat::~Cat() = default;

const std::string& Cat::getColor() const
{
	return mColor;
}

void Cat::speak() const
{
	printf("%s mnouka.\n", getName().c_str());
}

void Cat::purr() const
{
	printf("%s prede.\n", getName().c_str());
}

size_t Cat::getLiveNumber() const
{
	return mLifeNumber;
}
