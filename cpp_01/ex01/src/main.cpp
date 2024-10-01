#include "Zombie.hpp"
#include <cassert>

void testZombieHorde(int numZombies, const std::string& name) {
    Zombie* horde = ZombieHorde(numZombies, name);
    assert(horde != nullptr);

    for (int i = 0; i < numZombies; ++i) {
        horde[i].announce();
    }
    std::cout << std::endl;
    deleteZombieHorde(horde);
    std::cout << std::endl;
}

int main() {
    // Test 1: Crear una horda de 5 zombies
    testZombieHorde(5, "Zombieeheh");

    // Test 2: Crear una horda de 10 zombies
    testZombieHorde(10, "ZombieTest");

    // Test 3: Crear una horda de 1 zombie
    testZombieHorde(1, "SoloZombie");

    // Test 4: Crear una horda de 0 zombies (debe retornar nullptr)
    Zombie* horde = ZombieHorde(0, "NoZombie");
    assert(horde == nullptr);

    // Test 5: Crear una horda de -5 zombies (debe retornar nullptr)
    horde = ZombieHorde(-5, "NegativeZombie");
    assert(horde == nullptr);

    std::cout << "All tests passed!" << std::endl;

    return (0);
}