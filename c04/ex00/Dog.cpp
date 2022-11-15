#include "Dog.hpp"

// Constructeur / destructeurs
Dog::Dog(void)
{
	std::cout << "Constructor Default Dog called"<< std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& src)
{
	std::cout << "Constructor Bycopy Dog called" << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << "Destructor Dog" << std::endl;
}

Dog& Dog::operator=(const Dog& src)
{
	std::cout << "Operator= Dog called" << std::endl;
	this->type = src.type;
	return (*this);
}

// fonctions membres
void Dog::makeSound(void) const
{
	std::cout << "Wouf" << std::endl;
	
}
