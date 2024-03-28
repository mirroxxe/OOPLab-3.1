// Alcohol.h
#ifndef ALCOHOL_H
#define ALCOHOL_H

#include "Liquid.h"
#include <iostream>

class Alcohol : public Liquid {
private:
    float strength;

public:
    Alcohol() : Liquid(), strength(0.0) {}

    Alcohol(const std::string& name, float density, float strength);
    float getStrength() const;
    void setStrength(float strength);
    operator std::string() const;

    friend std::ostream& operator<<(std::ostream& os, const Alcohol& alcohol);
    friend std::istream& operator>>(std::istream& is, Alcohol& alcohol);
};

std::ostream& operator<<(std::ostream& os, const Alcohol& alcohol);
std::istream& operator>>(std::istream& is, Alcohol& alcohol);

#endif

