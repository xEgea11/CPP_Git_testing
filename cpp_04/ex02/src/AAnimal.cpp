// Animal.cpp
#include "AAnimal.h"

AAnimal::AAnimal() : type("Animal") {}

AAnimal::AAnimal(std::string type) : type(type) {}

AAnimal::AAnimal(const AAnimal& other) : type(other.type) {}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

AAnimal::~AAnimal() {}

std::string AAnimal::getType() const 
{
    return type;
}