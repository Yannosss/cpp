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

	this->_RawBits = round(nb << this->_binary_point_position);
}

// constructeur prenant un float methode bit shifting
Fixed::Fixed(const float nb):
_RawBits(0)
{
	std::cout << "Float constructor called" << std::endl;
	this->_RawBits = round(nb * (1 << _binary_point_position));
}

// constructeur prenant un float methode brute
//Fixed::Fixed(const float number):
//_RawBits(0)
//{
//	double nb = number;
//	// ajout secu nb trop grand (par rappora a ce que peut stocker la classe)
//	int divisor_pow = sizeof(int) * 8 - BIN_POINT_POSITION;
//	int round = sizeof(int) * 8;
//	std::cout << "divisor power: " << divisor_pow << std::endl;
//	while (round > 0)
//	{
//		std::cout << "### status ###";
//		std::cout << "--- round: " << round;
//		std::cout << "--- divisor pow: " << divisor_pow;
//		std::cout << "--- nb: " << divisor_pow << std::endl;
//		std::cout << "nb: " << nb << " - division: " << pow(2.0, divisor_pow) << std::endl;
//		std::cout << "result division " << nb / pow(2.0, divisor_pow) << std::endl;
//		if (nb / pow(2.0, divisor_pow) >= 1.0)
//		{
//			nb = nb - pow(2.0, divisor_pow);
//			_RawBits += pow(2, divisor_pow + BIN_POINT_POSITION);
//		}
//		divisor_pow--;
//		round--;
//		std::cout << std::endl;
//	}
//}


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
	//this->_binary_point_position = src.get_binary_point_position();
	return (*this);
}


int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_RawBits);
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
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

void Fixed::print_rawbits_binary()
{
	
	long nb = this->_RawBits;
	int divisor_pow = sizeof(int) * 8 - 2;
	int round = sizeof(int) * 8 - 1;
	std::cout << "### Print rawbits in binary ###" << std::endl;

	if (nb < 0)
	{
		std::cout << "(1) ";
		nb = nb + 2147483648;
	}	
	else
		std::cout << "(0) ";	

	while (round > 0)
	{
		if (round % 8 == 0)
			std::cout << "- ";	

		if (nb/ (int)pow(2.0, divisor_pow) > 0)
		{
			std::cout << "1 ";
			nb = nb - (int)pow(2.0, divisor_pow);
		}
		else
		{
			std::cout << "0 ";	
		}
		//std::cout << "(" << divisor_pow << ")";	

		

		divisor_pow--;
		round--;

	}
	std::cout << std::endl;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o<< rhs.toFloat();
	return (o);
}
