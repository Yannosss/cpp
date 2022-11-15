#include "WrongCat.hpp"

// Constructeur / destructeurs
WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "Defaut constructor Cat called" << std::endl;

}

WrongCat::WrongCat(const WrongCat& src)
{
	*this = src;
}

WrongCat::~WrongCat(void)
{
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
	this->type = src.type;
	return (*this);
}

// fonctions membres
void WrongCat::makeSound(void) const
{
	std::cout << "WrongMiaou" << std::endl;
}
