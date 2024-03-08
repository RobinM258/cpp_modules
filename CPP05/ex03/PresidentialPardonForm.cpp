#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("PresidentialPardonForm", 25, 5), target("default")
{
    std::cout << "President constructor created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string ta): Form("PresidentialPardonForm", 25, 5), target(ta)
{
    std::cout << "President constructor created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &src)
{
    std::cout << "President copy created" << std::endl;
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "President deconstructor created" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
    std::cout << "operator President" << std::endl;
    if (this == &src)
        return (*this);
    return (*this);
}

void PresidentialPardonForm::exec(Bureaucrat const &path) const 
{
    if ((int)path.getGrade() > this->getExecGrade())
        throw (Bureaucrat::GradeTooLowException());
    else if (this->getSign() == false)
        throw (Form::SignFalseExeption());
    else
        std::cout << path.getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::string	PresidentialPardonForm::getTarget(void)const
{
	return (this->target);
}
