#pragma once

#include "Animal.h"
#include <string>

class Zebra : public Animal {
public:
    // Konstruktor s inicializací základní třídy
    Zebra(const std::string& name, int age, const std::string& stripePattern);
    ~Zebra() override;

    const std::string& getStripePattern() const;

    // Přepíše chování z Animal
    void speak() const override;
    void speakParent() const;

    // Další "věci" specifické pro zebru
    void kick() const;
    void graze() const;
    void gallop() const;             // rozběhne se
    void describeStripes() const;    // popis pruhů
    void rest() const;               // odpočinek

private:
    std::string mStripePattern;
};
