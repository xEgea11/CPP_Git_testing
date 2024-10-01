#include "Fixed.h"

// Default constructor
Fixed::Fixed() : fixed_point_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

// int parameter constructor
Fixed::Fixed(const int value)
{
    std::cout << "Int parameter constructor called" << std::endl;
    this->fixed_point_value = value << Fixed::fractional_bits;      //<<<--- dont get it
}

// float parameter constructor
Fixed::Fixed(const float value)
{
    std::cout << "Float parameter constructor called" << std::endl;
    this->fixed_point_value = roundf(value * (1 << Fixed::fractional_bits)); //<<<--- Review this
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
    return (this->fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_point_value = raw;
}

float Fixed::toFloat(void) const            //<<<<-- Review this
{
    return ((float)this->fixed_point_value / (1 << Fixed::fractional_bits));
}

int Fixed::toInt(void) const                //<<<<-- Review this
{
    return (this->fixed_point_value >> Fixed::fractional_bits);
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
    out << fixed.toFloat();
    return (out);
}