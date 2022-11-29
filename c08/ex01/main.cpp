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
	sp.print_nb_list();


	// check deep copy
	std::cout << "vector copy + modification first number" << std::endl;
	Span sp2 = sp;
	*(sp2.get_nb_list().begin()) = 2;
	std::cout << "--- initial list" << std::endl;
	sp.print_nb_list();

	std::cout << "--- modified list" << std::endl;
	sp2.print_nb_list();



	// test ajout par range
	std::cout << "add range" << std::endl;
	std::vector<int> range_to_add(100) ; // vector with 100 ints = 0.
	int i = 0;
	for(std::vector<int>::iterator it = range_to_add.begin(); it != range_to_add.end(); it++)
	{
		*it = i;
		i = i + 2;
	}
	Span sp3 = Span(102);
	sp3.addNumber(6);
	sp3.addNumber(3);
	sp3.add_range(range_to_add.begin(), range_to_add.end());
	sp3.print_nb_list();

	// teste grand nombre
	int nb_of_int = 30000;
	std::cout << "A lot of numbers test" << std::endl;
	std::vector<int> range_to_add2(nb_of_int) ; // vector with 100 ints = 0.
	i = 0;
	for(std::vector<int>::iterator it = range_to_add2.begin(); it != range_to_add2.end(); it++)
	{
		*it = i;
		i++;
	}
	Span sp4 = Span(nb_of_int);
	sp4.add_range(range_to_add2.begin(), range_to_add2.end());
	//sp4.print_nb_list();

	// test bords fonctions
	std::cout << "test functions limits" << std::endl;
	// test ajout dans taille null
	try
	{
		std::cout << "add when size = 0" << std::endl;
		Span sp5 = Span(0);
		sp5.addNumber(6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// test calcul shortestSpan avec 0 ou 1 ou 2 valeurs
	try
	{
		std::cout << "0 element" << std::endl;
		Span sp6 = Span(10);
		sp6.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "1 element" << std::endl;
		Span sp6 = Span(10);
		sp6.addNumber(6);
		sp6.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "2 element" << std::endl;
		Span sp6 = Span(10);
		sp6.addNumber(6);
		sp6.addNumber(6);
		sp6.shortestSpan();
		std::cout << "ok" << std::endl;
	}
	// test calcul longestSpan avec 0 ou 1 ou 2 valeurs
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "0 element" << std::endl;
		Span sp6 = Span(10);
		sp6.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "1 element" << std::endl;
		Span sp6 = Span(10);
		sp6.addNumber(6);
		sp6.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "2 element" << std::endl;
		Span sp6 = Span(10);
		sp6.addNumber(6);
		sp6.addNumber(6);
		sp6.longestSpan();
		std::cout << "ok" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	





}
