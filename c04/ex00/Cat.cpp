#include "Cat.hpp"

// Constructeur / destructeurs
Cat::Cat(void)
{
	std::cout << "Constructor Default Cat called"<< std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat& src): Animal(src)
{
	std::cout << "Constructor Bycopy Cat called" << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat" << std::endl;
}

Cat& Cat::operator=(const Cat& src)
{
	std::cout << "Operator= Cat called" << std::endl;
	this->_type = src._type;
	return (*this);
}

// fonctions membres
void Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
	
}
