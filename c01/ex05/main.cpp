#include <string>
#include <iostream>
#include "Harl.hpp"

int	main(void)
{
	Harl harl;
	std::cout << "Send level DEBUG to harl" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "Send level INFO to harl" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;

	std::cout << "Send level WARNING to harl" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;

	std::cout << "Send level ERROR to harl" << std::endl;
	harl.complain("ERROR");
}
