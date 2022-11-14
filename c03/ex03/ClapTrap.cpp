#include "ClapTrap.hpp"

// #### Constructeurs destructeurs ####
ClapTrap::ClapTrap(void):
_name("no_name"), _hit_points(CLAP_INITIAL_HP), _energy_points(CLAP_INITIAL_ENERGY), _attack_damage(CLAP_INITIAL_DAMAGE)
{
	std::cout << "Default Clap constructor called for " << this->_name << std::endl;
}

ClapTrap::ClapTrap(std::string name):
_hit_points(CLAP_INITIAL_HP), _energy_points(CLAP_INITIAL_ENERGY), _attack_damage(CLAP_INITIAL_DAMAGE)
{
	std::cout << "Clap constructor with name called" << std::endl;
	this->_name = name;
}

ClapTrap::ClapTrap(const ClapTrap & src)
{
	std::cout << "Clap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Clap destructor called for " << this->_name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	std::cout << "Clap copy assignment operator called" << std::endl;
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return (*this);
}

// #### fonction membres ####
std::string ClapTrap::get_name(void)
{
	return (this->_name);
}

int ClapTrap::get_hit_points(void)
{
	return (this->_hit_points);
}

int ClapTrap::get_energy_points(void)
{
	return (this->_energy_points);
}

int ClapTrap::get_attack_damage(void)
{
	return (this->_attack_damage);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead and cannot attack" << std::endl;
		return ;
	}
	if (this->_energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has not enough energy to attack" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " 
		<< this->_attack_damage << " points of damage!" << std::endl;
	this->_energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is aready dead and cannot take damage" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " take " << amount << " dammages " << std::endl;
	this->_hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead and cannot be repaired" << std::endl;
		return ;
	}
	if (this->_energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has not enough energy to be repaired" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " get " << amount << " of HP " << std::endl;
	this->_hit_points += amount;
	this->_energy_points--;
}
