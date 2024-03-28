// Alcohol.cpp
#include "Alcohol.h"
#include <iostream>

Alcohol::Alcohol(const std::string& name, float density, float strength) : Liquid(name, density), strength(strength) {
    if (strength < 0 || strength > 100) {
        std::cerr << "Error: Strength must be in the range from 0 to 100." << std::endl;
        exit(1);
    }
}

float Alcohol::getStrength() const {
    return strength;
}

void Alcohol::setStrength(float strength) {
    if (strength < 0 || strength > 100) {
        std::cerr << "Error: Strength must be in the range from 0 to 100." << std::endl;
        exit(1);
    }
    this->strength = strength;
}

Alcohol::operator std::string() const {
    return Liquid::operator std::string() + ", Strength: " + std::to_string(strength) + "%";
}

std::ostream& operator<<(std::ostream& os, const Alcohol& alcohol) {
    os << static_cast<const Liquid&>(alcohol) << ", Strength: " << alcohol.strength << "%";
    return os;
}

std::istream& operator>>(std::istream& is, Alcohol& alcohol) {
    is >> static_cast<Liquid&>(alcohol);
    std::cout << "Enter the strength: ";
    is >> alcohol.strength;
    return is;
}
