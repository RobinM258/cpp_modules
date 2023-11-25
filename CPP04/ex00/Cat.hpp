#ifndef CAT
#define CAT

#include "Animal.hpp"

class Cat: public Animal {
    public:
        Cat(void);
        Cat(Cat & rf);
        Cat & operator=(Cat const & r);
        ~Cat(void);
        void makeSound(void) const;
        std::string getType(void) const;
};
#endif