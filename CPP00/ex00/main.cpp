#include <string>
#include <iostream>
#include <cctype>

std::string Ft_ToUpper(std::string str)
{
    std::string ret;

    ret = str;
    for (char& c : ret)
    {
            if (std::islower(c))
                c = std::toupper(c);
    }
    return (ret);
}

int main()
{
    std::string text = "Tzgzkkq kykkQ";
    std::string resultat = Ft_ToUpper(text);
    std::cout << resultat << std::endl;
    return (0);
}