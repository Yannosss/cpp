#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <exception>
# include <vector>
# include <algorithm>


class Span
{
	public:
		Span(unsigned int _max_number_N);
		Span(const Span& src);
		~Span(void);
		Span& operator=(const Span& src);

		void	addNumber(int to_add);
		long		shortestSpan();
		long		longestSpan();

		class TooMuchNumbersException: public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Too much number in Span");
				}
		};

	private:
		Span(void);
		unsigned int	_max_number_N;
		std::vector<int>		_nb_list;
};

#endif

