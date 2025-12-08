#pragma once

#include "Animal.h"
#include <string>

class pijavice : public Animal {
public:
    // Konstruktor s inicializac� z�kladn� t��dy
    pijavice(const std::string& name, int age, const std::string& breed);
    ~pijavice() override;

    const std::string& getBreed() const;

    // P�ep�e chov�n� z Animal
    void speak() const override;
    void speakParent() const;

    void wagTail() const;

private:
    std::string mBreed;
};