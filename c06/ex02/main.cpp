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
	if (random % 3 == 1)
	{
		B* pt_B = new B;
		return (pt_B);	
	}
	if (random % 3 == 2)
	{
		C* pt_C = new C;
		return (pt_C);	
	}
}

void identify(Base* p)
{

}

void identify(Base& p)
{

}



int main(void)
{
	Base* pt_random_base = generate();
	return (0);
}
