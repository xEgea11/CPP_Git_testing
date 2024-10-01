#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

int main()
{
    ClapTrap claptrap("Claptrap");
    ScavTrap scavtrap("Scavtrap");
    FragTrap fragtrap("Fragtrap");

    claptrap.attack("enemy");
    claptrap.takeDamage(10);
    claptrap.beRepaired(5);

    scavtrap.attack("enemy");
    scavtrap.takeDamage(10);
    scavtrap.beRepaired(5);
    scavtrap.guardGate();

    fragtrap.attack("enemy");
    fragtrap.takeDamage(10);
    fragtrap.beRepaired(5);
    fragtrap.highFivesGuys();
    return 0;
}