#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "\x1B[36m ### test ennonce sujet ###\x1B[37m" << std::endl;
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

	std::cout << "\x1B[36m ### test main sujet ###\x1B[37m" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	std::cout << "\x1B[36m ### test read ideas ###\x1B[37m" << std::endl;
	Cat cat1;
	Cat cat2;
	cat1 = cat2;
	std::cout << "check idea cat1: " << cat1.get_Brain()->get_ideas(0) << std::endl;
	std::cout << "check idea cat2: " << cat2.get_Brain()->get_ideas(0) << std::endl;
	std::cout << "\x1B[36m ### test pour leaks operateur= ###\x1B[37m" << std::endl;
	{
		Cat test1;
		{
			Cat test2 = test1;
		}
		Cat test7;
		{
			Cat test8 = test7;
		}
		Dog test3;
		{
			Dog test4(test3);
		}
		Dog test5;
		{
			Dog test6(test5);
		}
	}
	
	std::cout << "\x1B[36m ### fin des tests ###\x1B[37m" << std::endl;

	return 0;
}
