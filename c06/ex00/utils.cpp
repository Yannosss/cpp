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
//bool is_printable(char c)
