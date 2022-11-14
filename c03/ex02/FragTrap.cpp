#include "FragTrap.hpp"

// #### Constructeurs destructeurs ####
FragTrap::FragTrap(void)
{
	this->_name = "no_name";
	this->_hit_points = FRAG_INITIAL_HP;
	this->_energy_points = FRAG_INITIAL_ENERGY;
	this->_attack_damage = FRAG_INITIAL_DAMAGE;
	std::cout << "Default Frag constructor called for " << this->_name << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hit_points = FRAG_INITIAL_HP;
	this->_energy_points = FRAG_INITIAL_ENERGY;
	this->_attack_damage = FRAG_INITIAL_DAMAGE;
	std::cout << "Frag constructor with name called" << std::endl;
}

FragTrap::FragTrap(const FragTrap & src): ClapTrap(src)
{
	std::cout << "Frag copy constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Frag destructor called for " << this->_name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
{
	std::cout << "Frag copy assignment operator called" << std::endl;
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	
	this->_attack_damage = src._attack_damage;
	return (*this);
}
void	FragTrap::highFivesGuys(void)
{
	std::cout << "High five ?" << std::endl;
}
