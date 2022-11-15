#include "WrongAnimal.hpp"

// Constructeur / destructeurs
WrongAnimal::WrongAnimal(void)
{
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	*this = src;	
}

WrongAnimal::~WrongAnimal(void)
{	
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
	this->type = src.type;
	return (*this);
}

// fonctions membres
std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound" << std::endl;
}
