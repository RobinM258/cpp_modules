#ifndef CAT
#define CAT

#include "Animal.hpp"

class Cat: public Animal{
    private:
        std::string type;
    public:
        Cat(void);
        ~Cat(void);
        void makeSound(void) const;
        std::string getType(void) const;
};
#endif