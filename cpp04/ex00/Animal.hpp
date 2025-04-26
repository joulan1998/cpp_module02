#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
    private:
        std::string type;
    public:
        Animal(void);
        Animal(std::string type);
        Animal(Animal &other);
        Animal &operator=(Animal &other);
        virtual ~Animal();
        
        virtual void makeSound() const=0 ;
        std::string getType() const;
};
#endif