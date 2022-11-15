#include "Animal.hpp"

// Constructeur / destructeurs
Animal::Animal(void)
{
	this->type = "Animal";
}

Animal::Animal(const Animal& src)
{
	*this = src;	
}

Animal::~Animal(void)
{	
}

Animal& Animal::operator=(const Animal& src)
{
	this->type = src.type;
	return (*this);
}

// fonctions membres
std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound(void) const
{
	std::cout << "Animal sound" << std::endl;
	
}
