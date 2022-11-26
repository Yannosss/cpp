#include <iostream>
#include "Array.hpp"

int main()
{
	int* a = new int[4];
	a[0] = 1;
	a[1] = 1;
	a[2] = 1;
	a[3] = 1;
	std::cout << "test a: " << a[0] << std::endl;
	std::cout << "test a: " << a[1] << std::endl;
	std::cout << "test a: " << a[2] << std::endl;
	std::cout << "test a: " << a[3] << std::endl;

	int* b = new int();
	std::cout << "test b: " << b[0] << std::endl;
	//std::cout << "test b: " << b[1] << std::endl;



	// jouer main de test dans projet

}
