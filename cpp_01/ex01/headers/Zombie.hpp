#pragma once
#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
        void setName(const std::string& name);
};

Zombie* ZombieHorde(int N, std::string name);
void deleteZombieHorde(Zombie *horde);

