#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
	std::cout << "### test creation without name ###" << std::endl;
	std::cout << "\x1B[37m";
	ScavTrap scav1;
	print_status(scav1);

	// test 2
	std::cout << "\x1B[36m";
	std::cout << "### test creation with name ###" << std::endl;
	std::cout << "\x1B[37m";
	ScavTrap scav2("scav");
	print_status(scav2);
	scav2.guardGate();
	scav2.attack("scav1");
	scav2.takeDamage(10);
	scav2.beRepaired(1);
	print_status(scav2);

	// test 3
	std::cout << "\x1B[36m";
	std::cout << "### test operateur = ###" << std::endl;
	std::cout << "\x1B[37m";
	ScavTrap scav3;
	scav3 = scav2;
	print_status(scav2);

	// fin tests
	std::cout << "\x1B[36m";
	std::cout << "### fin des tests ###" << std::endl;
	std::cout << "\x1B[37m";
}

