
#include <iostream>
#include <string>
#include <cctype>

#ifndef CONTACT
#define CONTACT

class Contact
{
	private :
		std::string Fname;
		std::string Lname;
		std::string Nname;
		std::string Pnumber;
		std::string Dsecret;
	public : 
		Contact(void);
		~Contact(void);
		Contact &operator=(const Contact&);
		Contact(const std::string &, const std::string &, const std::string &, const std::string &, const std::string &);
		std::string getFname(void) const;
		std::string getLname(void) const;
		std::string getNname(void) const;
		std::string getPhone(void) const;
		std::string getDsecret(void) const;

		void	display(void) const;
};

#endif	