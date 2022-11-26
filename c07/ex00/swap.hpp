#ifndef SWAP_HPP
# define SWAP_HPP

template <typename T>
void swap(T& arg1, T&arg2)
{
	T tmp = arg1;
	arg1 = arg2;
	arg2 = tmp;
}

#endif
