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

ScavTrap::ScavTrap(std::string name): ClapTrap(name) 
{
	this->_name = name;
	this->_hit_points = SCAV_INITIAL_HP;
	this->_energy_points = SCAV_INITIAL_ENERGY;
	this->_attack_damage = SCAV_INITIAL_DAMAGE;
	std::cout << "Scav constructor with name called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & src): ClapTrap(src)
{
	std::cout << "Scav copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Scav destructor called for " << this->_name << std::endl;
}

// Fonctions
void ScavTrap::attack(const std::string& target)
{
	if (this->_hit_points <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead and cannot attack" << std::endl;
		return ;
	}
	if (this->_energy_points <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " has not enough energy to attack" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " 
		<< this->_attack_damage << " points of damage!" << std::endl;
	this->_energy_points--;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is in mode Gate keeper" << std::endl;
}
