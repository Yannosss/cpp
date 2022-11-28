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
	//Span sp2 = sp;

	//for(std::vector<int>::iterator it = sp2.begin(); it != sp2.end(); it++)
	//{
	//	std::cout << *it << std::cout;
	//}

}
