#include "ClapTrap.h"
#include "ScavTrap.h"

int main(void)
{
    ScavTrap scavTrap("ScavTrap");
    scavTrap.attack("target");
    scavTrap.guardGate();
    return 0;
}