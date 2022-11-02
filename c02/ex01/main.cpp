#include "Fixed.hpp"


// main ex02
int main(void)
{
	Fixed a(6.4f);
	Fixed b(-50);
	Fixed const c(42.42f);


	
	std::cout << "operation b > c: " << (b > c) << std::endl;
	std::cout << "operation b < c: " << (b < c) << std::endl;
	std::cout << "operation b >= c: " << (b >= c) << std::endl;
	std::cout << "operation b <= c: " << (b <= c) << std::endl;
	std::cout << "operation b == c: " << (b == c) << std::endl;
	std::cout << "operation b != c: " << (b != c) << std::endl;
	std::cout << std::endl;

	std::cout << "operation b + c: " << (b + c) << std::endl;
	std::cout << "operation b - c: " << (b - c) << std::endl;
	std::cout << "operation b * c: " << (b * c) << std::endl;
	std::cout << "operation b / c: " << (b / c) << std::endl;

	std::cout << "b, b++, b " << b << b++ << b << std::endl;
	std::cout << "b, b--, b " << b << b-- << b << std::endl;
	std::cout << "b, ++b, b " << b << ++b << b << std::endl;	
	std::cout << "b, --b, b " << b << --b << b << std::endl;

	std::cout << "min a b: " << Fixed::min(a, b) << std::endl;
	std::cout << "min b a: " << Fixed::min(b, a) << std::endl;
	std::cout << "max a b: " << Fixed::max(a, b) << std::endl;
	std::cout << "max b a: " << Fixed::max(b, a) << std::endl;









	return (0);
}


// main ex01
int main_(void)
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;


	//// tests perso
	//std::cout << "### nb1 ###" << std::endl;
	//Fixed nb1;
	//nb1.setRawBits(-1);
	//nb1.print_rawbits_binary();

	//std::cout << "### nb2 ###" << std::endl;
	//Fixed nb2(27.5299f);
	//nb2.print_rawbits_binary();
	//std::cout << "to float: " << nb2.toFloat() << std::endl;
	//std::cout << "to int: " << nb2.toInt() << std::endl;


	//Fixed nb3(27);
	//nb3.print_rawbits_binary();
	//std::cout << "to float: " << nb3.toFloat() << std::endl;
	//std::cout << "to int: " << nb3.toInt() << std::endl;

	//std::cout << "test surcharge" << std::endl;
	//std::cout << nb1 << " - " << nb2 << " - " << nb3 << std::endl;



	return 0;
}

//// main test perso
//int	main(void)
//{
//	Fixed nb1;
//	nb1.setRawBits(777);
//	std::cout << "get val: " << nb1.getRawBits() << std::endl;
//	Fixed nb2(nb1);

//	nb1.setRawBits(666);
//	//nb2 = nb1;

//	std::cout << "get val: " << nb1.getRawBits() << std::endl;
//	std::cout << "get val: " << nb2.getRawBits() << std::endl;

//	std::cout << "get bin pos: " << nb1.get_binary_point_position() << std::endl;
//	std::cout << "get bin pos: " << nb2.get_binary_point_position() << std::endl;
	
//}
