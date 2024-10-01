#include "Zombie.hpp"

Zombie::Zombie( std::string name)
{
    this->name = name;
    announce();
}

Zombie::~Zombie()
{
    std::cout << "Zombie \"" << name << "\" is dead" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

