
#ifndef SHRUBERY
#define SHRUBERY

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>

class Bureaucrat;
class Form;

class ShrubberyCreationForm: public Form 
{
    private:
        ShrubberyCreationForm(void);
    const std::string target;
    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm &src);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);
        std::string getTarget(void) const;
        void exec(Bureaucrat const &path) const;

};

#endif