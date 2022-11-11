#include "FragTrap.hpp"

// #### Constructeurs destructeurs ####
FragTrap::FragTrap(void)
{
	this->_name = "no_name";
	this->_hit_points = FRAG_INITIAL_HP;
	this->_energy_points = FRAG_INITIAL_ENERGY;
	this->_attack_damage = FRAG_INITIAL_DAMAGE;
	std::cout << "Default Scav constructor called for " << this->_name << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hit_points = FRAG_INITIAL_HP;
	this->_energy_points = FRAG_INITIAL_ENERGY;
	this->_attack_damage = FRAG_INITIAL_DAMAGE;
	std::cout << "Scav constructor with name called" << std::endl;
}

FragTrap::FragTrap(const FragTrap & src)
{
	std::cout << "Scav copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Scav destructor called for " << this->_name << std::endl;
}

// Fonctions
void FragTrap::attack(const std::string& target)
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

void	FragTrap::guardGate(void)
{
	std::cout << "ScavTrap is in mode Gate keeper" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High five ?" << std::endl;
}
