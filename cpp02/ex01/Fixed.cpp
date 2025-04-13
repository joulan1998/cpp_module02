#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void ){ std::cout << "Default constructor called" << std::endl;}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed_point_value = value << this->fractionalBits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed_point_value = roundf(value * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt(void) const
{
    return this->fixed_point_value >> fractionalBits;
}

float Fixed::toFloat(void) const
{
    return (float)this->fixed_point_value / (1 << fractionalBits);
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_point_value = other.getRawBits();
    return (*this);
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_point_value = raw;
}

int Fixed::getRawBits(void) const
{
    return this->fixed_point_value;
}

std::ostream& operator<<(std::ostream& os, const Fixed &obj)
{
    os  << obj.toFloat();
    return (os);
}