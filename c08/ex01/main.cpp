#include "Span.hpp"

int main()
{
	// test sujet
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	// tests perso
	//// visu vector ini
	//std::cout << "\x1B[36mvector ini\x1B[37m" << std::endl;
	//sp.print_nb_list();

	//// check deep copy
	//std::cout << "\x1B[36mvector copy + modification first number\x1B[37m" << std::endl;
	//Span sp2 = sp;
	//*(sp2.get_nb_list().begin()) = 2;
	//std::cout << "--- initial list" << std::endl;
	//sp.print_nb_list();

	//std::cout << "--- modified list" << std::endl;
	//sp2.print_nb_list();

	//// test ajout par range
	//std::cout << "\x1B[36madd range (add 6, 3 and a range)\x1B[37m" << std::endl;
	//std::vector<int> range_to_add(100) ; // vector with 100 ints = 0.
	//int i = 0;
	//for(std::vector<int>::iterator it = range_to_add.begin(); it != range_to_add.end(); it++)
	//{
	//	*it = i;
	//	i = i + 2;
	//}
	//Span sp3 = Span(102);
	//sp3.addNumber(6);
	//sp3.addNumber(3);
	//sp3.add_range(range_to_add.begin(), range_to_add.end());
	//sp3.print_nb_list();

	//// teste grand nombre
	//int nb_of_int = 30000;
	//std::cout << "\x1B[36mA lot of numbers test (no return) = ok)\x1B[37m" << std::endl;
	//std::vector<int> range_to_add2(nb_of_int) ; // vector with 100 ints = 0.
	//i = 0;
	//for(std::vector<int>::iterator it = range_to_add2.begin(); it != range_to_add2.end(); it++)
	//{
	//	*it = i;
	//	i++;
	//}
	//Span sp4 = Span(nb_of_int);
	//sp4.add_range(range_to_add2.begin(), range_to_add2.end());
	////sp4.print_nb_list();

	//// test bords fonctions
	//std::cout << "\x1B[36mtest functions limits\x1B[37m" << std::endl;
	//// test ajout dans taille null
	//try
	//{
	//	std::cout << "\x1B[36madd when size = 0\x1B[37m" << std::endl;
	//	Span sp5 = Span(0);
	//	sp5.addNumber(6);
	//}
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << '\n';
	//}
	//// test calcul shortestSpan avec 0 ou 1 ou 2 valeurs
	//try
	//{
	//	std::cout << "\x1B[36mshortestspan with 0 element\x1B[37m" << std::endl;
	//	Span sp6 = Span(10);
	//	sp6.shortestSpan();
	//}
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << '\n';
	//}
	//try
	//{
	//	std::cout << "\x1B[36mshortestspan with 1 element\x1B[37m" << std::endl;
	//	Span sp6 = Span(10);
	//	sp6.addNumber(6);
	//	sp6.shortestSpan();
	//}
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << '\n';
	//}
	//try
	//{
	//	std::cout << "\x1B[36mshortestspan with 2 element\x1B[37m" << std::endl;
	//	Span sp6 = Span(10);
	//	sp6.addNumber(6);
	//	sp6.addNumber(6);
	//	sp6.shortestSpan();
	//	std::cout << "ok" << std::endl;
	//}
	//// test calcul longestSpan avec 0 ou 1 ou 2 valeurs
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << '\n';
	//}
	//try
	//{
	//	std::cout << "\x1B[36mlongestspan with 0 element\x1B[37m" << std::endl;
	//	Span sp6 = Span(10);
	//	sp6.longestSpan();
	//}
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << '\n';
	//}
	//try
	//{
	//	std::cout << "\x1B[36mlongestspan with 1 element\x1B[37m" << std::endl;
	//	Span sp6 = Span(10);
	//	sp6.addNumber(6);
	//	sp6.longestSpan();
	//}
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << '\n';
	//}
	//try
	//{
	//	std::cout << "\x1B[36mlongestspan with 2 element\x1B[37m" << std::endl;
	//	Span sp6 = Span(10);
	//	sp6.addNumber(6);
	//	sp6.addNumber(6);
	//	sp6.longestSpan();
	//	std::cout << "ok" << std::endl;
	//}
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << '\n';
	//}
	////std::cout << "\x1B[36m ### test main sujet << ###\x1B[37m" << std::endl;
	
}
