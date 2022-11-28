#include "Span.hpp"

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	// tests perso
	// visu vector ini
	std::cout << "vector ini" << std::endl;
	for(std::vector<int>::iterator it = (sp.get_nb_list()).begin(); it != (sp.get_nb_list()).end(); it++)
	{
		std::cout << *it << std::endl;
	}

	// check deep copy
	std::cout << "vector copy + modification first number" << std::endl;
	Span sp2 = sp;
	*(sp2.get_nb_list().begin()) = 2;
	std::cout << "--- initial list" << std::endl;
	for(std::vector<int>::iterator it = (sp.get_nb_list()).begin(); it != (sp.get_nb_list()).end(); it++)
	{
		std::cout << *it << std::endl;
	}
	std::cout << "--- modified list" << std::endl;
	for(std::vector<int>::iterator it = sp2.get_nb_list().begin(); it != sp2.get_nb_list().end(); it++)
	{
		std::cout << *it << std::endl;
	}
	// tester > 10000 nb

}
