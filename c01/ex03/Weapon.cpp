#include "Weapon.hpp"

Weapon::Weapon(void):
	type("wood stick")

{
}

Weapon::Weapon(std::string name):
	type(name)
{
}

const std::string&	Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
