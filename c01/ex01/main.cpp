#include <string>
#include "Zombie.hpp"



int main(void)
{
	Zombie* zombie_tab = zombieHorde(5, "Booboo");
	for (int i = 0; i < 5; i++)
		zombie_tab[i].announce();
	delete [] zombie_tab;
}
