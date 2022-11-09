#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

# define CLAP_INITIAL_HP 10
# define CLAP_INITIAL_ENERGY 10
# define CLAP_INITIAL_DAMAGE 0

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);

		ClapTrap(const ClapTrap & src);
		~ClapTrap(void);

		ClapTrap& operator=(const ClapTrap& src);
		
		int get_hit_points(void);
		int get_energy_points(void);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		std::string	_name;
		int	_hit_points; //vie
		int	_energy_points; //energie
		int	_attack_damage; // damage
};

#endif
