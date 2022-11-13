#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

# include <iostream>
# include <string>


void print_status(ClapTrap& clap)
{
	std::cout << "HP: " << clap.get_hit_points() << " - Energy: " << clap.get_energy_points() << std::endl;
}

int	main(void)
{
	// test 1
	std::cout << "\x1B[36m";
	std::cout << "### test 1 ###" << std::endl;
	std::cout << "\x1B[37m";
	DiamondTrap diamond1("diamant");


	std::cout << "--- name         : " << diamond1.DiamondTrap::get_name() << std::endl;
	std::cout << "--- ClapTrap name: " << diamond1.ClapTrap::get_name() << std::endl;
	std::cout << "--- hit points   : " << diamond1.DiamondTrap::get_hit_points() << std::endl;
	std::cout << "--- energy points: " << diamond1.DiamondTrap::get_energy_points() << std::endl;
	std::cout << "--- attack damage: " << diamond1.DiamondTrap::get_attack_damage() << std::endl;
	
	diamond1.attack("diamiondX");
	diamond1.whoAmI();

}

