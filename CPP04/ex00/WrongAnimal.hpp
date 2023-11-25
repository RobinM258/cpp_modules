#ifndef WRONGANIMAL
#define WRONGANIMAL

#include <iostream>

class WrongAnimal {

    protected:
        std::string type;
    public:
        WrongAnimal(void);
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal & r);
        WrongAnimal & operator=(WrongAnimal const & rf);
        virtual ~WrongAnimal(void);
        virtual void makeSound(void) const;
        virtual std::string getType(void) const;

};
#endif