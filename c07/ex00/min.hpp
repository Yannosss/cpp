#ifndef MIN_HPP
# define MIN_HPP

template <typename T>
T& min(T& arg1, T&arg2)
{
	if (arg1 < arg2)
		return (arg1);
	else
		return (arg2);
}

#endif
