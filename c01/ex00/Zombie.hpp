#ifndef ZOMBIE_CPP
# define ZOMBIE_CPP
# include <string>
# include <iostream>

class Zombie
{
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void announce(void);

	private:
		std::string _name;
};

#endif

Zombie* newZombie(std::string name);
void randomChump(std::string name);
