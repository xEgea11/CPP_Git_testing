#include "ScavTrap.h"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "ScavTrap " << name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap " << other.getName() << " copied" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    ClapTrap::operator=(other);
    std::cout << "ScavTrap " << other.getName() << " assigned" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->getName() << " destroyed" << std::endl;
}

std::string ScavTrap::getName() const
{
    return ClapTrap::getName();
}

void ScavTrap::setHitPoints(int hit_points)
{
    ClapTrap::setHitPoints(hit_points);
}

void ScavTrap::setEnergyPoints(int energy_points)
{
    ClapTrap::setEnergyPoints(energy_points);
}

void ScavTrap::setAttackDamage(int attack_damage)
{
    ClapTrap::setAttackDamage(attack_damage);
}

int ScavTrap::getHitPoints() const
{
    return ClapTrap::getHitPoints();
}

int ScavTrap::getEnergyPoints() const
{
    return ClapTrap::getEnergyPoints();
}

int ScavTrap::getAttackDamage() const
{
    return ClapTrap::getAttackDamage();
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->getName() << " has entered in Gate keeper mode" << std::endl;
}

