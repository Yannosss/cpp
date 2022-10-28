#include "Harl.hpp"

Harl::Harl()
{
	this->_harl_fct_lst[0] = &Harl::_debug;
	this->_harl_fct_lst[1] = &Harl::_info;
	this->_harl_fct_lst[2] = &Harl::_warning;
	this->_harl_fct_lst[3] = &Harl::_error;
}

void Harl::complain(std::string level)
{
	std::string message[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == message[i])
			(this->*_harl_fct_lst[i])();
	}
}

void Harl::_debug(void)
{
	std::cout << "Harl say debug" << std::endl;
}

void Harl::_info(void)
{
	std::cout << "Harl say info" << std::endl;
}

void Harl::_warning(void)
{
	std::cout << "Harl say warning" << std::endl;
}

void Harl::_error(void)
{
	std::cout << "Harl say error" << std::endl;
}
