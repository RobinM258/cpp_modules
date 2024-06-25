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
    getType(arg);
    if (arg == "nan")
    {
        std::cout << "char: impossible" << "\n" 
        << "int: impossible\n" 
        << "float: nanf\n"
        << "double: nan" << std::endl;

    }

    if (this->_conv == 1)
    {
        _c = _arg[0];
        _i = static_cast< int >( _c );
        _f = static_cast< float >( _c );
        _d = static_cast< double >( _c );

        std::cout << "char: " << _c << "\n" 
        << "int: " << _i << "\n" 
        << "float: " << _f  << ".0f\n"
        << "double: " << _d  << ".0" << std::endl;

    }
    else if (this->_conv == 2)
    {
        std::istringstream(_arg) >> _i;
        _f = static_cast< float >( _i );
        _d = static_cast< double >( _i );
        _c = static_cast< char >( _i );

        std::cout << "char: Non displayable\n" 
        << "int: " << _i << "\n" 
        << "float: " << _f  << ".0f\n"
        << "double: " << _d  << ".0" << std::endl;
    }
    else if (this->_conv == 3)
    {
        std::istringstream(_arg) >>_f;
        _i = static_cast< int >( _f );
        _d = static_cast< double >( _f );
        _c = static_cast< char >( _f );

        std::cout << "char: Non displayable\n" 
        << "int: " << _i << "\n" 
        << "float: " << _f  << ".0f\n"
        << "double: " << _d  << ".0" << std::endl;
    }
    else if (this->_conv == 4)
    {
        std::istringstream(_arg) >> _d;
        _f = static_cast< float >( _d );
        _i = static_cast< int >( _d );
        _c = static_cast< char >( _d );
        std::cout << "char: '*'\n" 
        << "int: " << _i << "\n" 
        << "float: " << _f  << ".0f\n"
        << "double: " << _d  << ".0" << std::endl;
    }
    else if (_conv == 0)
    {
        std::cout << "wrong argument" << std::endl;
    }
}

void Converter::getType(std::string arg)
{
    int i;
    float f;
    int j = 0;
    int t = 0;
    int p = 0;
    if (arg.length() == 1 && std::isalpha(arg[0]))
    {
        this->_conv = 1;
        return ;
    }
    std::istringstream ss(arg);
    ss >> i;
    if (!ss.fail() && ss.eof())
    {
        this->_conv = 2;
        return ;
    }
    ss >> f;
    if (!ss.fail() && ss.eof())
    {
        this->_conv = 3;
        return ;
    }

    while (arg[j])
    {
        if (arg[j] == '.' && (arg[j + 1] >= '0' && arg[j + 1] <= '9') && (arg[j - 1] >= '0' && arg[j - 1] <= '9'))
            t++;
        if (arg[j] == 'f')
            p++;
        j++;
    }
    j = 0;
    while (arg[j])
    {
        if (arg[j] != 'f' && arg[j] != '.' && (arg[j] < '0' && arg[j] > '9'))
        {
            this->_conv = 0;
            return ;
        }
        j++;
    }
    if (t == 1 && p == 1)
        this->_conv = 4;
    return;
}

// std::ostream&    operator<<( std::ostream& out, const Converter& src ) {
//     out << "char: " << _c << "/nint: " << _i << "\nfloat: " << _f << "\ndouble: " << _d
// }

