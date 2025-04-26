#ifndef POLYMORPHISM_HPP
#define POLYMORPHISM_HPP
#include <iostream>

class Animal
{
    private:
        std::string type;
    public:
        Animal(void);
        Animal(std::string type);
        ~Animal();
        Animal(Animal &other);
        Animal &operator=(Animal &other);
        
        std::string getType() const;
        void makeSound() const;
};



#endif