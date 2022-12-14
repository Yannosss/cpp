#include "WrongAnimal.hpp"

// Constructeur / destructeurs
WrongAnimal::WrongAnimal(void)
{
	std::cout << "Constructor Default WrongAnimal called"<< std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	std::cout << "Constructor Bycopy WrongAnimal called" << std::endl;
	*this = src;	
}

WrongAnimal::~WrongAnimal(void)
{	
	std::cout << "Destructor WrongAnimal" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
	std::cout << "Operator= WrongAnimal called" << std::endl;
	this->_type = src._type;
	return (*this);
}

// fonctions membres
std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound" << std::endl;
}
