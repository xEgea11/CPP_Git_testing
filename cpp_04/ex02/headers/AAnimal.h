#pragma once
#include <string>
#include <iostream>

class AAnimal
{
    protected:
        std::string type;
    
    public:
        AAnimal();
        AAnimal(std::string type);
        AAnimal(const AAnimal& other);
        AAnimal& operator=(const AAnimal& other);
        virtual ~AAnimal();
    
        virtual void makeSound() const = 0;
        std::string getType() const;
};