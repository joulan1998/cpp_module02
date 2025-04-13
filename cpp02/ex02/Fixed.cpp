#include "Fixed.hpp"
#include <iostream>
#include <cmath>

// Fixed& Fixed::operator=(const Fixed &other)
// {
//     std::cout << "Copy assignment operator called" << std::endl;
//     this->fixed_point_value = other.getRawBits();
//     return (*this);
// }
// #####################    default constructor ###################

Fixed::Fixed(void )
{
    this->fixed_point_value = 0;
    // std::cout << "Default constructor called" << std::endl;
}


// #####################    int constructor ###################
Fixed::Fixed(const int value)
{
    // std::cout << "Int constructor called" << std::endl;
    this->fixed_point_value = value << this->fractionalBits;
}


// #####################    float constructor ###################
Fixed::Fixed(const float value)
{
    // std::cout << "Float constructor called" << std::endl;
    this->fixed_point_value = roundf(value * (1 << fractionalBits));
}

// #####################    copy constructor ###################
Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

// #####################    destructor #########################

Fixed::~Fixed(void) {}

// #####################    to_int methode #########################
int Fixed::toInt(void) const {return this->fixed_point_value >> fractionalBits;}


// #####################    to_float methode #########################
float Fixed::toFloat(void) const {return (float)this->fixed_point_value / (1 << fractionalBits);}




// #####################    setRawBits methode #########################
void Fixed::setRawBits(int const raw) {this->fixed_point_value = raw;}





// #####################    getRawBits methode #########################
int Fixed::getRawBits(void) const {return this->fixed_point_value;}







// #####################    <<operator #########################
std::ostream& operator<<(std::ostream& os, const Fixed &obj)
{
    os  << obj.toFloat();
    return (os);
}

// #####################    <operator #########################
bool    Fixed::operator<( const Fixed &other) const {return (this->fixed_point_value < other.fixed_point_value);}

// #####################    >operator #########################
bool    Fixed::operator>( const Fixed &other) const {return (this->fixed_point_value > other.fixed_point_value);}


// #####################    >=operator #########################
bool    Fixed::operator>=( const Fixed &other) const {return (this->fixed_point_value >= other.fixed_point_value);}
// #####################    <=operator #########################
bool    Fixed::operator<=( const Fixed &other) const {return (this->fixed_point_value <= other.fixed_point_value);}


// #####################    ==operator #########################
bool    Fixed::operator==( const Fixed &other) const {return (this->fixed_point_value == other.fixed_point_value);}

// #####################    !=operator #########################
bool    Fixed::operator!=( const Fixed &other) const {return (this->fixed_point_value != other.fixed_point_value);}



// #####################    *operator #########################
Fixed    Fixed::operator*( const Fixed &other) const 
{
    Fixed result;
    result.fixed_point_value = (this->fixed_point_value * other.fixed_point_value) >> fractionalBits;
    return (result); 
}

// #####################    ++operator #########################
// Pre-increment operator (++a)
Fixed &Fixed::operator++() {
    ++fixed_point_value; // Increment the value
    return *this;        // Return the current object
}

// Post-increment operator (a++)
Fixed Fixed::operator++(int) {
    Fixed temp = *this;  // Save the current state
    fixed_point_value++; // Increment the value
    return temp;         // Return the old state
}



// Static min function for constant references
const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return (a.fixed_point_value < b.fixed_point_value) ? a : b;
}


// Static max function for constant references
const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}

// Static max function
// const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
//     return (a.fixed_point_value > b.fixed_point_value) ? a : b;
// }

// // #####################    >>operator #########################
// std::ostream& operator>>(std::ostream& os, const Fixed &obj)
// {
//     os  >> obj.toFloat();
//     return (os);
// }









// // #####################    <operator #########################

// bool    operator>( const Fixed &other)
// {
//     return (this->fixed_point_value > other.fixed_point_value);
// }

// bool    operator>=( const Fixed &other)
// {
//     return (this->fixed_point_value >= other.fixed_point_value);
// }
// bool    operator<=( const Fixed &other)
// {
//     return (this->fixed_point_value <= other.fixed_point_value);
// }

// bool    operator*( const Fixed &other)
// {
//     return (this->fixed_point_value * other.fixed_point_value);
// }