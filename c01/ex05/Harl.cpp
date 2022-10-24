#include "Harl.hpp"

Harl::Harl()
{
	this->harl_fct_lst[0] = &Harl::debug;
	this->harl_fct_lst[1] = &Harl::info;
	this->harl_fct_lst[2] = &Harl::warning;
	this->harl_fct_lst[3] = &Harl::error;
}

void Harl::complain(std::string level)
{
	std::string message[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == message[i])
			(this->*harl_fct_lst[i])();
	}
}

void Harl::debug(void)
{
	std::cout << "debug message from Harl" << std::endl;
}

void Harl::info(void)
{
	std::cout << "info message from Harl" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "warning message from Harl" << std::endl;
}

void Harl::error(void)
{
	std::cout << "error message from Harl" << std::endl;
}
