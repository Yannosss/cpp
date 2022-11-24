#include "main.hpp"

void	conv_from_char(Number* number, std::string str)
{
	std::cout << "APPEL conv from char, arg = " << str << std::endl;

	char c = str[0];

	// Fill char
	number->set_char_value(c);

	// Fill int
	number->set_int_value(static_cast<int>(c));

	// Fill float
	number->set_float_value(static_cast<float>(c));
	
	// Fill double
	number->set_double_value(static_cast<double>(c));
}


void	conv_from_int(Number* number, const std::string str)
{
	std::cout << "APPEL conv from int, arg = " << str << std::endl;

}
void	conv_from_float(Number* number, const std::string str)
{
	std::cout << "APPEL conv from float, arg = " << str << std::endl;

}
void	conv_from_double(Number* number, const std::string str)
{
	std::cout << "APPEL conv from double, arg = " << str << std::endl;

}

void	not_a_number_case()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}
