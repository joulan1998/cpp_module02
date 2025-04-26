#include "HEADERS/cat.hpp"
Cat::Cat(void) : Animal("Cat")
{   
    // this->type = "Cat";
    std::cout << "constructor called for Class Cat" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Animal destructor called for cat" << std::endl;
}

void  Cat::makeSound() const
{
    std::cout << "MEOW MEOW!!" << std::endl;
}