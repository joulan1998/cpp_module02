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
    bool operator<(const Fixed &other) const;
    bool operator>(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator==(const Fixed &other) const;
    bool operator!=(const Fixed &other) const;


    // Fixed& operator=(const Fixed &other);
    // Fixed operator!=(const Fixed &other) const;
    // bool operator>(const Fixed &other);
    // bool operator>=(const Fixed &other);
    // bool operator<=(const Fixed &other);
    Fixed  operator*(const Fixed &other) const;
    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits(void ) const;
    void setRawBits(int const raw);

    //pre incrementation
    Fixed &operator++();

      // Post-increment operator
    Fixed operator++(int);

     // Static min function
    static const Fixed &min(const Fixed &a, const Fixed &b);

    // Static min function for constant references
    // static const Fixed &min(const Fixed &a, const Fixed &b);

    // Static max function
    // static const Fixed &max(const Fixed &a, const Fixed &b);

    

    // Static max function for constant references
    static const Fixed &max(const Fixed &a, const Fixed &b);


};
    std::ostream& operator<<(std::ostream& os,const Fixed &obj);
    // std::ostream &operator++(std::ostream& out,const Fixed &obj);
    // std::ostream& operator>>(std::ostream& os,const Fixed &obj);


#endif
