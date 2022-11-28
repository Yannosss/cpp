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

long		Span::shortestSpan()
{
	std::vector<int> copy = this->_nb_list;
	std::sort(copy.begin(), copy.end());
	long shortest_span = abs(copy.begin() - copy.end());
	std::vector<int>::iterator previous_it;
	for(std::vector<int>::iterator it = copy.begin(); it != copy.end(); it++)
	{
		if (it != copy.begin())
		{
			//https://cplusplus.com/reference/cstdlib/abs/
			if (abs(*previous_it - *it) < shortest_span)
				shortest_span = abs(*previous_it - *it);
		}
		previous_it = it;
	}
	return (shortest_span);
}

long		Span::longestSpan()
{
	int min = *std::min_element(this->_nb_list.begin(), this->_nb_list.end());
	int max = *std::max_element(this->_nb_list.begin(), this->_nb_list.end());
	return (max - min);
}
