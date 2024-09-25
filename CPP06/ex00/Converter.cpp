#include "Converter.hpp"

int Converter::getType(std::string arg)
{
    int i;
    float f;
    int j = 0;
    int t = 0;
    int p = 0;
    if (arg.length() == 1 && std::isalpha(arg[0]))
    {
        return 1;
    }
    std::istringstream ss(arg);
    ss >> i;
    if (!ss.fail() && ss.eof())
    {
        return 2;
    }
    ss >> f;
    if (!ss.fail() && ss.eof())
    {
        return 3;
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
            return 0;
        }
        j++;
    }
    if (t == 1 && p == 1)
        return 4;
    if (t == 1 && p == 0)
        return 3;
    return 0;
}


int isprint2(int arg)
{
    if (arg >= 32 && arg <= 126)
        return 1;
    return 0;
}

void Converter::converter(std::string arg)
{
    char _c = '\0';
    int _i = 0;
    float _f = 0.0f;
    double _d = 0.0;
    
   int _conv = getType(arg);
    if (arg == "nan")
    {
        std::cout << "char: impossible" << "\n" 
        << "int: impossible\n" 
        << "float: nanf\n"
        << "double: nan" << std::endl;
    }
    if (arg == "+inff" || arg == "+inf")
    {
        std::cout << "char: impossible" << "\n" 
        << "int: impossible\n" 
        << "float: +inff\n"
        << "double: +inf" << std::endl;

    }
    if (arg == "-inff" || arg == "-inf")
    {
        std::cout << "char: impossible" << "\n" 
        << "int: impossible\n" 
        << "float: -inff\n"
        << "double: +inf" << std::endl;

    }

    if (_conv == 1)
    {
        _c = arg[0];
        _i = static_cast< int >( _c );
        _f = static_cast< float >( _c );
        _d = static_cast< double >( _c );

        if (isprint(arg[0]))
            std::cout << "char: " << _c << std::endl;
        else 
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " << _i << "\n" 
        << "float: " << _f  << ".0f\n"
        << "double: " << _d  << ".0" << std::endl;

    }
    else if (_conv == 2)
    {
        std::istringstream ss(arg);
        ss >> _i;
        _f = static_cast< float >( _i );
        _d = static_cast< double >( _i );
        _c = static_cast< char >( _i ); 

        std::cout << "char: " << (isprint2(_i) ? std::string(1, _c) : "Non displayable")
        << "\nint: ";
        if (ss.fail())
        {
            std::cout << "impossible\n";
        }
        else 
            std::cout << _i  << "\n";
        std::cout << "float: " << _f  << ".0f\n"
        << "double: " << _d  << ".0" << std::endl;
    }
    else if (_conv == 4)
    {
        std::cout << "float " << std::endl;
        std::istringstream(arg) >> _f;
        _i = static_cast< int >( _f );
        _d = static_cast< double >( _f );
        _c = static_cast< char >( _f );
        if (arg.length() > 9)
            std::cout << std::scientific;
        else
            std::cout << std::fixed << std::setprecision(arg.length() - (arg.find(".") + 1) - (arg.find('f') == std::string::npos ? 0:1));
        std::cout << "char: " << (isprint2(_i) ? std::string(1, _c) : "Non displayable")
        << "\nint: " << _i << "\n" 
        << "float: " << _f  << "f\n"
        << "double: " << _d  << std::endl;
    }
    else if (_conv == 3)
    {
        std::istringstream(arg) >> _d;
        _f = static_cast< float >( _d );
        _i = static_cast< int >( _d );
        _c = static_cast< char >( _d );
        
        if (arg.length() > 9)
            std::cout << std::scientific;
        else
            std::cout << std::fixed << std::setprecision(arg.length() - (arg.find(".") + 1));
        std::cout << "char: " << (isprint2(_i) ? std::string(1, _c) : "Non displayable")
        << "\nint: " << _i << "\n"
        << "float: " << _f  << "f\n"
        << "double: " << _d << std::endl;
    }
    else if (_conv == 0)
    {
        std::cout << "wrong argument" << std::endl;
    }
}
// std::ostream&    operator<<( std::ostream& out, const Converter& src ) {
//     out << "char: " << _c << "/nint: " << _i << "\nfloat: " << _f << "\ndouble: " << _d
// }

