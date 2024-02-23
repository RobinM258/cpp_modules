#ifndef FORM
#define FORM

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        const std::string name;
        bool sign;
        const int sign_grade;
        const int exec_grade;
    public:
        Form(void);
        Form(const Form &src);
        Form(int sign_grade, int exec_grade);
		Form(const std::string name);
		Form(const std::string name, int sign_grade, int exec_grade);
        Form &operator=(const Form &src);
        ~Form();

        std::string getName(void) const;
        bool getSign(void) const;
        int getSignGrade(void) const;
        int getExecGrade(void) const;

        void beSigned(const Bureaucrat &src);
        
    class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

};

std::ostream &operator<<(std::ostream& , const Form &);

#endif