#ifndef FIXED
#define FIXED

#include <iostream>
class Fixed
{
    private:
        int nb;
    public:
        Fixed(void);
        ~Fixed(void);
        Fixed(const Fixed &obj);
        Fixed &operator=(const Fixed &);
        int getRawbits(void) const ;
        void setRawbits(int const raw);
};

#endif 
