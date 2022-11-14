#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void):ClapTrap(), ScavTrap(), FragTrap()
{
	this->DiamondTrap::_name = "no_name";
	this->ClapTrap::_name = "no_name_clap_name";
	this->_hit_points = FRAG_INITIAL_HP;
	this->_energy_points = SCAV_INITIAL_ENERGY;
	this->_attack_damage = FRAG_INITIAL_DAMAGE;
	std::cout << "Default Diamond constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(), FragTrap()
{
	this->DiamondTrap::_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->_hit_points = FRAG_INITIAL_HP;
	this->_energy_points = SCAV_INITIAL_ENERGY;
	this->_attack_damage = FRAG_INITIAL_DAMAGE;
	std::cout << "Diamond constructor with name called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & src): ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "Frag copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Diamond destructor called for " << this->_name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
	std::cout << "Diamond copy assignment operator called" << std::endl;
	this->DiamondTrap::_name = src.DiamondTrap::_name;
	this->ClapTrap::_name = src.ClapTrap::_name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return (*this);
}

std::string DiamondTrap::get_name(void)
{
	return (this->_name);
}

void DiamondTrap::whoAmI()
{
	std::cout << "my name is " << this->_name << std::endl;
	std::cout << "my ClapTrap name is " << this->ClapTrap::_name << std::endl;
}
