#ifndef DOG
#define DOG

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
    private:
        std::string type;
        Brain *brain;
    public:
        Dog (void);
        ~Dog(void);
        void makeSound(void) const;
        std::string getType(void) const;
};
#endif