#ifndef MUTANTSTACK
# define MUTANTSTACK

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
			std::stack<T>::operator=(toCopy);
			return *this;
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
};

#endif
