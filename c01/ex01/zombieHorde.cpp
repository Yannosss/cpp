#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombie_tab = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombie_tab[i].set_name(name);
	}
	return (zombie_tab);

}


