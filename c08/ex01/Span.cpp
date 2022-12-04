#include "Span.hpp"

// Constructors/destructors
Span::Span():
_max_number_N(0)
{
}

Span::Span(unsigned int max_number):
_max_number_N(max_number)
{
}

Span::Span(const Span& src)
{
	*this = src;
}

Span::~Span(void)
{
}

Span& Span::operator=(const Span& src)
{
	this->_max_number_N = src._max_number_N;
	this->_nb_list = src._nb_list;
	return (*this);
}

//get
std::vector<int>& Span::get_nb_list()
{
	return (this->_nb_list);
}

// functions
void	Span::addNumber(int to_add)
{
	if (_nb_list.size() >= _max_number_N)
		throw TooMuchNumbersException();
	_nb_list.push_back(to_add);
}

void	Span::addNumber(std::vector<int>::iterator it_start, std::vector<int>::iterator it_end)
{
	for (std::vector<int>::iterator it = it_start; it < it_end; it++)
	{
		this->addNumber(*it);
	}
}

long		Span::shortestSpan()
{
	if (this->_nb_list.size() < 2)
		throw NotEnoughElementToFindDistanceException();

	long delta;
	std::vector<int> copy = this->_nb_list;
	std::sort(copy.begin(), copy.end());
	long shortest_span = copy.begin() - copy.end();
	if (shortest_span < 0)
		shortest_span = -shortest_span;
	std::vector<int>::iterator previous_it;
	for(std::vector<int>::iterator it = copy.begin(); it != copy.end(); it++)
	{
		if (it != copy.begin())
		{
			delta = *previous_it - *it;
			if (delta < 0)
				delta = -delta;
			if (delta < shortest_span)
				shortest_span = delta;
		}
		previous_it = it;
	}
	return (shortest_span);
}

long		Span::longestSpan()
{
	if (this->_nb_list.size() < 2)
		throw NotEnoughElementToFindDistanceException();
		
	int min = *std::min_element(this->_nb_list.begin(), this->_nb_list.end());
	int max = *std::max_element(this->_nb_list.begin(), this->_nb_list.end());
	return (max - min);
}

void	Span::print_nb_list()
{
	std::cout << "- nb_list -" << std::endl;

	for(std::vector<int>::iterator it = (this->_nb_list).begin(); it != (this->_nb_list).end(); it++)
	{
		std::cout << *it << " - ";
	}
	std::cout << std::endl;

}
