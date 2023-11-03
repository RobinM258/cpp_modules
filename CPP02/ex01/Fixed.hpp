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

    float toFloat(void) const;
    int toInt(void);
    Fixed &operator=(const Fixed &);

    int getRawbits(void) const;
    void setRawbits(int const raw);

private:
    int nb;
};

#endif
