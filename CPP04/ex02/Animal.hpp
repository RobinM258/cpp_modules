#ifndef ANIMAL
#define ANIMAL

#include <iostream>

class Animal {

    protected:
        std::string type;
    public:
        Animal(void);
        Animal(const Animal & ref);
        Animal & operator=(Animal const & r);
        virtual ~Animal(void) = 0;
        virtual void makeSound(void) const = 0;
        virtual std::string getType(void) const;

};
#endif