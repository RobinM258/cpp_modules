#ifndef CONVERTER
#define CONVERTER

#include <iostream>
#include <string>
#include <sstream> 
#include <locale>
#include <cctype>

class Converter{
    private:
        char _c;
        int _i;
        float _f;
        double _d;

        int _conv;
        std::string _arg;
    public:
        Converter( void );
        Converter( const Converter& src );
        ~Converter( void );
        Converter& operator=( const Converter& src );

        char getchar(void)const;
        int getint(void)const;
        double getdouble(void)const;
        float getfloat(void)const;

        void setchar(char c);
        void setint(int i);
        void setdouble(double d);
        void setfloat(float f);
        
        void converter(std::string arg);
        void getType(std::string arg);
};

//std::ostream& operator<<( std::ostream& out, const Converter& src );

#endif