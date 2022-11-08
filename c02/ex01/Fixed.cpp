#include "Fixed.hpp"

// constructeur par defaut
Fixed::Fixed(void):
_RawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// constructeur par recopie
Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

// constructeur prenant un int
Fixed::Fixed(const int nb):
_RawBits(0)
{
	std::cout << "Int constructor called" << std::endl;
	this->_RawBits = nb << this->_binary_point_position;
}

// constructeur prenant un float methode bit shifting
Fixed::Fixed(const float nb):
_RawBits(0)
{
	std::cout << "Float constructor called" << std::endl;
	this->_RawBits = roundf(nb * (1 << _binary_point_position));
}

// destructeur
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

// surcharge d'operateur d'affectation
Fixed& Fixed::operator=(Fixed const & src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_RawBits = src.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->_RawBits);
}

void Fixed::setRawBits(int const raw)
{
	this->_RawBits = raw;
}

int Fixed::get_binary_point_position(void) const
{
	return (this->_binary_point_position);
}

float Fixed::toFloat(void) const
{
	return((float)this->_RawBits / (1 << this->_binary_point_position));
}

int Fixed::toInt(void) const
{
	return((int)this->_RawBits >> this->_binary_point_position);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

//// pour debug
//void Fixed::print_rawbits_binary()
//{
//	long nb = this->_RawBits;
//	int divisor_pow = sizeof(int) * 8 - 2;
//	int round = sizeof(int) * 8 - 1;
//	std::cout << "### Print rawbits in binary ###" << std::endl;
//	if (nb < 0)
//	{
//		std::cout << "(1) ";
//		nb = nb + 2147483648;
//	}	
//	else
//		std::cout << "(0) ";	
//	while (round > 0)
//	{
//		if (round % 8 == 0)
//			std::cout << "- ";	
//		if (nb/ (int)pow(2.0, divisor_pow) > 0)
//		{
//			std::cout << "1 ";
//			nb = nb - (int)pow(2.0, divisor_pow);
//		}
//		else
//		{
//			std::cout << "0 ";	
//		}
//		divisor_pow--;
//		round--;
//	}
//	std::cout << std::endl;
//}
