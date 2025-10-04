#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
    std::cout<<"Default constructor called"<<std::endl;
    _value=5;
}

Fixed::Fixed(const Fixed &A)
{
    std::cout<<"Copy constructor called"<<std::endl;
    this->_value=A._value;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    this->_value=other._value;
    return *this;
}

Fixed::~Fixed()
{
    std::cout<<"destructor"<<std::endl;
}

int Fixed::getRawBits()
{
    std::cout<<"getRawBits member function called"<<std::endl;
    return _value;
}
