#include "Fixed.hpp"

int main(void)
{
	Fixed nb1(7.5);

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
