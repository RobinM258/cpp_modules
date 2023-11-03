#ifndef HARL
#define HARL

#include <iostream>

class Harl
{
	public:
		Harl(void);
		~Harl(void);
		Harl	operator=( const Harl & );

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void complain(std::string level);
};
#endif 