#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "weapon creation 1\n";
	this->type = "";
}

Weapon::Weapon(std::string name):
	type(name)
{
	//this->type = name;
	std::cout << "weapon creation 2\n";

}

const std::string&	Weapon::getType()
{
	std::string&	type_ref = this->type;
	return (this->type);
}

void	Weapon::setType(std::string str)
{
	this->type = str;
}
