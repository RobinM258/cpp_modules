#include "Form.hpp"

Form::Form(void): name("default"), sign(false), sign_grade(150), exec_grade(150)
{
    std::cout << "Constructor Form named " << name << " was created" << std::endl;
}

Form::Form(const Form &src): name(src.getName() + "_copy"), sign(false), sign_grade(src.getSignGrade()), exec_grade(src.getExecGrade())
{
	std::cout << "Form Copy Constructor called to copy " << src.getName() <<
	" into " << this->getName() << std::endl;
	*this = src;
}

Form::Form(int s_grade, int e_grade): name("default"), sign(false), sign_grade(s_grade), exec_grade(e_grade) 
{
    std::cout << "Constructor Form named " << name << " was created" << std::endl;
    if (getExecGrade() > 150 || getSignGrade() > 150)
        throw (Form::GradeTooLowException());
    if (getExecGrade() < 1 || getSignGrade() < 1)
        throw (Form::GradeTooHighException());
}

Form::Form(std::string n): name(n), sign(false), sign_grade(150), exec_grade(150)
{
    std::cout << "Constructor Form named " << name << " was created" << std::endl;
}

Form::Form(std::string n, int s_grade, int e_grade): name(n), sign(false), sign_grade(s_grade), exec_grade(e_grade)
{
    std::cout << "Constructor Form named " << name << " was created" << std::endl;
    if (getExecGrade() > 150 || getSignGrade() > 150)
        throw (Form::GradeTooLowException());
    if (getExecGrade() < 1 || getSignGrade() < 1)
        throw (Form::GradeTooHighException());
}
Form::~Form(void){std::cout << "Form deleted" << std::endl;}

Form &Form::operator=(const Form &src)
{
    if (this == &src)
        return *this;
    std::cout << "Form operator called" << std::endl;
    return *this;
}

std::string Form::getName(void) const {
    return(this->name);
}
bool Form::getSign(void) const {
    return (this->sign);
}
int Form::getSignGrade(void) const {
    return(this->sign_grade);
}
int Form::getExecGrade(void) const {
    return(this->exec_grade);
}

void Form::beSigned(const Bureaucrat &src)
{
	if ((int)src.getGrade() > this->getSignGrade())
		throw(Bureaucrat::GradeTooLowException());
	else if (this->getSign() == false)
	{
		this->sign = true;
		std::cout << this->getName() << " Form was signed by " << src.getName() << std::endl;
	}
	else
		std::cout << this->getName() << " Form is already signed" << std::endl;
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
};

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
};

std::ostream &operator<<(std::ostream& os, const Form &c)
{
    os << c.getName() << ", sign " << c.getSign()<< " exec grade " << c.getExecGrade() << " sign grade " << c.getSignGrade() << std::endl;
    return os;
}





































.
