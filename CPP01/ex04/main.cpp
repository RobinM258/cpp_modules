
#include <fstream>
#include <string>
#include <iostream>



std::string ft_replace(std::string line, char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	std::string ret;
	if (line.find(s1) != (long long unsigned int)-1)
	{
		while (line[i])
		{
			if (line[i] == s1[0])
			{
				j = 0;
				while (line [i + j] && s1[j] && s1[j] == line[i + j])
					j++;
				if (!s1[j])
				{
					i += j - 1;
					j = 0;
					while (s2[j])
					{
						ret.push_back(s2[j]);
						j++;
					}
				}
			}
			else 
				ret.push_back(line[i]);
			i++;
		}
		return ret;
	}
	else 
		return (line);
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
		std::ofstream out(n + ".replace");
		while (std::getline(in, line))
		{
			std::string test = ft_replace(line, av[2], av[3]);
			out << test << std::endl;
		}
	}
}