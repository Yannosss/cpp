#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(void);
		HumanA(std::string name, Weapon& weapon);
		void	attack(void) const;

	private:
		std::string	name;
		Weapon	*weapon;

};

#endif
