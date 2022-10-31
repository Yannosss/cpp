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

// constructeur prenant un float
Fixed::Fixed(const float nb):
_RawBits(0)
{
	// ajout secu nb trop grand (par rappora a ce que peut stocker la classe)
	int divisor_pow = sizeof(int) * 8 - BIN_POINT_POSITION;
	int round = sizeof(int) * 8;
	std::cout << "divisor power: " << divisor_pow << std::endl;

	while (round > 0)
	{
		std::cout << "### status ###";
		std::cout << "--- round: " << round;
		std::cout << "--- divisor pow: " << divisor_pow;
		std::cout << "--- nb: " << divisor_pow << std::endl;

		std::cout << "nb: " << nb << " - division: " << pow(2.0, divisor_pow) << std::endl;

		if (nb / pow(2.0, divisor_pow) > 1)
		{
			//nb = nb - pow(2.0, divisor_pow);
			_RawBits += pow(2, divisor_pow + BIN_POINT_POSITION);
		}




		

		divisor_pow--;
		round--;
	}
	

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
	//this->_binary_point_position = src.get_binary_point_position();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_RawBits);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_RawBits = raw;
}

int Fixed::get_binary_point_position(void) const
{
	return (this->_binary_point_position);
}

void Fixed::print_rawbits_binary()
{
	
	long nb = this->_RawBits;
	int divisor_pow = sizeof(int) * 8 - 2;
	int round = sizeof(int) * 8 - 1;
	std::cout << "### Print rabits in binary ###" << std::endl;

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
	
}
