#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <exception>

class NotFoundException: public std::exception
{
	public:
		virtual const char * what() const throw()
		{
			return ("Int not found");
		}
};

template <typename T>
typename T::iterator easyfind(T& container, int nb)
{
	if (std::find(container.begin(), container.end(), nb) != container.end())
	{
		return (std::find(container.begin(), container.end(), nb));
	}
	else
	{
		throw NotFoundException();
	}	
}

#endif
