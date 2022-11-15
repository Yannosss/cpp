#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	int size = 2;
	Animal* tab[size];
	
	for (int i = 0; i < size; i++)
	{
		if (i % 2)
		{
			tab[i] = new Cat();
		}
		else
		{
			tab[i] = new Dog();
		}
	}
	for (int i = 0; i < size; i++)
	{
		delete tab[i];
	}

	// check leaks
	Cat cat1;
	Cat cat2;
	cat1 = cat2;
	cat1._brain->_ideas[0] = "id1";
	cat2._brain->_ideas[0] = "id2";

	std::cout << "check idea: " << cat2._brain->_ideas[0] << std::endl;
	return 0;
}
