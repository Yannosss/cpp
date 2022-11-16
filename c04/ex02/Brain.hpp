#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain& src);
		~Brain(void);
		Brain& operator=(const Brain& src);

		std::string get_ideas(int index) const;

	protected:
		std::string _ideas[100];
};


#endif
