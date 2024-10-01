#include "Cat.h"

Cat::Cat()
{
    type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(other) {}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other) {
        Animal::operator=(other);
    }
    return *this;
}

Cat::~Cat() {}

void Cat::makeSound() const
{
    std::cout << "Meow! I am an annoying cat 😈" << std::endl;
}