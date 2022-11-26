#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	print_param(T& param)
{
	std::cout << param << std::endl;
}

template <typename T>
void	sum(T& param)
{
	param = param + param;
}

template <typename T>
void iter(T* tab, size_t size, void(*function)(T& func_param))
{
	if (!tab || size <= 0)
		return ;
	for (size_t i = 0; i < size; i++)
	{
		function(tab[i]);
	}
}

#endif
