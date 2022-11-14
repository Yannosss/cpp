#include "Animal.hpp"

Animal::Animal(void)
{
	this->type = "Animal";
	std::cout << "Defaut constructor Animal called" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}


void Animal::makeSound(void) const
{
	std::cout << "Animal sound" << std::endl;
	
}

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Defaut constructor Dog called" << std::endl;

}
void Dog::makeSound(void) const
{
	std::cout << "Wouf" << std::endl;
	
}

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Defaut constructor Cat called" << std::endl;

}
void Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
	
}

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "Defaut constructor Cat called" << std::endl;

}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongMiaou" << std::endl;
	
}

WrongAnimal::WrongAnimal(void)
{
	this->type = "WrongAnimal";
	std::cout << "Defaut constructor WrongAnimal called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound" << std::endl;
}
