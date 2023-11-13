#ifndef ANIMAL
#define ANIMAL

#include <iostream>

class Animal {

    protected:
        std::string type;
    public:
        Animal(void);
        virtual ~Animal(void);
        virtual void makeSound(void) const;
        virtual std::string getType(void) const;

};
#endif