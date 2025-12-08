#include "Zebra.h"
#include <iostream>

Zebra::Zebra(const std::string& name, int age, const std::string& stripePattern)
    : Animal(name, age, 0), mStripePattern(stripePattern)
{
    std::cout << "Zebra constructor called for " << mName << '\n';
}

Zebra::~Zebra() = default;

const std::string& Zebra::getStripePattern() const
{
    return mStripePattern;
}

void Zebra::speak() const
{
    std::cout << getName() << " (" << mStripePattern << ") řehtá: Íháá!\n";
}

void Zebra::speakParent() const
{
    Animal::speak();
}

void Zebra::kick() const
{
    std::cout << getName() << " kopne silně do vzduchu.\n";
}

void Zebra::graze() const
{
    std::cout << getName() << " se pase na louce klidně.\n";
}

void Zebra::gallop() const
{
    std::cout << getName() << " svižně cválá po savaně.\n";
}

void Zebra::describeStripes() const
{
    std::cout << getName() << " má pruhy: " << mStripePattern << ". Každý vzor je jedinečný.\n";
}

void Zebra::rest() const
{
    std::cout << getName() << " si lehne a odpočívá, ucho pozorně naslouchá okolí.\n";
}
