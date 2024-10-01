#include "ClapTrap.h"

ClapTrap::ClapTrap() : hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap constructor with name" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap copy constructor" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "ClapTrap assignation operator" << std::endl;
    name = other.name;
    hit_points = other.hit_points;
    energy_points = other.energy_points;
    attack_damage = other.attack_damage;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (energy_points == 0)
    {
        std::cout << "ClapTrap " << name << " is out of energy points!" << std::endl;
        return;
    }
    if (hit_points == 0)
    {
        std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
        return;
    }
    energy_points--;
    //How can we call an instance only with the string name?
    //We should be able to take x health points off the target
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points == 0)
    {
        std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
        return;
    }
    if ((int)amount > hit_points)
        hit_points = 0;
    else
        hit_points -= amount;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy_points == 0)
    {
        std::cout << "ClapTrap " << name << " is out of energy points!" << std::endl;
        return;
    }
    if (hit_points == 0)
    {
        std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
        return;
    }
    energy_points--;
    hit_points += amount;
    if (hit_points > 10)
        hit_points = 10;
    std::cout << "ClapTrap " << name << " is repaired for " << amount << " points!" << std::endl;
}