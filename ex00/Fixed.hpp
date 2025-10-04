#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
    private:
        int _value;
        static const int fractionalBits;

    public:
        Fixed();
        Fixed(const Fixed &A);
        Fixed& operator=(const Fixed& other);
        
    ~Fixed();
    int getRawBits();
};

#endif
