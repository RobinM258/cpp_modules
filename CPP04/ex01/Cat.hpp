#ifndef CAT
#define CAT

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
    private:
        std::string type;
        Brain *brain;
    public:
        Cat(void);
        ~Cat(void);
        void makeSound(void) const;
        std::string getType(void) const;
};
#endif