#include "Weapon.hpp"

Weapon::Weapon(void):
	_type("wood stick")
{
}

Weapon::Weapon(std::string name):
	_type(name)
{
}

const std::string&	Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
