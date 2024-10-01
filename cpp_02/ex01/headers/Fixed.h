#include <iostream>

class Fixed
{
    private:
        int fixed_point_value;
        static const int fractional_bits = 8;
    public:
        /*  
        -   Defaul constructor
        -   int parameter constructor
        -   float parameter constructor
        -   Copy constructor
        -   Copy assignment operator
        -   Destructor
        */
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed &fixed);
        Fixed &operator=(const Fixed &fixed);
        ~Fixed();

        int     getRawBits(void) const;
        void    setRawBits(int const raw);

        float   toFloat(void) const;
        int     toInt(void) const;

        
        
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);
