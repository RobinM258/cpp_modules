#include <string>
#include <iostream>
#include <cctype>

std::string Ft_ToUpper(std::string str)
{
    std::string ret;

    ret = str;
    for (int i = 0; ret[i]; i++)
    {
           ret[i] = toupper(ret[i]);
    }
    return (ret);
}
int main(int ac, char **av)
{
    for (int i = 1; i < ac; i++)
    {
        std::cout << Ft_ToUpper(av[i]);
    }
    std::cout << std::endl;
    return (0);
}