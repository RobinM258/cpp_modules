#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void) {}


Intern::Intern(const Intern &src)
{
    std::cout << "Intern copy created" << std::endl;
    *this = src;
}

Intern &Intern::operator=(const Intern &src)
{
    (void) src;
    std::cout << "Intern operator called" << std::endl;
    return *this;

}

Intern::~Intern(void) {}

Form* Intern::makeform(std::string name, std::string target)
{
    int i;
    int j = 3;

    i = 0;
    std::string requestform[] =
    {
        "shruberry",
        "robotomy", 
        "presidential"
    };
    Form* form[] =
    {
        new RobotomyRequestForm( target ),
        new PresidentialPardonForm( target ),
        new ShrubberyCreationForm( target )
    };
    while (i < 3)
    {
        if (name == requestform[i])
        {
            std::cout << "Intern creates " << name << std::endl;
            j = i;
        }
        i++;
    }
    i = 0;
    while (i < 3)
    {
        if (i != j)
        {
            delete form[i];
        }
        i++;
    }
    return form[j];
    std::cout << "Intern cannot create Form" << std::endl;
    return NULL;
}
