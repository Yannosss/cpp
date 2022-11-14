#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		Animal(void);
		std::string getType(void) const;
		virtual void makeSound(void) const;

	protected:
		std::string type;
};

class Dog: public Animal
{
	public:
		Dog(void);
		virtual void makeSound(void) const;

};

class Cat: public Animal
{
	public:
		Cat(void);
		virtual void makeSound(void) const;

};

class WrongAnimal
{
	public:
		WrongAnimal(void);
		std::string getType(void) const;
		void makeSound(void) const;

	protected:
		std::string type;
};

class WrongCat: public WrongAnimal
{
	public:
		WrongCat(void);
		void makeSound(void) const;

};



#endif
