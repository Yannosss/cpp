#include <string>
#include "Zombie.hpp"



int main(void)
{
	// creation zombie avec fonction newZombie
	Zombie *zombie1 = newZombie("boo");
	zombie1->announce();
	delete zombie1;

	// creation zombie avec fonction randomChump
	randomChump("bi");
}
