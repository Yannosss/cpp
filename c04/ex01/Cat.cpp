#include "Cat.hpp"

// Constructeur / destructeurs
Cat::Cat(void)
{
	std::cout << "Constructor Default Cat called"<< std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat& src)
{
	std::cout << "Constructor Bycopy Cat called" << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat" << std::endl;
	delete this->_brain;
}

Cat& Cat::operator=(const Cat& src)
{
	std::cout << "Operator= Cat called" << std::endl;
	this->_type = src._type;
	delete this->_brain;
	this->_brain = new Brain(*src._brain);
	return (*this);
}

// fonctions membres
void Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
	
}
