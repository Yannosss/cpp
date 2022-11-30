#include <iostream>
#include "whatever.hpp"

// main sujet
int main( void ) 
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}

//// main perso
//int main()
//{
//	int int1 = 1;
//	int int2 = 2;

//	float f1 = 3.0f;
//	float f2 = 4.0f;

//	std::cout << "int1: " << int1 << std::endl;
//	std::cout << "int2: " << int2 << std::endl;
//	swap<int>(int1, int2);
//	std::cout << "int1: " << int1 << std::endl;
//	std::cout << "int2: " << int2 << std::endl;

//	std::cout << "-------" << std::endl;

//	std::cout << "f1: " << f1 << std::endl;
//	std::cout << "f2: " << f2 << std::endl;
//	swap<float>(f1, f2);
//	std::cout << "f1: " << f1 << std::endl;
//	std::cout << "f2: " << f2 << std::endl;

//	// reinitialisation
//	swap(int1, int2);
//	swap(f1, f2);

//	std::cout << "#######" << std::endl;
//	// test min/max
//	std::cout << "int1: " << int1 << std::endl;
//	std::cout << "int2: " << int2 << std::endl;
//	std::cout << "mini: " << min<int>(int1, int2) << std::endl;
//	std::cout << "maxi: " << max<int>(int1, int2) << std::endl;

//	std::cout << "-------" << std::endl;
//	std::cout << "f1: " << f1 << std::endl;
//	std::cout << "f2: " << f2 << std::endl;
//	std::cout << "mini: " << min<float>(f1, f2) << std::endl;
//	std::cout << "maxi: " << max<float>(f1, f2) << std::endl;

//}
