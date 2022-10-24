#include "Harl.hpp"

//int fct_test(int b)
//{
//	std::cout << "fonction test\n";
//	return (b * 2);

//}

void Harl::complain(std::string level)
{
	//void (Harl::*harl_fct)(void) = &Harl::debug;
	//void (Harl::&harl_fct)(void) = Harl::debug;

	void (Harl::*harl_fct_lst[])(void) = {&Harl::debug,
											&Harl::info,
											&Harl::warning,
											&Harl::error};

	std::string message[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == message[i])
			(this->*harl_fct_lst[i])();
			//std::cout << "i " << i << std::endl;


	}


	//(this->*harl_fct)();
	//(this->*harl_fct_lst[0])();
	//std::cout << "test\n";

	//void (Harl::*harl_fct)(void) = Harl::debug;
	
	//int (*fct)(int) = &fct_test;
	//int a = fct(222);
	//std::cout << a << std::endl;
	
	//int (& fct2)(int) = fct_test;
	//int a2 = fct(222);
	//std::cout << a2 << std::endl;
}

void Harl::debug(void)
{
	std::cout << "debug message" << std::endl;
}

void Harl::info(void)
{
	std::cout << "info message" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "warning message" << std::endl;
}

void Harl::error(void)
{
	std::cout << "error message" << std::endl;
}
