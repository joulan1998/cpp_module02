#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
class Dog : public Animal
{
    private:
        std::string type;
    public:
        void makeSound() const;
        Dog(void);
        ~Dog(void);
        void bark()
        {
            std::cout << "Woof!" << std::endl;
        }
};


#endif