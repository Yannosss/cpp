#include "Number.hpp"

// Constructeur / destructeurs
Number::Number(void)
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
	if(_char_non_displayable)
		std::cout << "char: "<< "Non displayable" << std::endl;
	else
		std::cout << "char: '"<< this->_char_value << "'" << std::endl;

	std::cout << "int: "<< this->_int_value << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << this->_float_value  << "f" << std::endl;
	std::cout << "double: " << this->_double_value << std::endl;

}

