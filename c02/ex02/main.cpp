#include "Fixed.hpp"

// main correction
int main_( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}

// main ex02
int main(void)
{
	Fixed a(14.5f);
	Fixed b(-10);
	Fixed const c(6.2f);
	Fixed const d(-2);

	std::cout << "### Values ###" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << std::endl;

	std::cout << "### Comparison tests ###" << std::endl;
	std::cout << "operation b > c: " << (b > c) << std::endl;
	std::cout << "operation b < c: " << (b < c) << std::endl;
	std::cout << "operation b >= c: " << (b >= c) << std::endl;
	std::cout << "operation b <= c: " << (b <= c) << std::endl;
	std::cout << "operation b == c: " << (b == c) << std::endl;
	std::cout << "operation b != c: " << (b != c) << std::endl;
	std::cout << std::endl;

	std::cout << "### Operation tests ###" << std::endl;
	std::cout << "operation b + c: " << (b + c) << std::endl;
	std::cout << "operation b - c: " << (b - c) << std::endl;
	std::cout << "operation b * c: " << (b * c) << std::endl;
	std::cout << "operation b / c: " << (b / c) << std::endl;
	std::cout << std::endl;

	std::cout << "### Incrementation tests ###" << std::endl;
	std::cout << "b, b++, b " << b << b++ << b << std::endl;
	std::cout << "b, b--, b " << b << b-- << b << std::endl;
	std::cout << "b, ++b, b " << b << ++b << b << std::endl;	
	std::cout << "b, --b, b " << b << --b << b << std::endl;
	std::cout << std::endl;

	std::cout << "### Min/max tests ###" << std::endl;
	std::cout << "min a b: " << Fixed::min(a, b) << std::endl;
	std::cout << "min b a: " << Fixed::min(b, a) << std::endl;
	std::cout << "max a b: " << Fixed::max(a, b) << std::endl;
	std::cout << "max b a: " << Fixed::max(b, a) << std::endl;

	std::cout << "min c d: " << Fixed::min(c, d) << std::endl;
	std::cout << "min d c: " << Fixed::min(d, c) << std::endl;
	std::cout << "max c d: " << Fixed::max(c, d) << std::endl;
	std::cout << "max d c: " << Fixed::max(d, c) << std::endl;

	return (0);
}

