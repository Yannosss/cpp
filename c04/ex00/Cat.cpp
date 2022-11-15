#include "Cat.hpp"

// Constructeur / destructeurs
Cat::Cat(void)
{
	this->type = "Cat";
}

Cat::Cat(const Cat& src)
{
	*this = src;
}

Cat::~Cat(void)
{
}

Cat& Cat::operator=(const Cat& src)
{
	this->type = src.type;
	return (*this);
}

// fonctions membres
void Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
	
}
