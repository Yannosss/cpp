#include "Brain.hpp"

// Constructeur / destructeurs
Brain::Brain(void)
{
	std::cout << "Constructor Default Brain called"<< std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = "Idea ";
	}
}

Brain::Brain(const Brain& src)
{
	std::cout << "Constructor Bycopy Brain called" << std::endl;
	*this = src;	
}

Brain::~Brain(void)
{	
	std::cout << "Destructor Brain" << std::endl;
}

Brain& Brain::operator=(const Brain& src)
{
	std::cout << "Operator= Brain called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = src._ideas[i];
	}
	return (*this);
}

std::string Brain::get_ideas(int index) const
{
	if (index < 0 or index >= 100)
		return ("Wrong index");
	return (this->_ideas[index]);	
}
