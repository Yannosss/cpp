#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat(void);
		Cat(const Cat& src);
		~Cat(void);
		Cat& operator=(const Cat &src);

		void makeSound(void) const;
		Brain* get_Brain(void) const;
	
	private:
		Brain* _brain;

};

#endif

