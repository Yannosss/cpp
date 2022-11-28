#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <list>
#include <algorithm>

#include "easyfind.hpp"

int main()
{
	// ##### check vector
	std::cout << "\x1B[36m### check vector ###\x1B[37m" << std::endl;
	{
		try
		{
			std::vector<int> v1;
			v1.push_back(1);
			v1.push_back(5);
			v1.push_back(4);
			v1.push_back(24);
			v1.push_back(5);
			v1.push_back(12);
			// check retour sur 1er occurence
			std::cout << "check retour sur 1er occurence" << std::endl;
			std::vector<int>::iterator it_returned = easyfind(v1, 5);
			for(std::vector<int>::iterator it = it_returned; it != v1.end(); it++)
			{
				std::cout << "check return: " << *it << std::endl;
			}
			// check retour sur dernier element
			std::cout << "check retour sur dernier element" << std::endl;
			it_returned = easyfind(v1, 12);
			for(std::vector<int>::iterator it = it_returned; it != v1.end(); it++)
			{
				std::cout << "check return: " << *it << std::endl;
			}
			// check retour sur element non existant
			std::cout << "check retour sur element non existant" << std::endl;
			it_returned = easyfind(v1, 112);
		}
		catch(const std::exception& e)
		{
			std::cout << "Exception catch:" << std::endl;
			std::cerr << e.what() << '\n';
		}
		}

	// ##### check list
	std::cout << "\x1B[36m### check list ###\x1B[37m" << std::endl;
	{
	try
		{
			std::list<int> v1;
			v1.push_back(1);
			v1.push_back(5);
			v1.push_back(4);
			v1.push_back(24);
			v1.push_back(5);
			v1.push_back(12);
			// check retour sur 1er occurence
			std::cout << "check retour sur 1er occurence" << std::endl;
			std::list<int>::iterator it_returned = easyfind(v1, 5);
			for(std::list<int>::iterator it = it_returned; it != v1.end(); it++)
			{
				std::cout << "check return: " << *it << std::endl;
			}
			// check retour sur dernier element
			std::cout << "check retour sur dernier element" << std::endl;
			it_returned = easyfind(v1, 12);
			for(std::list<int>::iterator it = it_returned; it != v1.end(); it++)
			{
				std::cout << "check return: " << *it << std::endl;
			}
			// check retour sur element non existant
			std::cout << "check retour sur element non existant" << std::endl;
			it_returned = easyfind(v1, 112);
		
		}
		catch(const std::exception& e)
		{
			std::cout << "Exception catch:" << std::endl;
			std::cerr << e.what() << '\n';
		}
	}
}
