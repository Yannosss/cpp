#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <algorithm>


template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(void)
		{
		}
		MutantStack(const MutantStack& src):
		std::stack<T>(src)
		{
		}
		~MutantStack(void){
		}
		MutantStack& operator=(const MutantStack& src)
		{
			this->c = src.c;
			return *this;
		}
		//https://gcc.gnu.org/onlinedocs/gcc-4.6.2/libstdc++/api/a01065_source.html
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }		
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		reverse_iterator rbegin() { return this->c.rbegin(); }
		reverse_iterator rend() { return this->c.rend(); }
};

#endif
