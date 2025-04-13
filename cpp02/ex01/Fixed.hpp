#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
    int fixed_point_value;
    static const int fractionalBits = 8;
public:
    Fixed(const int value);
    Fixed(const float value);
    Fixed();
    Fixed(const Fixed &other);
    ~Fixed();
    Fixed& operator=(const Fixed &other);
    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits(void ) const;
    void setRawBits(int const raw);
};
    std::ostream& operator<<(std::ostream& os,const Fixed &obj);


#endif
