#include <iostream>
# include <cstdlib>
# include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	static bool rand_is_initialised = false;
	if (!rand_is_initialised)
	{
		srand((unsigned) time(NULL)); // init seed pour random
		rand_is_initialised = true;
	}
	int random = rand();
	if (random % 3 == 0)
	{
		A* pt_A = new A;
		return (pt_A);	
	}
	else if (random % 3 == 1)
	{
		B* pt_B = new B;
		return (pt_B);	
	}
	else
	{
		C* pt_C = new C;
		return (pt_C);	
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
	{
		std::cout << "Type is A" << std::endl;
	}
	if (dynamic_cast<B*>(p) != NULL)
	{
		std::cout << "Type is B" << std::endl;
	}
	if (dynamic_cast<C*>(p) != NULL)
	{
		std::cout << "Type is C" << std::endl;
	}
}

void identify(Base& p)
{
	Base& check = p;
	try
	{
		check = dynamic_cast<A&>(p);
		std::cout << "Type is A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			check = dynamic_cast<B&>(p);
			std::cout << "Type is B" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "Type is C" << std::endl;
		}
	}
}

int main(void)
{
	Base* pt_random = generate();

	identify(pt_random);
	identify(*pt_random);

	return (0);
}
