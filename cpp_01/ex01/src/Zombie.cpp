#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
    this->name = name;
    Zombie::announce();
}

Zombie::~Zombie()
{
    std::cout << this->name << " is dead" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << "Hello, it's " << this->name << "!" << std::endl;
}

void Zombie::setName(const std::string& name)
{
    this->name = name;
}