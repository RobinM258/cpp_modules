

#ifndef PHONEBOOK
#define PHONEBOOK

#include "Contact.hpp"

class PhoneBook
{
	private :
		Contact contacts[8];
		int		index;
	public :
		int add_contact(void);
		PhoneBook(void);
		~PhoneBook(void);
		int display_contact(void);
};

#endif	