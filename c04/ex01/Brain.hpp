#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain& src);
		virtual ~Brain(void);
		Brain& operator=(const Brain& src);

		std::string _ideas[100]; // remettre en private
	protected:
};


#endif
