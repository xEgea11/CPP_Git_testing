#include "Fixed.h"

// Default constructor
Fixed::Fixed() : fixed_point_value(0)
{
}

// int parameter constructor
Fixed::Fixed(const int value)
{
    this->fixed_point_value = value << Fixed::fractional_bits;      //<<<--- dont get it
}

// float parameter constructor
Fixed::Fixed(const float value)
{
    this->fixed_point_value = roundf(value * (1 << Fixed::fractional_bits)); //<<<--- Review this
}

// Copy constructor
Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}

// Copy assignment operator
Fixed &Fixed::operator=(const Fixed &fixed)
{
    if (this != &fixed)
    {   
        this->fixed_point_value = fixed.getRawBits();
    }
    return (*this);
}

// Destructor
Fixed::~Fixed()
{
}


// Definición de los operadores de comparación
bool Fixed::operator>(const Fixed &other) const {
    return this->fixed_point_value > other.fixed_point_value;
}

bool Fixed::operator<(const Fixed &other) const {
    return this->fixed_point_value < other.fixed_point_value;
}

bool Fixed::operator>=(const Fixed &other) const {
    return this->fixed_point_value >= other.fixed_point_value;
}

bool Fixed::operator<=(const Fixed &other) const {
    return this->fixed_point_value <= other.fixed_point_value;
}

bool Fixed::operator==(const Fixed &other) const {
    return this->fixed_point_value == other.fixed_point_value;
}

bool Fixed::operator!=(const Fixed &other) const {
    return this->fixed_point_value != other.fixed_point_value;
}

// Definición de los operadores aritméticos
Fixed Fixed::operator+(const Fixed &other) const {
    Fixed result;
    result.fixed_point_value= this->fixed_point_value + other.fixed_point_value;
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const {
    Fixed result;
    result.fixed_point_value = this->fixed_point_value - other.fixed_point_value;
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const {
    Fixed result;
    result.fixed_point_value = (this->fixed_point_value * other.fixed_point_value) >> fractional_bits;
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const {
    Fixed result;
    result.fixed_point_value = (this->fixed_point_value << fractional_bits) / other.fixed_point_value;
    return result;
}

// Definición de los operadores de preincremento y postincremento
Fixed &Fixed::operator++() {
    ++fixed_point_value;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    ++fixed_point_value;
    return temp;
}

// Definición de los operadores de predecremento y postdecremento
Fixed &Fixed::operator--() {
    --fixed_point_value;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    --fixed_point_value;
    return temp;
}

// Definición de los métodos estáticos min y max
Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return a < b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return a > b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return a > b ? a : b;
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