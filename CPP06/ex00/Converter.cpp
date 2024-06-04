#include "Converter.hpp"

Converter::Converter(void) {
    this->_c = '\0';
    this->_i = 0;
    this->_f = 0.0f;
    this->_d = 0.0;

}
Converter::~Converter(void) {}
Converter::Converter(const Converter &src) {
    *this = src;
}

Converter& Converter::operator=( const Converter& src )
{
    this->_c = src._c;
    this->_i = src._i;
    this->_f = src._f;
    this->_d = src._d;
    this->_arg = src._arg;
    this->_conv = src._conv;
    return *this;
}

void Converter::setchar(char c){
    this->_c = c;
}

void Converter::setint(int i){
    this->_i = i;
}

void Converter::setdouble(double d){
    this->_d = d;
}

void Converter::setfloat(float f){
    this->_f = f;
}

char Converter::getchar(void) const {
    return this->_c;
}

int Converter::getint(void) const {
    return this->_i;
}

double Converter::getdouble(void) const {
    return this->_d;
}

float Converter::getfloat(void) const {
    return this->_f;
}

void Converter::converter(std::string arg)
{
    this->_arg = arg;
    if (this->_conv == 1)
    {
        _c = _arg[0];
        _i = static_cast< int >( _c );
        _f = static_cast< float >( _c );
        _d = static_cast< double >( _c );
    }
    else if (this->_conv == 2)
    {
        std::istringstream(_arg) >> _i;
        _f = static_cast< float >( _i );
        _d = static_cast< double >( _i );
        _c = static_cast< char >( _i );
    }
    else if (this->_conv == 3)
    {
        std::istringstream(_arg) >>_f;
        _i = static_cast< int >( _f );
        _d = static_cast< double >( _f );
        _c = static_cast< char >( _f );
    }
    else if (this->_conv == 4)
    {
        std::istringstream(_arg) >> _d;
        _f = static_cast< float >( _d );
        _i = static_cast< int >( _d );
        _c = static_cast< char >( _d );
    }
}

void Converter::getType(std::string arg)
{
    int conv = 0;
    int i;
    std::istringstream(arg) >> i;
    if (                       )
    {
        this->_conv = 2;
        return ;
    }
    if (arg.length() == 1)
        this->_conv = 1;

}

// std::ostream&    operator<<( std::ostream& out, const Converter& src ) {
//     out << "char: " << 
// }

