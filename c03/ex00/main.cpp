#include "ClapTrap.hpp"
# include <iostream>
# include <string>

int	main(void)
{
	// test 1
	std::cout << "\x1B[36m";
	std::cout << "### test 1 mort ###" << std::endl;
	std::cout << "\x1B[37m";
	ClapTrap clap1("clap1");
	for (int i = 0; i < 3; i++)
	{
		clap1.takeDamage(5);
		clap1.beRepaired(1);
	}
	std::cout << "HP: " << clap1.get_hit_points() << " - Energy: " << clap1.get_energy_points() << std::endl;
	std::cout << std::endl;

	// test 2
	std::cout << "\x1B[36m";
	std::cout << "### test 2 energie ###" << std::endl;
	std::cout << "\x1B[37m";
	ClapTrap clap2("clap2");
	for (int i = 0; i < 11; i++)
	{
		clap2.beRepaired(1);
	}
	std::cout << "HP: " << clap2.get_hit_points() << " - Energy: " << clap2.get_energy_points() << std::endl;
	clap2.attack("clap1");
	clap2.takeDamage(5);
	std::cout << std::endl;

	// test 3
	std::cout << "\x1B[36m";
	std::cout << "### test 3 increment HP et energie ###" << std::endl;
	std::cout << "\x1B[37m";
	ClapTrap clap3("clap3");
	std::cout << "HP: " << clap3.get_hit_points() << " - Energy: " << clap3.get_energy_points() << std::endl;
	clap3.takeDamage(5);
	std::cout << "HP: " << clap3.get_hit_points() << " - Energy: " << clap3.get_energy_points() << std::endl;
	clap3.beRepaired(2);
	std::cout << "HP: " << clap3.get_hit_points() << " - Energy: " << clap3.get_energy_points() << std::endl;
	clap3.attack("clap1");
	std::cout << "HP: " << clap3.get_hit_points() << " - Energy: " << clap3.get_energy_points() << std::endl;
	std::cout << std::endl;

	// test 4
	std::cout << "\x1B[36m";
	std::cout << "### test 4 constructeur ###" << std::endl;
	std::cout << "\x1B[37m";
	ClapTrap clap4("clap4");
	ClapTrap clap5(clap4);
	clap5.beRepaired(2);
	ClapTrap clap6 = clap5;
	std::cout << "clap 4: HP: " << clap4.get_hit_points() << " - Energy: " << clap4.get_energy_points() << std::endl;
	std::cout << "clap 5: HP: " << clap5.get_hit_points() << " - Energy: " << clap5.get_energy_points() << std::endl;
	std::cout << "clap 6: HP: " << clap6.get_hit_points() << " - Energy: " << clap6.get_energy_points() << std::endl;

	return (0);
}
