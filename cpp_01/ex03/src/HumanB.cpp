#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = nullptr;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weapon)
{

    this->weapon = &weapon;
}

void HumanB::attack()
{
    if (weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    return ;
}