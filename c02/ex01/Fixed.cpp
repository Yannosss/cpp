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
Fixed::Fixed(const float nb)
{
	int divisor_pow = sizeof(int) * 8 - BIN_POINT_POSITION;
	int round = sizeof(int) * 8;
	std::cout << "divisor power: " << divisor_pow << std::endl;

	while (round > 0)
	{
		std::cout << "### status ###";
		std::cout << "--- round: " << round;
		std::cout << "--- divisor pow: " << divisor_pow;
		std::cout << "--- nb: " << divisor_pow << std::endl;

		if ()



		

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
