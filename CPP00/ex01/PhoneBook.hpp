

#ifndef PHONEBOOK
#define PHONEBOOK

#include "Contact.hpp"

class PhoneBook
{
	private :
		Contact **contacts;
		int		index;
	public :
		void add_contact(void);
		PhoneBook(void);
		~PhoneBook(void);
		void display_contact(void);
		void display_contact(const std::string &);
};

#endif	