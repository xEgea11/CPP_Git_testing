#include "Fixed.hpp"

// Default constructor
Fixed::Fixed() : fixed_point_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

// Copy assignment operator
Fixed &Fixed::operator=(const Fixed &fixed)
{
    if (this != &fixed)
    {   
        std::cout << "Copy assignment operator called" << std::endl;
        this->fixed_point_value = fixed.getRawBits();
    }
    return (*this);
}

// Destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_point_value = raw;
}