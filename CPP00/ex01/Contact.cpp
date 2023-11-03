
#include "Contact.hpp"

Contact::Contact(void) { std::cout << "contact created" << std::endl ;}
Contact::~Contact(void) { std::cout << "contact deleted" << std::endl ;}

Contact::Contact(const std::string &Fname, const std::string &Lname, const std::string &Nname, const std::string &Pnumber, const std::string &Dsecret):
Fname(Fname), Lname(Lname), Nname(Nname), Pnumber(Pnumber), Dsecret(Dsecret){
}

Contact &Contact::operator=(const Contact &c)
{
	this->Fname = c.Fname; 
	this->Lname = c.Lname;
	this->Nname = c.Nname;
	this->Pnumber = c.Pnumber;
	this->Dsecret = c.Dsecret;
	return (*this);
}
std::string Contact::getFname(void) const { return(Fname); }
std::string Contact::getLname(void) const { return(Lname); }
std::string Contact::getNname(void) const { return(Nname); }
std::string Contact::getPhone(void) const { return(Pnumber); }
std::string Contact::getDsecret(void) const { return(Dsecret); }

 
