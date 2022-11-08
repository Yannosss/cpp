#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(ClapTrap& const src);
		~ClapTrap(void);

		ClapTrap& operator=(const ClapTrap& src);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		int	name;
		int	hit_points;
		int	energy_points;
		int	Attack_damage;

};

#endif
