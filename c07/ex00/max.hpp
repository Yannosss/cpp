#ifndef MAX_HPP
# define MAX_HPP

template <typename T>
T& max(T& arg1, T&arg2)
{
	if (arg1 > arg2)
		return (arg1);
	else
		return (arg2);
}

#endif
