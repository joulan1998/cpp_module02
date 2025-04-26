#include "HEADERS/dog.hpp"
Dog::Dog(void) : Animal("dog")
{
    // this->type = "Dog";
    std::cout << "constructor called for Class Dog" << std::endl;
}
Dog::~Dog(void)
{
    std::cout << "Animal destructor called for dog" << std::endl;
}
void  Dog::makeSound() const
{
    std::cout << "BARKING BARKING !!!!" << std::endl;
}