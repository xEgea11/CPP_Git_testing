// Animal.cpp
#include "Animal.h"

Animal::Animal() : type("Animal") {}

Animal::Animal(std::string type) : type(type) {}

Animal::Animal(const Animal& other) : type(other.type) {}

Animal& Animal::operator=(const Animal& other)
{
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

Animal::~Animal() {}

void Animal::makeSound() const
{
    std::cout << "Some generic and noisy sound" << std::endl;
}

std::string Animal::getType() const 
{
    return type;
}