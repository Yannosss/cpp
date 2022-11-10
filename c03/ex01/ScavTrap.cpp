#include "ScavTrap.hpp"

// #### Constructeurs destructeurs ####
ScavTrap::ScavTrap(void)
{
	this->_name = "no_name";
	this->_hit_points = SCAV_INITIAL_HP;
	this->_energy_points = SCAV_INITIAL_ENERGY;
	this->_attack_damage = SCAV_INITIAL_DAMAGE;
	std::cout << "Default Scav constructor called for " << this->_name << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hit_points = SCAV_INITIAL_HP;
	this->_energy_points = SCAV_INITIAL_ENERGY;
	this->_attack_damage = SCAV_INITIAL_DAMAGE;
	std::cout << "Scav constructor with name called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & src)
{
	std::cout << "Scav copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Scav destructor called for " << this->_name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
	std::cout << "Scav copy assignment operator called" << std::endl;
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return (*this);
}
