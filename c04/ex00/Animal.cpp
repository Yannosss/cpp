#include "Animal.hpp"

// Constructeur / destructeurs
Animal::Animal(void)
{
	std::cout << "Constructor Default Animal called"<< std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal& src)
{
	std::cout << "Constructor Bycopy Animal called" << std::endl;
	*this = src;	
}

Animal::~Animal(void)
{	
	std::cout << "Destructor Animal" << std::endl;
}

Animal& Animal::operator=(const Animal& src)
{
	std::cout << "Operator= Animal called" << std::endl;
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
