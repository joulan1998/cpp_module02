#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
// #include "HEADERS/WrongAnimal.hpp"
class Cat : public Animal
{
    private:
        std::string type;
    public:
        Cat(void);
        ~Cat(void);
        void  makeSound() const;
};

#endif