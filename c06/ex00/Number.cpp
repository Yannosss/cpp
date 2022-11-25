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
	std::cout << "Constructor Default Number called"<< std::endl;
}

Number::Number(const Number& src)
{
	std::cout << "Constructor by copy Number called" << std::endl;
}

Number::~Number(void)
{
	std::cout << "Destructor Number" << std::endl;
}

Number& Number::operator=(const Number& src)
{
	std::cout << "Operator= Number called" << std::endl;
	// TBD
	return (*this);
}

// Surcharge operateur <<
std::ostream& operator<<(std::ostream& o, const Number& rhs)
{
	//o << rhs.getName() << " TBD " << rhs.TBD();
	return (o);
}

// get set
bool	Number::get_char_non_displayable()
{
	return (this->_char_non_displayable);
}
bool	Number::get_int_non_displayable()
{
	return (this->_int_non_displayable);
}
void	Number::set_char_non_displayable(bool value)
{
	this-> _char_non_displayable = value;
}
void	Number::set_int_non_displayable(bool value)
{
	this-> _int_non_displayable = value;
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
	if(this->_char_non_displayable)
		std::cout << "char: "<< "Non displayable" << std::endl;
	else
		std::cout << "char: '"<< this->_char_value << "'" << std::endl;

	if(this->_int_non_displayable)
		std::cout << "int: "<< "Non displayable" << std::endl;
	else
		std::cout << "int: "<< this->_int_value << std::endl;

	std::cout << "float: " << std::fixed << std::setprecision(1) << this->_float_value  << "f" << std::endl;
	std::cout << "double: " << this->_double_value << std::endl;

}

