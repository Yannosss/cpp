#include "Number.hpp"

// Constructeur / destructeurs
Number::Number(void):
_raw_nb(""),
_char_non_displayable(false),
_int_non_displayable(false),
_char_value(0),
_int_value(0),
_float_value(0),
_double_value(0)
{
}

Number::Number(const Number& src)
{
	*this = src;
}

Number::~Number(void)
{
}

Number& Number::operator=(const Number& src)
{
	this->_char_non_displayable = src._char_non_displayable;
	_int_non_displayable = src._int_non_displayable;
	_char_value = src._char_value;
	_int_value = src._int_value;
	_float_value = src._float_value;
	_double_value = src._double_value;
	return (*this);
}

// get
bool	Number::get_char_non_displayable()
{
	return (this->_char_non_displayable);
}
bool	Number::get_int_non_displayable()
{
	return (this->_int_non_displayable);
}
bool	Number::get_float_non_displayable()
{
	return (this->_float_non_displayable);
}
char	Number::get_char_value()
{
	return (this->_char_value);
}
int		Number::get_int_value()
{
	return (this->_int_value);
}
float	Number::get_float_value()
{
	return (this->_float_value);
}
double	Number::get_double_value()
{
	return (this->_double_value);
}

// set
void	Number::set_char_non_displayable(bool value)
{
	this-> _char_non_displayable = value;
}
void	Number::set_int_non_displayable(bool value)
{
	this-> _int_non_displayable = value;
}
void	Number::set_float_non_displayable(bool value)
{
	this-> _float_non_displayable = value;
}
void	Number::set_char_value(char value)
{
	this-> _char_value = value;
}
void	Number::set_int_value(int value)
{
	this-> _int_value = value;
}
void	Number::set_float_value(float value)
{
	this-> _float_value = value;
}
void	Number::set_double_value(double value)
{
	this-> _double_value = value;
}

// Fonctions
void	Number::print()
{
	// char
	if(this->_char_non_displayable)
		std::cout << "char: "<< "Non displayable" << std::endl;
	else
		std::cout << "char: '"<< this->_char_value << "'" << std::endl;

	// int
	if(this->_int_non_displayable)
		std::cout << "int: "<< "Non displayable" << std::endl;
	else
		std::cout << "int: "<< this->_int_value << std::endl;

	//float
	if(this->_float_non_displayable)
		std::cout << "float: "<< "Non displayable" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << this->_float_value  << "f" << std::endl;
	
	// double
	std::cout << "double: " << std::fixed << std::setprecision(1) << this->_double_value << std::endl;

}

