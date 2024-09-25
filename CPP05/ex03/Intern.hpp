#ifndef INTERN
#define INTERN

#include "AForm.hpp"

class Intern 
{
    public:
        Intern(void);
        ~Intern(void);
        Intern(const Intern &src);
        Intern &operator=(const Intern &src);
        Form* makeform(std::string name, std::string target);

};



#endif