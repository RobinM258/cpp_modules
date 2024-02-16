#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int nb, std::string na) : name(na)
{
    if (nb < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (nb > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    grade = nb;
    std::cout << "Bureaucrat " << name << " created with " << grade << " grade." << std::endl;
}

Bureaucrat::~Bureaucrat(void){std::cout << "Bureaucrat deleted" << std::endl;}

std::string Bureaucrat::getName(void) const {
    return(this->name);
}

size_t Bureaucrat::getGrade(void) const {
    return(this->grade);
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
};

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
};

void Bureaucrat::incrementGrade(void) {
    if ((grade - 1) < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    grade = grade - 1;
    std::cout << "Grade to " << name << " up to " << grade << "." << std::endl;
}

void Bureaucrat::decrementGrade(void) {
    if ((grade + 1) > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    grade = grade + 1;
    std::cout << "Grade to " << name << " down to " << grade << "." << std::endl;
}

std::ostream &operator<<(std::ostream& os, const Bureaucrat &c)
{
    os << c.getName() << ", bureaucrat grade " << c.getGrade() << std::endl;
    return os;
}