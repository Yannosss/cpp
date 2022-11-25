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
		print_impossible();
		return;
	}
	int int_conversion = static_cast<int>(long_conversion);

	// Fill char
	char c = static_cast<char>(int_conversion);
	if (int_conversion > 0 && std::isprint(c))
		number->set_char_value(c);
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

void	conv_from_float(Number* number, const std::string str)
{
	std::cout << "APPEL conv from float, arg = " << str << std::endl;
	// conversion
	float float_conversion = std::atof(str.c_str());

	//check overflow
	if (isinf(float_conversion))
	{
		std::cout << "Warning: First conversion in float not possible (overflow)" << std::endl;
		print_impossible();
		return ;
	}

	// Fill char
	char c = static_cast<char>(float_conversion);
	if (float_conversion > 0 && std::isprint(c))
		number->set_char_value(c);
	else
		number->set_char_non_displayable(true);

	// Fill int
	if (float_conversion > INT_MAX || float_conversion < INT_MIN)
	{
		std::cout << "Warning: overflow on int" << std::endl;
		number->set_int_non_displayable(true);
	}
	else
		number->set_int_value(static_cast<int>(float_conversion));

	// Fill float
	number->set_float_value(float_conversion);

	// Fill double
	number->set_double_value(static_cast<double>(float_conversion));

	// print
	number->print();
}

void	conv_from_double(Number* number, const std::string str)
{
	std::cout << "APPEL conv from double, arg = " << str << std::endl;
	// conversion
	double double_conversion = std::strtod(str.c_str(), NULL);
	//check overflow
	if (isinf(double_conversion))
	{
		std::cout << "Warning: First conversion in double not possible (overflow)" << std::endl;
		print_impossible();
		return ;
	}

	// Fill char
	char c = static_cast<char>(double_conversion);
	if (double_conversion > 0 && std::isprint(c))
		number->set_char_value(c);
	else
		number->set_char_non_displayable(true);

	// Fill int
	if (double_conversion > INT_MAX || double_conversion < INT_MIN)
	{
		std::cout << "Warning: overflow on int" << std::endl;
		number->set_int_non_displayable(true);
	}
	else
		number->set_int_value(static_cast<int>(double_conversion));

	// Fill float
	float float_conversion = std::atof(str.c_str());
	if (isinf(float_conversion))
	{
		std::cout << "Warning: overflow on float" << std::endl;
		number->set_float_non_displayable(true);
	}
	else
		number->set_int_value(static_cast<int>(double_conversion));

	// Fill double
	number->set_double_value(double_conversion);

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


