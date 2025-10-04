#include "Fixed.hpp"
#include <cmath>
Fixed::Fixed()
{
    _value=0;
}

Fixed::Fixed  (int a)
{
    _value = a * (1<<fractionalBits);
}

Fixed::Fixed(float d)
{
    float number;
    number=d *(1<<fractionalBits);
    _value = roundf(number);
}

Fixed::Fixed(const Fixed& copy)
{
    _value=copy._value;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
    if(this== &copy)
        return *this;
    this->_value =copy._value;
    return *this;
}

Fixed::~Fixed()
{
    std::cout<<""
}