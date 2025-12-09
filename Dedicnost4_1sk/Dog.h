#pragma once

#include "Animal.h"
#include <string>

class Dog : public Animal {
public:
	// Konstruktor s inicializaci zakladni tridy
    Dog(const std::string& name, int age, const std::string& breed);
    ~Dog() override;

    const std::string& getBreed() const;

    // P?ep?e chovani z Animal
    void speak() const override;
    void speakParent() const;

    void wagTail() const;

private:
    std::string mBreed;
};