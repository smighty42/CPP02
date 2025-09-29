#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
    private:
        int _value;
        static const int fractionalBits;

    public:
        Fixed();
        int getRawBits();


};

#endif
