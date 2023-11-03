
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) { std::cout << "PhoneBook created" << std::endl ;
	contacts = new Contact*[8];
	index = 0;
}
PhoneBook::~PhoneBook(void) { std::cout << "PhoneBook deleted" << std::endl ;}

void PhoneBook::add_contact(void)
{
	std::string fn;

	while (fn.empty())
	{
		std::cout << "First name" << std::endl;
		std::cin >> fn;
	}
	std::string ln;

	while (ln.empty())
	{
		std::cout << "Last name" << std::endl;
		std::cin >> ln;
	}
	std::string nn;

	while (nn.empty())
	{
		std::cout << "Nickname" << std::endl;
		std::cin >> nn;
	}
	std::string pn;

	while (pn.empty())
	{
		std::cout << "Phone Number" << std::endl;
		std::cin >> pn;
	}
	std::string ds;

	while (ds.empty())
	{
		std::cout << "Darkest secret" << std::endl;
		std::cin >> ds;
	}
	contacts[index % 8] = new Contact(fn, ln, nn, pn, ds);
	std::cout << "Contact crée sous le prenom de " << contacts[index % 8]->getFname() << std::endl;
	index++;
}

void PhoneBook::display_contact(void) 
{
	if (index == 0)
		return;
	std::cout << "|  index   |first name|last name | nickname |" << std::endl;
	for(int i = 0; i < 8; i++)
	{	
		if (contacts[i])
		{
			if (index < i)
				break;	
			std::string Fn;
			Fn += "         ";
			Fn += i + 1 + '0';
			Fn += "|";
			for (int j = 0; j < (int)(10 - contacts[i]->getFname().length()); j++)
			Fn += " ";
			if (contacts[i]->getFname().length() > 10)
				Fn += contacts[i]->getFname().substr(0, 9) += ".|";
			else 
				Fn += contacts[i]->getFname() + "|";
			for (int j = 0; j < (int)(10 - contacts[i]->getLname().length()); j++)
			Fn += " ";
			if (contacts[i]->getLname().length() > 10)
				Fn += contacts[i]->getLname().substr(0, 9) += ".|";
			else 
				Fn += contacts[i]->getLname() + "|";
			for (int j = 0; j < (int)(10 - contacts[i]->getNname().length()); j++)
			Fn += " ";
			if (contacts[i]->getNname().length() > 10)
				Fn += contacts[i]->getNname().substr(0, 9) += ".|";
			else 
				Fn += contacts[i]->getNname() + "|";
			std::cout << "|" << Fn << std::endl;
		}
	}
	std::cout << "entrée le numéros de contact voulu" << std::endl;
	std::string ch;
	std::cin >> ch;
	int i;
	i = ch[0] - 1 - '0';
	if (contacts[i])
	{
		std::cout << "First name:   " << contacts[i]->getFname() << std::endl;
		std::cout << "Last name:    " << contacts[i]->getLname() << std::endl;
		std::cout << "Nickname:     " << contacts[i]->getNname() << std::endl;
		std::cout << "Phone number: " << contacts[i]->getPhone() << std::endl;
		std::cout << "Dark secret:  " << contacts[i]->getDsecret() << std::endl;
	}
}