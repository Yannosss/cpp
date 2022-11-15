#include "Dog.hpp"

// Constructeur / destructeurs
Dog::Dog(void)
{
	this->type = "Dog";
}

Dog::Dog(const Dog& src)
{
	*this = src;
}

Dog::~Dog(void)
{
}

Dog& Dog::operator=(const Dog& src)
{
	this->type = src.type;
	return (*this);
}

// fonctions membres
void Dog::makeSound(void) const
{
	std::cout << "Wouf" << std::endl;
	
}
