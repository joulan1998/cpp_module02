#include "Fixed.hpp"
#include <iostream>

const int Fixed::fractionalBits = 8;

Fixed::Fixed(void)
{
    std::cout << "default constructor called" << std::endl;
    this->fixed_point_value = 0;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "copy constructor called" << std::endl;
    *this = other;
}
Fixed::~Fixed(void)
{
    std::cout << "destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_point_value = raw;
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this->fixed_point_value == other.getRawBits())
        return (*this);
    this->fixed_point_value = other.fixed_point_value;
    return (*this);
}