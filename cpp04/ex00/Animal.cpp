#include "Animal.hpp"

Animal::Animal(void) {this->type = nullptr;}

Animal::Animal(std::string type)// : type(type) 
{
        this->type = type;
}

Animal::Animal(Animal &other)
{
    *this = other;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

void  Animal::makeSound() const
{
    std::cout << "the folllowing animal is making sound right now" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}

Animal& Animal::operator=(Animal &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}
