#include "main.hpp"

bool is_digits(const std::string &str)
{
	return (str.find_first_not_of("0123456789") == std::string::npos);
}

bool is_digits_dot_f(const std::string &str)
{
	return str.find_first_not_of("0123456789.f") == std::string::npos;
}

bool is_f(const std::string &str)
{
	return str.find_first_not_of("f") == std::string::npos;
}
void print_impossible()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

void	print_not_a_number()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}

void	print_positive_inf()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: +inff" << std::endl;
	std::cout << "double: +inff" << std::endl;
}

void	print_negative_inf()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: -inff" << std::endl;
	std::cout << "double: -inff" << std::endl;
}
