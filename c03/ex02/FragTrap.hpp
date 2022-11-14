#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

# define FRAG_INITIAL_HP 100
# define FRAG_INITIAL_ENERGY 100
# define FRAG_INITIAL_DAMAGE 30

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap & src);
		~FragTrap(void);

		FragTrap& operator=(const FragTrap& src);

		void	highFivesGuys(void);
};

#endif
