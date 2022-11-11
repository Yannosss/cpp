#include "ClapTrap.hpp"
#include "FragTrap.hpp"

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
	FragTrap frag1;
	print_status(frag1);

	// test 2
	std::cout << "\x1B[36m";
	std::cout << "### test creation with name ###" << std::endl;
	std::cout << "\x1B[37m";
	FragTrap frag2("frag2");
	print_status(frag2);
	frag2.attack("frag1");
	frag2.takeDamage(10);
	frag2.beRepaired(1);
	print_status(frag2);


}

