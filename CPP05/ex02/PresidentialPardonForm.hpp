#ifndef PRESIDENT
#define PRESIDENT

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;
class Form;

class PresidentialPardonForm: public Form 
{
    private:
        PresidentialPardonForm(void);
    const std::string target;
    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm &src);
        ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
        std::string getTarget(void) const;
        void exec(Bureaucrat const &path) const;

};

#endif