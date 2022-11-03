#include "Fixed.hpp"

// ##############   Constructeurs   ##############
Fixed::Fixed(void):
_RawBits(0)
{
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

Fixed::Fixed(const int nb):
_RawBits(0)
{
	this->_RawBits = round(nb << this->_binary_point_position);
}

Fixed::Fixed(const float nb):
_RawBits(0)
{
	this->_RawBits = round(nb * (1 << _binary_point_position));
}

// ##############   Destructeur   ##############
Fixed::~Fixed(void)
{
}

// ##############   Surcharge d'operateur   ##############
Fixed& Fixed::operator=(Fixed const & src)
{
	this->_RawBits = src.getRawBits();
	return (*this);
}

bool Fixed::operator>(const Fixed & src) const
{
	if (this->getRawBits() > src.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed & src) const
{
	if (this->getRawBits() < src.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed & src) const
{
	if (this->getRawBits() >= src.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed & src) const
{
	if (this->getRawBits() <= src.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed & src) const
{
	if (this->getRawBits() == src.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed & src) const
{
	if (this->getRawBits() != src.getRawBits())
		return (true);
	return (false);
}

Fixed Fixed::operator+(const Fixed & src) const
{
	Fixed result;
	result.setRawBits((this->getRawBits() + src.getRawBits()));
	return (result);
}

Fixed Fixed::operator-(const Fixed & src) const
{
	Fixed result;
	result.setRawBits((this->getRawBits() - src.getRawBits()));
	return (result);
}

Fixed Fixed::operator*(const Fixed & src) const
{
	Fixed result(this->toFloat() * src.toFloat());
	return (result);
}

Fixed Fixed::operator/(const Fixed & src) const
{
	Fixed result(this->toFloat() / src.toFloat());
	return (result);
}

// ++i
Fixed& Fixed::operator++()
{
	this->_RawBits++;
	return(*this);
}

// i++
Fixed Fixed::operator++(int)
{
	Fixed previous = *this;
	this->_RawBits++;
	return(previous);
}
		
Fixed& Fixed::operator--()
{
	this->_RawBits--;
	return(*this);
}

Fixed Fixed::operator--(int)
{
	Fixed previous = *this;
	this->_RawBits--;
	return(previous);
}

// ##############   Method   ##############
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
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

// ##############   Operateur chevron   ##############
std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

