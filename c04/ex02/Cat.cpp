#include "Cat.hpp"

// Constructeur / destructeurs
Cat::Cat(void)
{
	std::cout << "Constructor Default Cat called"<< std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat& src): Animal(src)
{
	std::cout << "Constructor Bycopy Cat called" << std::endl;
	this->_brain = NULL;
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
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain(*src._brain);
	return (*this);
}

// fonctions membres
void Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
	
}

Brain* Cat::get_Brain() const
{
	return (this->_brain);
}
