#pragma once
#include "Animal.h"
class Cat : public Animal
{
public:
	//konstruktor s inicializací základní tøídy
	Cat(const std::string& name,
		int age,
		int weight,
		const std::string& color,
		size_t lifeNumber);
	//destruktor, stara sa o uvolnenie pameti
	~Cat() override;

	//dalsie metody
	const std::string& getColor() const;
	void speak() const override;
	void purr() const;

protected:
	size_t getLiveNumber() const;

private:
	size_t mLifeNumber;
	std::string mColor;
};

