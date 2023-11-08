#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>
class Fixed {
public:
    Fixed(void);
    Fixed(const int nb);
    Fixed(const float nb);
    ~Fixed(void);

    Fixed &operator=(const Fixed &);

    int getRawbits(void) const;
    void setRawbits(int const raw);
    int toInt(void) const;
    float toFloat(void) const;

private:
    int nb;
};

std::ostream& operator<<(std::ostream& os, const Fixed &f);

#endif
