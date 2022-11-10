#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

# define SCAV_INITIAL_HP 100
# define SCAV_INITIAL_ENERGY 50
# define SCAV_INITIAL_DAMAGE 20

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);

		ScavTrap(const ScavTrap & src);
		~ScavTrap(void);

		ScavTrap& operator=(const ScavTrap& src);


};

#endif
