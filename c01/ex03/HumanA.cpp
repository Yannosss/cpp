#include "HumanA.hpp"

HumanA::HumanA(void)
{
	this->name = "no_name";
	this->weapon = NULL;
}

HumanA::HumanA(std::string name, Weapon& weapon):
name(name), weapon(&weapon)
{
	//this->name = name;
	//this->weapon = &weapon;
}

void	HumanA::attack(void)
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " has no weapon to attack" << std::endl;

}
