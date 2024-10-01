#include "Cat.h"

Cat::Cat()
{
    type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat& other) : AAnimal(other)
{
    brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        AAnimal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Cat::~Cat()
{
    delete brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow! I am an annoying cat 😈" << std::endl;
}