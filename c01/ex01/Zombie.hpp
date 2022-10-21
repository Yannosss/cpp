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
		void set_name(std::string name);

	private:
		std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
