// Liquid.cpp
#include "Liquid.h"
#include <iostream>

Liquid::Liquid(const std::string& name, float density) : name(name), density(density) {
    if (density < 0) {
        std::cerr << "Error: Density must be a positive number." << std::endl;
        exit(1);
    }
}

const std::string& Liquid::getName() const {
    return name;
}

void Liquid::setName(const std::string& name) {
    this->name = name;
}

float Liquid::getDensity() const {
    return density;
}

void Liquid::setDensity(float density) {
    if (density < 0) {
        std::cerr << "Error: Density must be a positive number." << std::endl;
        exit(1);
    }
    this->density = density;
}

Liquid::operator std::string() const {
    return name + ", Density: " + std::to_string(density);
}

// Оператор виводу
std::ostream& operator<<(std::ostream& os, const Liquid& liquid) {
    os << liquid.name << ", Density: " << liquid.density;
    return os;
}

// Оператор вводу
std::istream& operator>>(std::istream& is, Liquid& liquid) {
    std::cout << "Enter the name: ";
    is >> liquid.name;
    std::cout << "Enter the density: ";
    is >> liquid.density;
    return is;
}