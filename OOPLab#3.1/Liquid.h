// Liquid.h
#ifndef LIQUID_H
#define LIQUID_H

#include <string>
#include <iostream>

class Liquid {
protected:
    std::string name;
    float density;

public:
    Liquid() : name(""), density(0.0) {}
    Liquid(const std::string& name, float density);
    const std::string& getName() const;
    void setName(const std::string& name);
    float getDensity() const;
    void setDensity(float density);

    operator std::string() const;

    friend std::ostream& operator<<(std::ostream& os, const Liquid& liquid);
    friend std::istream& operator>>(std::istream& is, Liquid& liquid);
};

#endif