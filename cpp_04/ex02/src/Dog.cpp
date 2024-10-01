#include "Dog.h"

Dog::Dog()
{
    type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog& other) : AAnimal(other)
{
    brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        AAnimal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Dog::~Dog()
{
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof! I am a beautiful dog 🐶" << std::endl;
}