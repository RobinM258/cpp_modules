#include "Brain.hpp"

Brain::Brain()
{
	ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		ideas[i] = "brain ideas";
	std::cout << "Brain constructor created and filled with ideas" << std::endl;
}

Brain::~Brain()
{
	delete [] (ideas);
	std::cout << "Brain constructor deleted" << std::endl;
}

Brain::Brain(Brain & ref)
{
	std::string *ref_ideas = ref.getIdeas();
	ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		ideas[i] = ref_ideas[i] + " stolen";
	std::cout << "Brain connstructor copy created" << std::endl;
}

Brain & Brain::operator=(Brain const & r)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = r.ideas[i];
	return (*this);
}

std::string *Brain::getIdeas()
{
	return (ideas);
}