#include <string>
#include <iomanip>
#include "Harl.hpp"


void Harl::complain(std::string level)
{
	void (*Harl::harl_fct)(void)= &(this->debug);
	harl_fct();

}

void Harl::debug(void)
{
	std::cout << "test\n";
}

void Harl::info(void)
{

}

void Harl::warning(void)
{

}

void Harl::error(void)
{

}
