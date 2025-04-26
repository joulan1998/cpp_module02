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
        ~Animal();
        Animal(Animal &other);
        Animal &operator=(Animal &other);
        
        std::string getType() const;
        virtual void makeSound() const;
};

// class Dog : public Animal
// {
//     private:
//         std::string type;
//     public:
//         Dog(void);
//         void bark()
//         {
//             std::cout << "Woof!" << std::endl;
//         }
// };

// class Cat : public Animal
// {
//     private:
//         std::string type;
//     public:
//         Cat(void);
//         void bark()
//         {
//             std::cout << "MEOW!" << std::endl;
//         }
// };

#endif