#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		Animal(void);
		Animal(const Animal& src);
		~Animal(void);
		Animal& operator=(const Animal& src);

		std::string getType(void) const;
		virtual void makeSound(void) const;

	protected:
		std::string type;
};


#endif
