#ifndef HUMANB_HPP
#define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(void);
		HumanB(std::string name);
		void	attack(void) const;
		void	setWeapon(Weapon& weapon);

	private:
		std::string	name;
		Weapon	*weapon;

};


#endif
