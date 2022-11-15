#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& src);
		~WrongAnimal(void);
		WrongAnimal& operator=(const WrongAnimal& src);

		std::string getType(void) const;
		void makeSound(void) const;

	protected:
		std::string type;
};


#endif
