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
    bool  operator<( const Fixed &);
    bool  operator>( const Fixed &);
    bool  operator<=( const Fixed &);
    bool  operator>=( const Fixed &);
    bool  operator==( const Fixed &);
    bool  operator!=( const Fixed &);

    float operator+(const Fixed &f ) const;
    float operator-(const Fixed &f ) const;
    float operator*(const Fixed &f ) const;
    float operator/(const Fixed &f ) const;

    Fixed &operator++(void);
    Fixed operator++( int );
    Fixed &operator--(void);
    Fixed operator--( int );

    static Fixed &max( Fixed &g, Fixed &h);
    static const Fixed &max( const Fixed &g, const Fixed &h);
    static Fixed &min( Fixed &g, Fixed &h);
    static const Fixed &min( const Fixed &g, const Fixed &h);

    int getRawbits(void) const;
    void setRawbits(int const raw);
    int toInt(void) const;
    float toFloat(void) const;

private:
    int nb;
};

std::ostream& operator<<(std::ostream& os, const Fixed &f);

#endif
