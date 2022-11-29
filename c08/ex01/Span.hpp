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

		std::vector<int>& get_nb_list();

		void	addNumber(int to_add);
		long	shortestSpan();
		long	longestSpan();
		void	add_range(std::vector<int>::iterator it_start, std::vector<int>::iterator it_end);
		void	print_nb_list();


		class TooMuchNumbersException: public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Too much number in Span");
				}
		};
		class NotEnoughElementToFindDistanceException: public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("There is not enough elements to calculate a distance");
				}
		};

	private:
		Span(void);
		unsigned int	_max_number_N;
		std::vector<int>		_nb_list;
};

#endif

