#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
    private:
        int _value;
        static const int fractionalBits;

    public:
        Fixed();
        Fixed (int a);
        Fixed (float d);
        Fixed (const Fixed& copy);
        Fixed& Fixed::operator=(const Fixed& copy);
        ~Fixed();
};

#endif