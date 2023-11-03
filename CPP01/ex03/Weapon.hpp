
#ifndef WEAPON
#define WEAPON

#include <iostream>
class Weapon
{
    private :
        std::string type;
    public :
        Weapon(void);
        ~Weapon(void);
        Weapon	operator=( const Weapon & );
        Weapon( std::string type );
        std::string getType( void ) const ;
        void setType(std::string newType);


};

#endif