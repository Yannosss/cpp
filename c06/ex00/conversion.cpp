#include "main.hpp"

void	conv_from_char(Number* number, std::string str)
{
	std::cout << "APPEL conv from char, arg = " << str << std::endl;
	// conversion
	char c = str[0];

	// Fill char
	number->set_char_value(c);

	// Fill int
	number->set_int_value(static_cast<int>(c));

	// Fill float
	number->set_float_value(static_cast<float>(c));
	
	// Fill double
	number->set_double_value(static_cast<double>(c));

	// print
	number->print();
}

void	conv_from_int(Number* number, const std::string str)
{
	std::cout << "APPEL conv from int, arg = " << str << std::endl;
	// conversion
	long long_conversion;
	std::stringstream ss; 
	ss << str;
	ss >> long_conversion;
	if (long_conversion > INT_MAX || long_conversion < INT_MIN)
	{
		std::cout << "Warning: Conversion in integer not possible (overflow)" << std::endl;
		return;
	}

	int int_conversion = static_cast<int>(long_conversion);

	// Fill char
	char c = static_cast<char>(int_conversion);
	if (std::isprint(c))
	{
		std::cout << "cjeck cahr:" << c << std::endl;

		number->set_char_value(c);
	}
	else
		number->set_char_non_displayable(true);

	// Fill int
	number->set_int_value(int_conversion);

	// Fill float
	number->set_float_value(static_cast<float>(int_conversion));	
	
	// Fill double
	number->set_double_value(static_cast<double>(int_conversion));
	
	// print
	number->print();

}

/* conversion initial de int
{
	std::cout << "APPEL conv from int, arg = " << str << std::endl;


	// Fill char
	//number->set_char_value(c);

	// Fill int
	long long_conversion;
	std::stringstream ss; 
	ss << str;
	ss >> long_conversion;
	if (long_conversion > INT_MAX || long_conversion < INT_MIN)
	{
		number->set_int_non_displayable(true);
		number->set_int_value(0);
	}
	else
	{
		number->set_int_value(long_conversion);
	}

	// Fill float
	float float_conversion = std::atof(str.c_str());
	if (isinf(float_conversion))
	{

	}
	else
	{
		number->set_float_value(std::atof(str.c_str()));
	}
	//number->set_float_value(static_cast<float>(c));
	
	// Fill double
	number->set_double_value(std::atof(str.c_str()));

	//number->set_double_value(static_cast<double>(c));

	// print
	number->print();

}
*/
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
