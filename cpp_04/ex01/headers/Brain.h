#pragma once

#include <string>

class Brain
{
    public:
        std::string ideas[100];

        Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        ~Brain();
        
};