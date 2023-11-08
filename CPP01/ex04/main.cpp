
#include <fstream>
#include <string>
#include <cstring>
#include <iostream>



std::string ft_replace(std::string line, const char *s1, const char *s2)
{
    std::string result;
    size_t pos = 0;
    while (pos < line.length())
    {
        size_t found = line.find(s1, pos);
        if (found != std::string::npos)
        {
            result += line.substr(pos, found - pos); 
            result += s2;                            
            pos = found + strlen(s1);               
        }
        else
        {
            result += line.substr(pos);
            break;
        }
    }
    return result;
}

int main (int ac, char **av)
{
	std::ifstream in(av[1]);
	if (ac != 4)
		std::cout << "Nombre d'arguments incorrect" << std::endl;
	else if (!in)
		std::cout << "Fichier introuvable" << std::endl;
	else
	{
		std::string line;
		std::string n = (const char *)av[1];
		std::ofstream out((n + ".replace").c_str());
		while (std::getline(in, line))
		{
			std::string test = ft_replace(line, av[2], av[3]);
			out << test << std::endl;
		}
	}
}