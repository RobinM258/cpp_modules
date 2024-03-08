#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("RobotomyRequestForm", 72, 45), target("default")
{
    std::cout << "Robotomy constructor created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string ta): Form("RobotomyRequestForm", 72, 45), target(ta)
{
    std::cout << "Robotomy constructor created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &src)
{
    std::cout << "Robotomy copy created" << std::endl;
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "Robotomy deconstructor created" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
    std::cout << "operator Robotomy" << std::endl;
    if (this == &src)
        return (*this);
    return (*this);
}

static int i = 0;

void RobotomyRequestForm::exec(Bureaucrat const &path) const 
{
    if ((int)path.getGrade() > this->getExecGrade())
        throw (Bureaucrat::GradeTooLowException());
    else if (this->getSign() == false)
        throw (Form::SignFalseExeption());
    else if (i++ % 2 == 0)
    {
        std::cout << path.getName() << " was robotomized" << std::endl;
    }
    else
        std::cout << "robotomy fail" << std::endl;
}

std::string	RobotomyRequestForm::getTarget(void)const
{
	return (this->target);
}
