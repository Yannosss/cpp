#include <string>
#include "Zombie.hpp"

int main(void)
{
	// creation tableau de zombies
	Zombie* zombie_tab = zombieHorde(6, "Booboo");
	// verification de leur nom
	for (int i = 0; i < 6; i++)
		zombie_tab[i].announce();
	// suppression du  tableau
	delete [] zombie_tab;
}
