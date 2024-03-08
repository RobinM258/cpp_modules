#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("ShrubberyCreationForm", 145, 137), target("default")
{
    std::cout << "Shrubbery constructor created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string ta): Form("ShrubberyCreationForm", 145, 137), target(ta)
{
    std::cout << "Shrubbery constructor created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &src)
{
    std::cout << "Shrubbery copy created" << std::endl;
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "Shrubbery deconstructor created" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
    std::cout << "operator Shrubbery" << std::endl;
    if (this == &src)
        return (*this);
    return (*this);
}

void ShrubberyCreationForm::exec(Bureaucrat const &path) const 
{
    if ((int)path.getGrade() > this->getExecGrade())
        throw (Bureaucrat::GradeTooLowException());
    else if (this->getSign() == false)
        throw (Form::SignFalseExeption());
    else
    {
        std::ofstream outfile (getTarget().append("_shrubbery").c_str());

        outfile << "           &&& &&  & &&" << std::endl;
        outfile << "       && &\\/&\\|& ()|/ @, &&" << std::endl;
        outfile << "       &\\/(/&/&||/& /_/)_&/_&" << std::endl;
        outfile << "    &() &\\/&|()|/&\\/ '%  & ()" << std::endl;
        outfile << "   &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl;
        outfile << "  ()&_---()&\\&\\|&&-&&--%---()~" << std::endl;
        outfile << "      &&     \\|||" << std::endl;
        outfile << "              |||" << std::endl;
        outfile << "              |||" << std::endl;
        outfile << "        , -=-~  .-^- _" << std::endl;
        outfile.close();
    }

}

std::string	ShrubberyCreationForm::getTarget(void)const
{
	return (this->target);
}
