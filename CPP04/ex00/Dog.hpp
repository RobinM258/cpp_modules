#ifndef DOG
#define DOG

#include "Animal.hpp"

class Dog: public Animal{
    public:
        Dog (void);
        Dog(Dog & r);
        Dog & operator=(Dog const & rf);
        ~Dog(void);
        void makeSound(void) const;
        std::string getType(void) const;
};
#endif