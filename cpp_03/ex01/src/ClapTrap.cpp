#include "ClapTrap.h"

ClapTrap::ClapTrap() : name("Default"), hit_points(100), energy_points(100), attack_damage(30) {
    std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(100), energy_points(100), attack_damage(30) {
    std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : name(other.name), hit_points(other.hit_points), energy_points(other.energy_points), attack_damage(other.attack_damage) {
    std::cout << "ClapTrap " << other.name << " copied" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    if (this != &other) {
        name = other.name;
        hit_points = other.hit_points;
        energy_points = other.energy_points;
        attack_damage = other.attack_damage;
        std::cout << "ClapTrap " << other.name << " assigned" << std::endl;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " destroyed" << std::endl;
}

std::string ClapTrap::getName() const {
    return name;
}

int ClapTrap::getHitPoints() const {
    return hit_points;
}

int ClapTrap::getEnergyPoints() const {
    return energy_points;
}

int ClapTrap::getAttackDamage() const {
    return attack_damage;
}

// Implementación de setName
void ClapTrap::setName(std::string name) {
    this->name = name;
}

// Implementación de setHitPoints
void ClapTrap::setHitPoints(int hit_points) {
    this->hit_points = hit_points;
}

// Implementación de setEnergyPoints
void ClapTrap::setEnergyPoints(int energy_points) {
    this->energy_points = energy_points;
}

// Implementación de setAttackDamage
void ClapTrap::setAttackDamage(int attack_damage) {
    this->attack_damage = attack_damage;
}

void ClapTrap::attack(const std::string& target) {
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    hit_points -= amount;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    hit_points += amount;
    std::cout << "ClapTrap " << name << " is repaired by " << amount << " points!" << std::endl;
}