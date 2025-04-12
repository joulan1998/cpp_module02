#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
    int fixed_point_value;
    static const int fractionalBits;
public:
    Fixed();
    Fixed(const Fixed &other);
    ~Fixed();
    Fixed& operator=(const Fixed &other);
    int getRawBits(void ) const;
    void setRawBits(int const raw);
};


#endif
